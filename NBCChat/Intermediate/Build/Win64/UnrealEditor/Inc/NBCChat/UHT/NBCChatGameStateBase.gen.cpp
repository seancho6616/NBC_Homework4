// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBCChat/Game/NBCChatGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBCChatGameStateBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
NBCCHAT_API UClass* Z_Construct_UClass_ANBCChatGameStateBase();
NBCCHAT_API UClass* Z_Construct_UClass_ANBCChatGameStateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBCChat();
// End Cross Module References

// Begin Class ANBCChatGameStateBase Function MulticastRPCBroadcastLoginMessage
struct NBCChatGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms
{
	FString InNameString;
};
static const FName NAME_ANBCChatGameStateBase_MulticastRPCBroadcastLoginMessage = FName(TEXT("MulticastRPCBroadcastLoginMessage"));
void ANBCChatGameStateBase::MulticastRPCBroadcastLoginMessage(const FString& InNameString)
{
	NBCChatGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms Parms;
	Parms.InNameString=InNameString;
	UFunction* Func = FindFunctionChecked(NAME_ANBCChatGameStateBase_MulticastRPCBroadcastLoginMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANBCChatGameStateBase_MulticastRPCBroadcastLoginMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game/NBCChatGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNameString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InNameString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANBCChatGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::NewProp_InNameString = { "InNameString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBCChatGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms, InNameString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNameString_MetaData), NewProp_InNameString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBCChatGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBCChatGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::NewProp_InNameString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCChatGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBCChatGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBCChatGameStateBase, nullptr, "MulticastRPCBroadcastLoginMessage", nullptr, nullptr, Z_Construct_UFunction_ANBCChatGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCChatGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers), sizeof(NBCChatGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBCChatGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBCChatGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(NBCChatGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBCChatGameStateBase_MulticastRPCBroadcastLoginMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBCChatGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBCChatGameStateBase::execMulticastRPCBroadcastLoginMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InNameString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastRPCBroadcastLoginMessage_Implementation(Z_Param_InNameString);
	P_NATIVE_END;
}
// End Class ANBCChatGameStateBase Function MulticastRPCBroadcastLoginMessage

// Begin Class ANBCChatGameStateBase
void ANBCChatGameStateBase::StaticRegisterNativesANBCChatGameStateBase()
{
	UClass* Class = ANBCChatGameStateBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MulticastRPCBroadcastLoginMessage", &ANBCChatGameStateBase::execMulticastRPCBroadcastLoginMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBCChatGameStateBase);
UClass* Z_Construct_UClass_ANBCChatGameStateBase_NoRegister()
{
	return ANBCChatGameStateBase::StaticClass();
}
struct Z_Construct_UClass_ANBCChatGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/NBCChatGameStateBase.h" },
		{ "ModuleRelativePath", "Game/NBCChatGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANBCChatGameStateBase_MulticastRPCBroadcastLoginMessage, "MulticastRPCBroadcastLoginMessage" }, // 177954260
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBCChatGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANBCChatGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NBCChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCChatGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBCChatGameStateBase_Statics::ClassParams = {
	&ANBCChatGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBCChatGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBCChatGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBCChatGameStateBase()
{
	if (!Z_Registration_Info_UClass_ANBCChatGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBCChatGameStateBase.OuterSingleton, Z_Construct_UClass_ANBCChatGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBCChatGameStateBase.OuterSingleton;
}
template<> NBCCHAT_API UClass* StaticClass<ANBCChatGameStateBase>()
{
	return ANBCChatGameStateBase::StaticClass();
}
ANBCChatGameStateBase::ANBCChatGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBCChatGameStateBase);
ANBCChatGameStateBase::~ANBCChatGameStateBase() {}
// End Class ANBCChatGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBCChat_Source_NBCChat_Game_NBCChatGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBCChatGameStateBase, ANBCChatGameStateBase::StaticClass, TEXT("ANBCChatGameStateBase"), &Z_Registration_Info_UClass_ANBCChatGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBCChatGameStateBase), 630067179U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBCChat_Source_NBCChat_Game_NBCChatGameStateBase_h_2403822647(TEXT("/Script/NBCChat"),
	Z_CompiledInDeferFile_FID_NBCChat_Source_NBCChat_Game_NBCChatGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBCChat_Source_NBCChat_Game_NBCChatGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
