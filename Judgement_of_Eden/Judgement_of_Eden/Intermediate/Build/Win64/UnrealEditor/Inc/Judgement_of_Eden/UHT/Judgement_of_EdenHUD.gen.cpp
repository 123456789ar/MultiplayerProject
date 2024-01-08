// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Judgement_of_Eden/Judgement_of_EdenHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJudgement_of_EdenHUD() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	JUDGEMENT_OF_EDEN_API UClass* Z_Construct_UClass_AJudgement_of_EdenHUD();
	JUDGEMENT_OF_EDEN_API UClass* Z_Construct_UClass_AJudgement_of_EdenHUD_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Judgement_of_Eden();
// End Cross Module References
	void AJudgement_of_EdenHUD::StaticRegisterNativesAJudgement_of_EdenHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJudgement_of_EdenHUD);
	UClass* Z_Construct_UClass_AJudgement_of_EdenHUD_NoRegister()
	{
		return AJudgement_of_EdenHUD::StaticClass();
	}
	struct Z_Construct_UClass_AJudgement_of_EdenHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Judgement_of_Eden,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Judgement_of_EdenHUD.h" },
		{ "ModuleRelativePath", "Judgement_of_EdenHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Judgement_of_EdenHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AJudgement_of_EdenHUD, HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::NewProp_HUDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::NewProp_HUDWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Category", "Health" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Judgement_of_EdenHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AJudgement_of_EdenHUD, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::NewProp_CurrentWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::NewProp_HUDWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::NewProp_CurrentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJudgement_of_EdenHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::ClassParams = {
		&AJudgement_of_EdenHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJudgement_of_EdenHUD()
	{
		if (!Z_Registration_Info_UClass_AJudgement_of_EdenHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJudgement_of_EdenHUD.OuterSingleton, Z_Construct_UClass_AJudgement_of_EdenHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJudgement_of_EdenHUD.OuterSingleton;
	}
	template<> JUDGEMENT_OF_EDEN_API UClass* StaticClass<AJudgement_of_EdenHUD>()
	{
		return AJudgement_of_EdenHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJudgement_of_EdenHUD);
	AJudgement_of_EdenHUD::~AJudgement_of_EdenHUD() {}
	struct Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_Judgement_of_EdenHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_Judgement_of_EdenHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJudgement_of_EdenHUD, AJudgement_of_EdenHUD::StaticClass, TEXT("AJudgement_of_EdenHUD"), &Z_Registration_Info_UClass_AJudgement_of_EdenHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJudgement_of_EdenHUD), 2346080719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_Judgement_of_EdenHUD_h_1430019438(TEXT("/Script/Judgement_of_Eden"),
		Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_Judgement_of_EdenHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_Judgement_of_EdenHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
