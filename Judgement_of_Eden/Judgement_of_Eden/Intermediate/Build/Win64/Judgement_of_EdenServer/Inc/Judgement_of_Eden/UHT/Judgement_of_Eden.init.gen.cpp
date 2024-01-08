// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJudgement_of_Eden_init() {}
	JUDGEMENT_OF_EDEN_API UFunction* Z_Construct_UDelegateFunction_Judgement_of_Eden_OnAttackModifiedEvent__DelegateSignature();
	JUDGEMENT_OF_EDEN_API UFunction* Z_Construct_UDelegateFunction_Judgement_of_Eden_OnDefenceModifiedEvent__DelegateSignature();
	JUDGEMENT_OF_EDEN_API UFunction* Z_Construct_UDelegateFunction_Judgement_of_Eden_OnMagicModifiedEvent__DelegateSignature();
	JUDGEMENT_OF_EDEN_API UFunction* Z_Construct_UDelegateFunction_Judgement_of_Eden_OnSpeedModifiedEvent__DelegateSignature();
	JUDGEMENT_OF_EDEN_API UFunction* Z_Construct_UDelegateFunction_Judgement_of_Eden_OnStaminaModifiedEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Judgement_of_Eden;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Judgement_of_Eden()
	{
		if (!Z_Registration_Info_UPackage__Script_Judgement_of_Eden.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Judgement_of_Eden_OnAttackModifiedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Judgement_of_Eden_OnDefenceModifiedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Judgement_of_Eden_OnMagicModifiedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Judgement_of_Eden_OnSpeedModifiedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Judgement_of_Eden_OnStaminaModifiedEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Judgement_of_Eden",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x86EA7724,
				0x4B3E7F49,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Judgement_of_Eden.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Judgement_of_Eden.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Judgement_of_Eden(Z_Construct_UPackage__Script_Judgement_of_Eden, TEXT("/Script/Judgement_of_Eden"), Z_Registration_Info_UPackage__Script_Judgement_of_Eden, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x86EA7724, 0x4B3E7F49));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
