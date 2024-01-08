// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Judgement_of_Eden/HealthBarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthBarWidget() {}
// Cross Module References
	JUDGEMENT_OF_EDEN_API UClass* Z_Construct_UClass_UHealthBarWidget();
	JUDGEMENT_OF_EDEN_API UClass* Z_Construct_UClass_UHealthBarWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Judgement_of_Eden();
// End Cross Module References
	void UHealthBarWidget::StaticRegisterNativesUHealthBarWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthBarWidget);
	UClass* Z_Construct_UClass_UHealthBarWidget_NoRegister()
	{
		return UHealthBarWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHealthBarWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthBarWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Judgement_of_Eden,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthBarWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HealthBarWidget.h" },
		{ "ModuleRelativePath", "HealthBarWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_HealthValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HealthBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_HealthValue = { "HealthValue", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHealthBarWidget, HealthValue), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_HealthValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_HealthValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthBarWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_HealthValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthBarWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthBarWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthBarWidget_Statics::ClassParams = {
		&UHealthBarWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHealthBarWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHealthBarWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHealthBarWidget()
	{
		if (!Z_Registration_Info_UClass_UHealthBarWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthBarWidget.OuterSingleton, Z_Construct_UClass_UHealthBarWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHealthBarWidget.OuterSingleton;
	}
	template<> JUDGEMENT_OF_EDEN_API UClass* StaticClass<UHealthBarWidget>()
	{
		return UHealthBarWidget::StaticClass();
	}
	UHealthBarWidget::UHealthBarWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthBarWidget);
	UHealthBarWidget::~UHealthBarWidget() {}
	struct Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_HealthBarWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_HealthBarWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHealthBarWidget, UHealthBarWidget::StaticClass, TEXT("UHealthBarWidget"), &Z_Registration_Info_UClass_UHealthBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthBarWidget), 1564698029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_HealthBarWidget_h_1829848476(TEXT("/Script/Judgement_of_Eden"),
		Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_HealthBarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_HealthBarWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
