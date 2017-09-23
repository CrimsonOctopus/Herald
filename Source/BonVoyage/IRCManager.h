// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Networking.h"

#include "IRCManager.generated.h"

UCLASS()
class BONVOYAGE_API AIRCManager : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString commandIdentifier;
	
public:	
	// Sets default values for this actor's properties
	AIRCManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	FSocket* ListenerSocket;
	FSocket* ConnectionSocket;
	FTimerHandle timerHandle;
	
	void SocketListener();

	void SendLogin();

	bool SendString(FString msg);

	void ParseMessage(FString msg);

	void ReceivedChatMessage(FString user, FString msg);

public:
	UFUNCTION(BlueprintCallable, Category = "ChatMessage")
	bool SendStringToViewer(FString user, FString msg);

	UFUNCTION(BlueprintCallable, Category = "ChatMessage")
	bool SendStringToChatroom(FString msg);

	UFUNCTION(BlueprintImplementableEvent, Category = "ChatMessage")
	void HandleChatMessage(const FString& user, const FString& msg);
	virtual void HandleChatMessage_Implementation(FString& user, FString& msg);
};
