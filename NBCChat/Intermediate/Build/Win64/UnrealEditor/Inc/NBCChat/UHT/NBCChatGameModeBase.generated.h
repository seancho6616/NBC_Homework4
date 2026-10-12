// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/NBCChatGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBCCHAT_NBCChatGameModeBase_generated_h
#error "NBCChatGameModeBase.generated.h already included, missing '#pragma once' in NBCChatGameModeBase.h"
#endif
#define NBCCHAT_NBCChatGameModeBase_generated_h

#define FID_NBCChat_Source_NBCChat_Game_NBCChatGameModeBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBCChatGameModeBase(); \
	friend struct Z_Construct_UClass_ANBCChatGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ANBCChatGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBCChat"), NO_API) \
	DECLARE_SERIALIZER(ANBCChatGameModeBase)


#define FID_NBCChat_Source_NBCChat_Game_NBCChatGameModeBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANBCChatGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBCChatGameModeBase(ANBCChatGameModeBase&&); \
	ANBCChatGameModeBase(const ANBCChatGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBCChatGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBCChatGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANBCChatGameModeBase) \
	NO_API virtual ~ANBCChatGameModeBase();


#define FID_NBCChat_Source_NBCChat_Game_NBCChatGameModeBase_h_11_PROLOG
#define FID_NBCChat_Source_NBCChat_Game_NBCChatGameModeBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBCChat_Source_NBCChat_Game_NBCChatGameModeBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_NBCChat_Source_NBCChat_Game_NBCChatGameModeBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBCCHAT_API UClass* StaticClass<class ANBCChatGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBCChat_Source_NBCChat_Game_NBCChatGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
