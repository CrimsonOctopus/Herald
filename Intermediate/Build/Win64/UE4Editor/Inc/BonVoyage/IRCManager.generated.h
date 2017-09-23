// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BONVOYAGE_IRCManager_generated_h
#error "IRCManager.generated.h already included, missing '#pragma once' in IRCManager.h"
#endif
#define BONVOYAGE_IRCManager_generated_h

#define BonVoyage_Source_BonVoyage_IRCManager_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendStringToChatroom) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_msg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SendStringToChatroom(Z_Param_msg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendStringToViewer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_user); \
		P_GET_PROPERTY(UStrProperty,Z_Param_msg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SendStringToViewer(Z_Param_user,Z_Param_msg); \
		P_NATIVE_END; \
	}


#define BonVoyage_Source_BonVoyage_IRCManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendStringToChatroom) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_msg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SendStringToChatroom(Z_Param_msg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendStringToViewer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_user); \
		P_GET_PROPERTY(UStrProperty,Z_Param_msg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SendStringToViewer(Z_Param_user,Z_Param_msg); \
		P_NATIVE_END; \
	}


#define BonVoyage_Source_BonVoyage_IRCManager_h_14_EVENT_PARMS \
	struct IRCManager_eventHandleChatMessage_Parms \
	{ \
		FString user; \
		FString msg; \
	};


#define BonVoyage_Source_BonVoyage_IRCManager_h_14_CALLBACK_WRAPPERS
#define BonVoyage_Source_BonVoyage_IRCManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIRCManager(); \
	friend BONVOYAGE_API class UClass* Z_Construct_UClass_AIRCManager(); \
public: \
	DECLARE_CLASS(AIRCManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BonVoyage"), NO_API) \
	DECLARE_SERIALIZER(AIRCManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BonVoyage_Source_BonVoyage_IRCManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAIRCManager(); \
	friend BONVOYAGE_API class UClass* Z_Construct_UClass_AIRCManager(); \
public: \
	DECLARE_CLASS(AIRCManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BonVoyage"), NO_API) \
	DECLARE_SERIALIZER(AIRCManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BonVoyage_Source_BonVoyage_IRCManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIRCManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIRCManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIRCManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIRCManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIRCManager(AIRCManager&&); \
	NO_API AIRCManager(const AIRCManager&); \
public:


#define BonVoyage_Source_BonVoyage_IRCManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIRCManager(AIRCManager&&); \
	NO_API AIRCManager(const AIRCManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIRCManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIRCManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIRCManager)


#define BonVoyage_Source_BonVoyage_IRCManager_h_14_PRIVATE_PROPERTY_OFFSET
#define BonVoyage_Source_BonVoyage_IRCManager_h_11_PROLOG \
	BonVoyage_Source_BonVoyage_IRCManager_h_14_EVENT_PARMS


#define BonVoyage_Source_BonVoyage_IRCManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BonVoyage_Source_BonVoyage_IRCManager_h_14_PRIVATE_PROPERTY_OFFSET \
	BonVoyage_Source_BonVoyage_IRCManager_h_14_RPC_WRAPPERS \
	BonVoyage_Source_BonVoyage_IRCManager_h_14_CALLBACK_WRAPPERS \
	BonVoyage_Source_BonVoyage_IRCManager_h_14_INCLASS \
	BonVoyage_Source_BonVoyage_IRCManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BonVoyage_Source_BonVoyage_IRCManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BonVoyage_Source_BonVoyage_IRCManager_h_14_PRIVATE_PROPERTY_OFFSET \
	BonVoyage_Source_BonVoyage_IRCManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BonVoyage_Source_BonVoyage_IRCManager_h_14_CALLBACK_WRAPPERS \
	BonVoyage_Source_BonVoyage_IRCManager_h_14_INCLASS_NO_PURE_DECLS \
	BonVoyage_Source_BonVoyage_IRCManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BonVoyage_Source_BonVoyage_IRCManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
