// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Judgement_of_Eden/WeaponDamageComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponDamageComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	JUDGEMENT_OF_EDEN_API UClass* Z_Construct_UClass_UWeaponDamageComponent();
	JUDGEMENT_OF_EDEN_API UClass* Z_Construct_UClass_UWeaponDamageComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Judgement_of_Eden();
// End Cross Module References
	void UWeaponDamageComponent::StaticRegisterNativesUWeaponDamageComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponDamageComponent);
	UClass* Z_Construct_UClass_UWeaponDamageComponent_NoRegister()
	{
		return UWeaponDamageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponDamageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponDamageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Judgement_of_Eden,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponDamageComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WeaponDamageComponent.h" },
		{ "ModuleRelativePath", "WeaponDamageComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponDamageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponDamageComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponDamageComponent_Statics::ClassParams = {
		&UWeaponDamageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponDamageComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponDamageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponDamageComponent()
	{
		if (!Z_Registration_Info_UClass_UWeaponDamageComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponDamageComponent.OuterSingleton, Z_Construct_UClass_UWeaponDamageComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeaponDamageComponent.OuterSingleton;
	}
	template<> JUDGEMENT_OF_EDEN_API UClass* StaticClass<UWeaponDamageComponent>()
	{
		return UWeaponDamageComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponDamageComponent);
	UWeaponDamageComponent::~UWeaponDamageComponent() {}
	struct Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_WeaponDamageComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_WeaponDamageComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponDamageComponent, UWeaponDamageComponent::StaticClass, TEXT("UWeaponDamageComponent"), &Z_Registration_Info_UClass_UWeaponDamageComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponDamageComponent), 626611105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_WeaponDamageComponent_h_1947405313(TEXT("/Script/Judgement_of_Eden"),
		Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_WeaponDamageComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_WeaponDamageComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
