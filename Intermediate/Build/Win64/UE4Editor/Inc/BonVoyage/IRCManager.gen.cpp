// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "IRCManager.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIRCManager() {}
// Cross Module References
	BONVOYAGE_API UFunction* Z_Construct_UFunction_AIRCManager_HandleChatMessage();
	BONVOYAGE_API UClass* Z_Construct_UClass_AIRCManager();
	BONVOYAGE_API UFunction* Z_Construct_UFunction_AIRCManager_SendStringToChatroom();
	BONVOYAGE_API UFunction* Z_Construct_UFunction_AIRCManager_SendStringToViewer();
	BONVOYAGE_API UClass* Z_Construct_UClass_AIRCManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BonVoyage();
// End Cross Module References
	static FName NAME_AIRCManager_HandleChatMessage = FName(TEXT("HandleChatMessage"));
	void AIRCManager::HandleChatMessage(const FString& user, const FString& msg)
	{
		IRCManager_eventHandleChatMessage_Parms Parms;
		Parms.user=user;
		Parms.msg=msg;
		ProcessEvent(FindFunctionChecked(NAME_AIRCManager_HandleChatMessage),&Parms);
	}
	void AIRCManager::StaticRegisterNativesAIRCManager()
	{
		UClass* Class = AIRCManager::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "SendStringToChatroom", (Native)&AIRCManager::execSendStringToChatroom },
			{ "SendStringToViewer", (Native)&AIRCManager::execSendStringToViewer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AIRCManager_HandleChatMessage()
	{
		UObject* Outer = Z_Construct_UClass_AIRCManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HandleChatMessage"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535, sizeof(IRCManager_eventHandleChatMessage_Parms));
			UProperty* NewProp_msg = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("msg"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(msg, IRCManager_eventHandleChatMessage_Parms), 0x0010000000000080);
			UProperty* NewProp_user = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("user"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(user, IRCManager_eventHandleChatMessage_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ChatMessage"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("IRCManager.h"));
			MetaData->SetValue(NewProp_msg, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_user, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AIRCManager_SendStringToChatroom()
	{
		struct IRCManager_eventSendStringToChatroom_Parms
		{
			FString msg;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AIRCManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SendStringToChatroom"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(IRCManager_eventSendStringToChatroom_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, IRCManager_eventSendStringToChatroom_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, IRCManager_eventSendStringToChatroom_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, IRCManager_eventSendStringToChatroom_Parms), sizeof(bool), true);
			UProperty* NewProp_msg = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("msg"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(msg, IRCManager_eventSendStringToChatroom_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ChatMessage"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("IRCManager.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AIRCManager_SendStringToViewer()
	{
		struct IRCManager_eventSendStringToViewer_Parms
		{
			FString user;
			FString msg;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AIRCManager();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SendStringToViewer"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(IRCManager_eventSendStringToViewer_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, IRCManager_eventSendStringToViewer_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, IRCManager_eventSendStringToViewer_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, IRCManager_eventSendStringToViewer_Parms), sizeof(bool), true);
			UProperty* NewProp_msg = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("msg"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(msg, IRCManager_eventSendStringToViewer_Parms), 0x0010000000000080);
			UProperty* NewProp_user = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("user"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(user, IRCManager_eventSendStringToViewer_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ChatMessage"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("IRCManager.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AIRCManager_NoRegister()
	{
		return AIRCManager::StaticClass();
	}
	UClass* Z_Construct_UClass_AIRCManager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_BonVoyage();
			OuterClass = AIRCManager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AIRCManager_HandleChatMessage());
				OuterClass->LinkChild(Z_Construct_UFunction_AIRCManager_SendStringToChatroom());
				OuterClass->LinkChild(Z_Construct_UFunction_AIRCManager_SendStringToViewer());

				UProperty* NewProp_commandIdentifier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("commandIdentifier"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(commandIdentifier, AIRCManager), 0x0010000000000001);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AIRCManager_HandleChatMessage(), "HandleChatMessage"); // 3720977782
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AIRCManager_SendStringToChatroom(), "SendStringToChatroom"); // 3212654141
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AIRCManager_SendStringToViewer(), "SendStringToViewer"); // 3981711122
				static TCppClassTypeInfo<TCppClassTypeTraits<AIRCManager> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("IRCManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("IRCManager.h"));
				MetaData->SetValue(NewProp_commandIdentifier, TEXT("Category"), TEXT("IRCManager"));
				MetaData->SetValue(NewProp_commandIdentifier, TEXT("ModuleRelativePath"), TEXT("IRCManager.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIRCManager, 3279170275);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIRCManager(Z_Construct_UClass_AIRCManager, &AIRCManager::StaticClass, TEXT("/Script/BonVoyage"), TEXT("AIRCManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIRCManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
