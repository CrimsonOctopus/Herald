// Fill out your copyright notice in the Description page of Project Settings.
#include "IRCManager.h"
#include <string>

// Sets default values
AIRCManager::AIRCManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AIRCManager::BeginPlay()
{
	Super::BeginPlay();
	
	FIPv4Endpoint Endpoint(FIPv4Address(127, 0, 0, 1), 6667);
	FSocket* ListenerSocket = FTcpSocketBuilder(TEXT("TwitchListener"))
		.AsReusable()
		.BoundToEndpoint(Endpoint)
		.Listening(8);

	//Set Buffer Size
	int32 NewSize = 0;
	ListenerSocket->SetReceiveBufferSize(2 * 1024 * 1024, NewSize);

	GetWorldTimerManager().SetTimer(timerHandle, this, &AIRCManager::SocketListener, 0.01, true);

	SendLogin();
}

// Called every frame
void AIRCManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AIRCManager::SocketListener()
{
	//Byte array
	TArray<uint8> ReceivedData;
	uint32 Size;
	bool Received = false;
	while (ListenerSocket->HasPendingData(Size))
	{
		Received = true;
		ReceivedData.SetNumUninitialized(FMath::Min(Size, 65507u));

		int32 Read = 0;
		ListenerSocket->Recv(ReceivedData.GetData(), ReceivedData.Num(), Read);
	}
	if (Received)
	{
		const std::string cstr(reinterpret_cast<const char*>(ReceivedData.GetData()), ReceivedData.Num());
		FString fs(cstr.c_str());

		ParseMessage(fs);
	}
}

void AIRCManager::ParseMessage(FString msg)
{
	TArray<FString> lines;
	msg.ParseIntoArrayLines(lines);
	for (FString fs : lines)
	{
		TArray<FString> parts;
		fs.ParseIntoArray(parts, TEXT(":"));
		TArray<FString> meta;
		parts[0].ParseIntoArrayWS(meta);
		if (parts.Num() >= 2)
		{
			if (meta[0] == TEXT("PING"))
			{
				SendString(TEXT("PONG :tmi.twitch.tv"));
			}
			else if (meta.Num() == 3 && meta[1] == TEXT("PRIVMSG"))
			{
				FString message = parts[1];
				if (parts.Num() > 2)
				{
					for (int i = 2; i < parts.Num(); i++)
					{
						message += TEXT(":") + parts[i];
					}
				}
				FString username;
				FString tmp;
				meta[0].Split(TEXT("!"), &username, &tmp);
				ReceivedChatMessage(username, message);
				continue;
			}
		}
	}
}

void AIRCManager::HandleChatMessage_Implementation(FString& user, FString& msg) {
	UE_LOG(LogTemp, Warning, TEXT("%s: %s"), *user, *msg);
}

void AIRCManager::ReceivedChatMessage(FString user, FString msg)
{
	if (msg.Mid(0,2).Contains(commandIdentifier, ESearchCase::CaseSensitive, ESearchDir::FromStart)) {
		UE_LOG(LogTemp, Warning, TEXT("%s: %s"), *user, *msg);
		HandleChatMessage(user, msg);
	}
}

void AIRCManager::SendLogin()
{
	auto ResolveInfo = ISocketSubsystem::Get()->GetHostByName("irc.twitch.tv");
	while (!ResolveInfo->IsComplete());
	if (ResolveInfo->GetErrorCode() != 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Couldn't resolve hostname."));
		return;
	}

	const FInternetAddr* Addr = &ResolveInfo->GetResolvedAddress();
	uint32 OutIP = 0;
	Addr->GetIp(OutIP);
	int32 port = 6667;

	TSharedRef<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	addr->SetIp(OutIP);
	addr->SetPort(port);

	ListenerSocket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);

	bool connected = ListenerSocket->Connect(*addr);
	if (!connected)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to connect."));
		if (ListenerSocket)
			ListenerSocket->Close();
		return;
	}

	SendString(TEXT("PASS oauth:78xytjqrf9xlnceco3g8dsms8sxx9k"));
	SendString(TEXT("NICK crimsonoctopus"));
	SendString(TEXT("JOIN #crimsonoctopus"));
}

bool AIRCManager::SendString(FString msg)
{
	FString serialized = msg + TEXT("\r\n");
	TCHAR *serializedChar = serialized.GetCharArray().GetData();
	int32 size = FCString::Strlen(serializedChar);
	int32 sent = 0;

	return ListenerSocket->Send((uint8*)TCHAR_TO_UTF8(serializedChar), size, sent);
}

bool AIRCManager::SendStringToViewer(FString user, FString msg)
{
	SendString(TEXT("CAP REQ :twitch.tv/commands"));
	return SendString(TEXT("PRIVMSG #crimsonoctopus :.w ")+user+" "+msg);
}

bool AIRCManager::SendStringToChatroom(FString msg)
{
	return SendString(TEXT("PRIVMSG #crimsonoctopus :") + msg);
}
