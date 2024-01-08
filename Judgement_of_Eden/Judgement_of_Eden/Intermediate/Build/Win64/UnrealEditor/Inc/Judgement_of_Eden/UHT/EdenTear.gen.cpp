// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Judgement_of_Eden/EdenTear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdenTear() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	JUDGEMENT_OF_EDEN_API UClass* Z_Construct_UClass_AC_Character_NoRegister();
	JUDGEMENT_OF_EDEN_API UClass* Z_Construct_UClass_AEdenTear();
	JUDGEMENT_OF_EDEN_API UClass* Z_Construct_UClass_AEdenTear_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Judgement_of_Eden();
// End Cross Module References
	DEFINE_FUNCTION(AEdenTear::execOnOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlap(Z_Param_MyOverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AEdenTear::StaticRegisterNativesAEdenTear()
	{
		UClass* Class = AEdenTear::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlap", &AEdenTear::execOnOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEdenTear_OnOverlap_Statics
	{
		struct EdenTear_eventOnOverlap_Parms
		{
			AActor* MyOverlappedActor;
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyOverlappedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEdenTear_OnOverlap_Statics::NewProp_MyOverlappedActor = { "MyOverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EdenTear_eventOnOverlap_Parms, MyOverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEdenTear_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EdenTear_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEdenTear_OnOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEdenTear_OnOverlap_Statics::NewProp_MyOverlappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEdenTear_OnOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEdenTear_OnOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EdenTear.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEdenTear_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEdenTear, nullptr, "OnOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEdenTear_OnOverlap_Statics::EdenTear_eventOnOverlap_Parms), Z_Construct_UFunction_AEdenTear_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEdenTear_OnOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEdenTear_OnOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEdenTear_OnOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEdenTear_OnOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEdenTear_OnOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEdenTear);
	UClass* Z_Construct_UClass_AEdenTear_NoRegister()
	{
		return AEdenTear::StaticClass();
	}
	struct Z_Construct_UClass_AEdenTear_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEdenTear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Judgement_of_Eden,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEdenTear_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEdenTear_OnOverlap, "OnOverlap" }, // 3446445053
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEdenTear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdenTear.h" },
		{ "ModuleRelativePath", "EdenTear.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEdenTear_Statics::NewProp_MyCharacter_MetaData[] = {
		{ "Category", "EdenTear" },
		{ "ModuleRelativePath", "EdenTear.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEdenTear_Statics::NewProp_MyCharacter = { "MyCharacter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEdenTear, MyCharacter), Z_Construct_UClass_AC_Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEdenTear_Statics::NewProp_MyCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEdenTear_Statics::NewProp_MyCharacter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEdenTear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEdenTear_Statics::NewProp_MyCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEdenTear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEdenTear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEdenTear_Statics::ClassParams = {
		&AEdenTear::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEdenTear_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEdenTear_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEdenTear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEdenTear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEdenTear()
	{
		if (!Z_Registration_Info_UClass_AEdenTear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEdenTear.OuterSingleton, Z_Construct_UClass_AEdenTear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEdenTear.OuterSingleton;
	}
	template<> JUDGEMENT_OF_EDEN_API UClass* StaticClass<AEdenTear>()
	{
		return AEdenTear::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEdenTear);
	AEdenTear::~AEdenTear() {}
	struct Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenTear_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenTear_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEdenTear, AEdenTear::StaticClass, TEXT("AEdenTear"), &Z_Registration_Info_UClass_AEdenTear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEdenTear), 1209392054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenTear_h_1039849785(TEXT("/Script/Judgement_of_Eden"),
		Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenTear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_EdenTear_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
