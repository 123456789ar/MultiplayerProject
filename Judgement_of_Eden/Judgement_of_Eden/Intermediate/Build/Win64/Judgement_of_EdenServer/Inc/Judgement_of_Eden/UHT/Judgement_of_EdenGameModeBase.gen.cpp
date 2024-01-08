// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Judgement_of_Eden/Judgement_of_EdenGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJudgement_of_EdenGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	JUDGEMENT_OF_EDEN_API UClass* Z_Construct_UClass_AJudgement_of_EdenGameModeBase();
	JUDGEMENT_OF_EDEN_API UClass* Z_Construct_UClass_AJudgement_of_EdenGameModeBase_NoRegister();
	JUDGEMENT_OF_EDEN_API UEnum* Z_Construct_UEnum_Judgement_of_Eden_EGamePlayState();
	UPackage* Z_Construct_UPackage__Script_Judgement_of_Eden();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGamePlayState;
	static UEnum* EGamePlayState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGamePlayState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGamePlayState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Judgement_of_Eden_EGamePlayState, (UObject*)Z_Construct_UPackage__Script_Judgement_of_Eden(), TEXT("EGamePlayState"));
		}
		return Z_Registration_Info_UEnum_EGamePlayState.OuterSingleton;
	}
	template<> JUDGEMENT_OF_EDEN_API UEnum* StaticEnum<EGamePlayState>()
	{
		return EGamePlayState_StaticEnum();
	}
	struct Z_Construct_UEnum_Judgement_of_Eden_EGamePlayState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Judgement_of_Eden_EGamePlayState_Statics::Enumerators[] = {
		{ "EGamePlayState::EPlaying", (int64)EGamePlayState::EPlaying },
		{ "EGamePlayState::EGameOver", (int64)EGamePlayState::EGameOver },
		{ "EGamePlayState::EUnknown", (int64)EGamePlayState::EUnknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Judgement_of_Eden_EGamePlayState_Statics::Enum_MetaDataParams[] = {
		{ "EGameOver.Name", "EGamePlayState::EGameOver" },
		{ "EPlaying.Name", "EGamePlayState::EPlaying" },
		{ "EUnknown.Name", "EGamePlayState::EUnknown" },
		{ "ModuleRelativePath", "Judgement_of_EdenGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Judgement_of_Eden_EGamePlayState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Judgement_of_Eden,
		nullptr,
		"EGamePlayState",
		"EGamePlayState",
		Z_Construct_UEnum_Judgement_of_Eden_EGamePlayState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Judgement_of_Eden_EGamePlayState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Judgement_of_Eden_EGamePlayState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Judgement_of_Eden_EGamePlayState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Judgement_of_Eden_EGamePlayState()
	{
		if (!Z_Registration_Info_UEnum_EGamePlayState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGamePlayState.InnerSingleton, Z_Construct_UEnum_Judgement_of_Eden_EGamePlayState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGamePlayState.InnerSingleton;
	}
	DEFINE_FUNCTION(AJudgement_of_EdenGameModeBase::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGamePlayState*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	void AJudgement_of_EdenGameModeBase::StaticRegisterNativesAJudgement_of_EdenGameModeBase()
	{
		UClass* Class = AJudgement_of_EdenGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &AJudgement_of_EdenGameModeBase::execGetCurrentState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AJudgement_of_EdenGameModeBase_GetCurrentState_Statics
	{
		struct Judgement_of_EdenGameModeBase_eventGetCurrentState_Parms
		{
			EGamePlayState ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AJudgement_of_EdenGameModeBase_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AJudgement_of_EdenGameModeBase_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Judgement_of_EdenGameModeBase_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_Judgement_of_Eden_EGamePlayState, METADATA_PARAMS(nullptr, 0) }; // 4065161745
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJudgement_of_EdenGameModeBase_GetCurrentState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJudgement_of_EdenGameModeBase_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJudgement_of_EdenGameModeBase_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJudgement_of_EdenGameModeBase_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Judgement_of_EdenGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJudgement_of_EdenGameModeBase_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJudgement_of_EdenGameModeBase, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(Z_Construct_UFunction_AJudgement_of_EdenGameModeBase_GetCurrentState_Statics::Judgement_of_EdenGameModeBase_eventGetCurrentState_Parms), Z_Construct_UFunction_AJudgement_of_EdenGameModeBase_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJudgement_of_EdenGameModeBase_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJudgement_of_EdenGameModeBase_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJudgement_of_EdenGameModeBase_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJudgement_of_EdenGameModeBase_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJudgement_of_EdenGameModeBase_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJudgement_of_EdenGameModeBase);
	UClass* Z_Construct_UClass_AJudgement_of_EdenGameModeBase_NoRegister()
	{
		return AJudgement_of_EdenGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AJudgement_of_EdenGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJudgement_of_EdenGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Judgement_of_Eden,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AJudgement_of_EdenGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AJudgement_of_EdenGameModeBase_GetCurrentState, "GetCurrentState" }, // 543619647
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJudgement_of_EdenGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Judgement_of_EdenGameModeBase.h" },
		{ "ModuleRelativePath", "Judgement_of_EdenGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJudgement_of_EdenGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJudgement_of_EdenGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJudgement_of_EdenGameModeBase_Statics::ClassParams = {
		&AJudgement_of_EdenGameModeBase::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AJudgement_of_EdenGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJudgement_of_EdenGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJudgement_of_EdenGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AJudgement_of_EdenGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJudgement_of_EdenGameModeBase.OuterSingleton, Z_Construct_UClass_AJudgement_of_EdenGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJudgement_of_EdenGameModeBase.OuterSingleton;
	}
	template<> JUDGEMENT_OF_EDEN_API UClass* StaticClass<AJudgement_of_EdenGameModeBase>()
	{
		return AJudgement_of_EdenGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJudgement_of_EdenGameModeBase);
	AJudgement_of_EdenGameModeBase::~AJudgement_of_EdenGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_Judgement_of_EdenGameModeBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_Judgement_of_EdenGameModeBase_h_Statics::EnumInfo[] = {
		{ EGamePlayState_StaticEnum, TEXT("EGamePlayState"), &Z_Registration_Info_UEnum_EGamePlayState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4065161745U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_Judgement_of_EdenGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJudgement_of_EdenGameModeBase, AJudgement_of_EdenGameModeBase::StaticClass, TEXT("AJudgement_of_EdenGameModeBase"), &Z_Registration_Info_UClass_AJudgement_of_EdenGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJudgement_of_EdenGameModeBase), 3846704616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_Judgement_of_EdenGameModeBase_h_1350857453(TEXT("/Script/Judgement_of_Eden"),
		Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_Judgement_of_EdenGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_Judgement_of_EdenGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_Judgement_of_EdenGameModeBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_Judgement_of_EdenGameModeBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
