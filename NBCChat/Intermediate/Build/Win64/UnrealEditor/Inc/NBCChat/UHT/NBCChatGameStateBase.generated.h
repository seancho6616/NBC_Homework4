// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/NBCChatGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBCCHAT_NBCChatGameStateBase_generated_h
#error "NBCChatGameStateBase.generated.h already included, missing '#pragma once' in NBCChatGameStateBase.h"
#endif
#define NBCCHAT_NBCChatGameStateBase_generated_h

#define FID_NBCChat_Source_NBCChat_Game_NBCChatGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString); \
	DECLARE_FUNCTION(execMulticastRPCBroadcastLoginMessage);


#define FID_NBCChat_Source_NBCChat_Game_NBCChatGameStateBase_h_15_CALLBACK_WRAPPERS
#define FID_NBCChat_Source_NBCChat_Game_NBCChatGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBCChatGameStateBase(); \
	friend struct Z_Construct_UClass_ANBCChatGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ANBCChatGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBCChat"), NO_API) \
	DECLARE_SERIALIZER(ANBCChatGameStateBase)


#define FID_NBCChat_Source_NBCChat_Game_NBCChatGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANBCChatGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBCChatGameStateBase(ANBCChatGameStateBase&&); \
	ANBCChatGameStateBase(const ANBCChatGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBCChatGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBCChatGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANBCChatGameStateBase) \
	NO_API virtual ~ANBCChatGameStateBase();


#define FID_NBCChat_Source_NBCChat_Game_NBCChatGameStateBase_h_12_PROLOG
#define FID_NBCChat_Source_NBCChat_Game_NBCChatGameStateBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBCChat_Source_NBCChat_Game_NBCChatGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NBCChat_Source_NBCChat_Game_NBCChatGameStateBase_h_15_CALLBACK_WRAPPERS \
	FID_NBCChat_Source_NBCChat_Game_NBCChatGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_NBCChat_Source_NBCChat_Game_NBCChatGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBCCHAT_API UClass* StaticClass<class ANBCChatGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBCChat_Source_NBCChat_Game_NBCChatGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
