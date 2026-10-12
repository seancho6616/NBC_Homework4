// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBCChat/Game/NBCChatGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBCChatGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NBCCHAT_API UClass* Z_Construct_UClass_ANBCChatGameModeBase();
NBCCHAT_API UClass* Z_Construct_UClass_ANBCChatGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBCChat();
// End Cross Module References

// Begin Class ANBCChatGameModeBase
void ANBCChatGameModeBase::StaticRegisterNativesANBCChatGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBCChatGameModeBase);
UClass* Z_Construct_UClass_ANBCChatGameModeBase_NoRegister()
{
	return ANBCChatGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ANBCChatGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/NBCChatGameModeBase.h" },
		{ "ModuleRelativePath", "Game/NBCChatGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBCChatGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANBCChatGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NBCChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCChatGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBCChatGameModeBase_Statics::ClassParams = {
	&ANBCChatGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCChatGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBCChatGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBCChatGameModeBase()
{
	if (!Z_Registration_Info_UClass_ANBCChatGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBCChatGameModeBase.OuterSingleton, Z_Construct_UClass_ANBCChatGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBCChatGameModeBase.OuterSingleton;
}
template<> NBCCHAT_API UClass* StaticClass<ANBCChatGameModeBase>()
{
	return ANBCChatGameModeBase::StaticClass();
}
ANBCChatGameModeBase::ANBCChatGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBCChatGameModeBase);
ANBCChatGameModeBase::~ANBCChatGameModeBase() {}
// End Class ANBCChatGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBCChat_Source_NBCChat_Game_NBCChatGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBCChatGameModeBase, ANBCChatGameModeBase::StaticClass, TEXT("ANBCChatGameModeBase"), &Z_Registration_Info_UClass_ANBCChatGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBCChatGameModeBase), 50409740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBCChat_Source_NBCChat_Game_NBCChatGameModeBase_h_3158655271(TEXT("/Script/NBCChat"),
	Z_CompiledInDeferFile_FID_NBCChat_Source_NBCChat_Game_NBCChatGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBCChat_Source_NBCChat_Game_NBCChatGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
