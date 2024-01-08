// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Judgement_of_Eden/JoE_C_Stats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoE_C_Stats() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	JUDGEMENT_OF_EDEN_API UClass* Z_Construct_UClass_UJoE_C_Stats();
	JUDGEMENT_OF_EDEN_API UClass* Z_Construct_UClass_UJoE_C_Stats_NoRegister();
	JUDGEMENT_OF_EDEN_API UFunction* Z_Construct_UDelegateFunction_Judgement_of_Eden_OnAttackModifiedEvent__DelegateSignature();
	JUDGEMENT_OF_EDEN_API UFunction* Z_Construct_UDelegateFunction_Judgement_of_Eden_OnDefenceModifiedEvent__DelegateSignature();
	JUDGEMENT_OF_EDEN_API UFunction* Z_Construct_UDelegateFunction_Judgement_of_Eden_OnMagicModifiedEvent__DelegateSignature();
	JUDGEMENT_OF_EDEN_API UFunction* Z_Construct_UDelegateFunction_Judgement_of_Eden_OnSpeedModifiedEvent__DelegateSignature();
	JUDGEMENT_OF_EDEN_API UFunction* Z_Construct_UDelegateFunction_Judgement_of_Eden_OnStaminaModifiedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Judgement_of_Eden();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Judgement_of_Eden_OnAttackModifiedEvent__DelegateSignature_Statics
	{
		struct _Script_Judgement_of_Eden_eventOnAttackModifiedEvent_Parms
		{
			float PreviousAttackStat;
			float NewAttackStat;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousAttackStat;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAttackStat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Judgement_of_Eden_OnAttackModifiedEvent__DelegateSignature_Statics::NewProp_PreviousAttackStat = { "PreviousAttackStat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Judgement_of_Eden_eventOnAttackModifiedEvent_Parms, PreviousAttackStat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Judgement_of_Eden_OnAttackModifiedEvent__DelegateSignature_Statics::NewProp_NewAttackStat = { "NewAttackStat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Judgement_of_Eden_eventOnAttackModifiedEvent_Parms, NewAttackStat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Judgement_of_Eden_OnAttackModifiedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Judgement_of_Eden_OnAttackModifiedEvent__DelegateSignature_Statics::NewProp_PreviousAttackStat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Judgement_of_Eden_OnAttackModifiedEvent__DelegateSignature_Statics::NewProp_NewAttackStat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Judgement_of_Eden_OnAttackModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Judgement_of_Eden_OnAttackModifiedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Judgement_of_Eden, nullptr, "OnAttackModifiedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnAttackModifiedEvent__DelegateSignature_Statics::_Script_Judgement_of_Eden_eventOnAttackModifiedEvent_Parms), Z_Construct_UDelegateFunction_Judgement_of_Eden_OnAttackModifiedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnAttackModifiedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnAttackModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnAttackModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Judgement_of_Eden_OnAttackModifiedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Judgement_of_Eden_OnAttackModifiedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttackModifiedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnAttackModifiedEvent, float PreviousAttackStat, float NewAttackStat)
{
	struct _Script_Judgement_of_Eden_eventOnAttackModifiedEvent_Parms
	{
		float PreviousAttackStat;
		float NewAttackStat;
	};
	_Script_Judgement_of_Eden_eventOnAttackModifiedEvent_Parms Parms;
	Parms.PreviousAttackStat=PreviousAttackStat;
	Parms.NewAttackStat=NewAttackStat;
	OnAttackModifiedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Judgement_of_Eden_OnDefenceModifiedEvent__DelegateSignature_Statics
	{
		struct _Script_Judgement_of_Eden_eventOnDefenceModifiedEvent_Parms
		{
			float PreviousDefenceStat;
			float NewDefenceStat;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousDefenceStat;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDefenceStat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Judgement_of_Eden_OnDefenceModifiedEvent__DelegateSignature_Statics::NewProp_PreviousDefenceStat = { "PreviousDefenceStat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Judgement_of_Eden_eventOnDefenceModifiedEvent_Parms, PreviousDefenceStat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Judgement_of_Eden_OnDefenceModifiedEvent__DelegateSignature_Statics::NewProp_NewDefenceStat = { "NewDefenceStat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Judgement_of_Eden_eventOnDefenceModifiedEvent_Parms, NewDefenceStat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Judgement_of_Eden_OnDefenceModifiedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Judgement_of_Eden_OnDefenceModifiedEvent__DelegateSignature_Statics::NewProp_PreviousDefenceStat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Judgement_of_Eden_OnDefenceModifiedEvent__DelegateSignature_Statics::NewProp_NewDefenceStat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Judgement_of_Eden_OnDefenceModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Judgement_of_Eden_OnDefenceModifiedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Judgement_of_Eden, nullptr, "OnDefenceModifiedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnDefenceModifiedEvent__DelegateSignature_Statics::_Script_Judgement_of_Eden_eventOnDefenceModifiedEvent_Parms), Z_Construct_UDelegateFunction_Judgement_of_Eden_OnDefenceModifiedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnDefenceModifiedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnDefenceModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnDefenceModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Judgement_of_Eden_OnDefenceModifiedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Judgement_of_Eden_OnDefenceModifiedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDefenceModifiedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnDefenceModifiedEvent, float PreviousDefenceStat, float NewDefenceStat)
{
	struct _Script_Judgement_of_Eden_eventOnDefenceModifiedEvent_Parms
	{
		float PreviousDefenceStat;
		float NewDefenceStat;
	};
	_Script_Judgement_of_Eden_eventOnDefenceModifiedEvent_Parms Parms;
	Parms.PreviousDefenceStat=PreviousDefenceStat;
	Parms.NewDefenceStat=NewDefenceStat;
	OnDefenceModifiedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Judgement_of_Eden_OnSpeedModifiedEvent__DelegateSignature_Statics
	{
		struct _Script_Judgement_of_Eden_eventOnSpeedModifiedEvent_Parms
		{
			float PreviousSpeedStat;
			float NewSpeedStat;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousSpeedStat;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeedStat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Judgement_of_Eden_OnSpeedModifiedEvent__DelegateSignature_Statics::NewProp_PreviousSpeedStat = { "PreviousSpeedStat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Judgement_of_Eden_eventOnSpeedModifiedEvent_Parms, PreviousSpeedStat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Judgement_of_Eden_OnSpeedModifiedEvent__DelegateSignature_Statics::NewProp_NewSpeedStat = { "NewSpeedStat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Judgement_of_Eden_eventOnSpeedModifiedEvent_Parms, NewSpeedStat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Judgement_of_Eden_OnSpeedModifiedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Judgement_of_Eden_OnSpeedModifiedEvent__DelegateSignature_Statics::NewProp_PreviousSpeedStat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Judgement_of_Eden_OnSpeedModifiedEvent__DelegateSignature_Statics::NewProp_NewSpeedStat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Judgement_of_Eden_OnSpeedModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Judgement_of_Eden_OnSpeedModifiedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Judgement_of_Eden, nullptr, "OnSpeedModifiedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnSpeedModifiedEvent__DelegateSignature_Statics::_Script_Judgement_of_Eden_eventOnSpeedModifiedEvent_Parms), Z_Construct_UDelegateFunction_Judgement_of_Eden_OnSpeedModifiedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnSpeedModifiedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnSpeedModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnSpeedModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Judgement_of_Eden_OnSpeedModifiedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Judgement_of_Eden_OnSpeedModifiedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSpeedModifiedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSpeedModifiedEvent, float PreviousSpeedStat, float NewSpeedStat)
{
	struct _Script_Judgement_of_Eden_eventOnSpeedModifiedEvent_Parms
	{
		float PreviousSpeedStat;
		float NewSpeedStat;
	};
	_Script_Judgement_of_Eden_eventOnSpeedModifiedEvent_Parms Parms;
	Parms.PreviousSpeedStat=PreviousSpeedStat;
	Parms.NewSpeedStat=NewSpeedStat;
	OnSpeedModifiedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Judgement_of_Eden_OnStaminaModifiedEvent__DelegateSignature_Statics
	{
		struct _Script_Judgement_of_Eden_eventOnStaminaModifiedEvent_Parms
		{
			float PreviousStaminaStat;
			float NewStaminaStat;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousStaminaStat;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewStaminaStat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Judgement_of_Eden_OnStaminaModifiedEvent__DelegateSignature_Statics::NewProp_PreviousStaminaStat = { "PreviousStaminaStat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Judgement_of_Eden_eventOnStaminaModifiedEvent_Parms, PreviousStaminaStat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Judgement_of_Eden_OnStaminaModifiedEvent__DelegateSignature_Statics::NewProp_NewStaminaStat = { "NewStaminaStat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Judgement_of_Eden_eventOnStaminaModifiedEvent_Parms, NewStaminaStat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Judgement_of_Eden_OnStaminaModifiedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Judgement_of_Eden_OnStaminaModifiedEvent__DelegateSignature_Statics::NewProp_PreviousStaminaStat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Judgement_of_Eden_OnStaminaModifiedEvent__DelegateSignature_Statics::NewProp_NewStaminaStat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Judgement_of_Eden_OnStaminaModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Judgement_of_Eden_OnStaminaModifiedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Judgement_of_Eden, nullptr, "OnStaminaModifiedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnStaminaModifiedEvent__DelegateSignature_Statics::_Script_Judgement_of_Eden_eventOnStaminaModifiedEvent_Parms), Z_Construct_UDelegateFunction_Judgement_of_Eden_OnStaminaModifiedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnStaminaModifiedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnStaminaModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnStaminaModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Judgement_of_Eden_OnStaminaModifiedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Judgement_of_Eden_OnStaminaModifiedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStaminaModifiedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaModifiedEvent, float PreviousStaminaStat, float NewStaminaStat)
{
	struct _Script_Judgement_of_Eden_eventOnStaminaModifiedEvent_Parms
	{
		float PreviousStaminaStat;
		float NewStaminaStat;
	};
	_Script_Judgement_of_Eden_eventOnStaminaModifiedEvent_Parms Parms;
	Parms.PreviousStaminaStat=PreviousStaminaStat;
	Parms.NewStaminaStat=NewStaminaStat;
	OnStaminaModifiedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Judgement_of_Eden_OnMagicModifiedEvent__DelegateSignature_Statics
	{
		struct _Script_Judgement_of_Eden_eventOnMagicModifiedEvent_Parms
		{
			float PreviousMagicStat;
			float NewMagicStat;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousMagicStat;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMagicStat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Judgement_of_Eden_OnMagicModifiedEvent__DelegateSignature_Statics::NewProp_PreviousMagicStat = { "PreviousMagicStat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Judgement_of_Eden_eventOnMagicModifiedEvent_Parms, PreviousMagicStat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Judgement_of_Eden_OnMagicModifiedEvent__DelegateSignature_Statics::NewProp_NewMagicStat = { "NewMagicStat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Judgement_of_Eden_eventOnMagicModifiedEvent_Parms, NewMagicStat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Judgement_of_Eden_OnMagicModifiedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Judgement_of_Eden_OnMagicModifiedEvent__DelegateSignature_Statics::NewProp_PreviousMagicStat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Judgement_of_Eden_OnMagicModifiedEvent__DelegateSignature_Statics::NewProp_NewMagicStat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Judgement_of_Eden_OnMagicModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Judgement_of_Eden_OnMagicModifiedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Judgement_of_Eden, nullptr, "OnMagicModifiedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnMagicModifiedEvent__DelegateSignature_Statics::_Script_Judgement_of_Eden_eventOnMagicModifiedEvent_Parms), Z_Construct_UDelegateFunction_Judgement_of_Eden_OnMagicModifiedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnMagicModifiedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnMagicModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Judgement_of_Eden_OnMagicModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Judgement_of_Eden_OnMagicModifiedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Judgement_of_Eden_OnMagicModifiedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMagicModifiedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMagicModifiedEvent, float PreviousMagicStat, float NewMagicStat)
{
	struct _Script_Judgement_of_Eden_eventOnMagicModifiedEvent_Parms
	{
		float PreviousMagicStat;
		float NewMagicStat;
	};
	_Script_Judgement_of_Eden_eventOnMagicModifiedEvent_Parms Parms;
	Parms.PreviousMagicStat=PreviousMagicStat;
	Parms.NewMagicStat=NewMagicStat;
	OnMagicModifiedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UJoE_C_Stats::execGetCurrentMagicStat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentMagicStat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoE_C_Stats::execDecreaseMagicStat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecreaseMagicStat(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoE_C_Stats::execIncreaseMagicStat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseMagicStat(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoE_C_Stats::execGetCurrentStaminaStat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentStaminaStat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoE_C_Stats::execDecreaseStaminaStat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecreaseStaminaStat(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoE_C_Stats::execIncreaseStaminaStat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseStaminaStat(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoE_C_Stats::execGetCurrentSpeedStat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentSpeedStat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoE_C_Stats::execDecreaseSpeedStat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecreaseSpeedStat(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoE_C_Stats::execIncreaseSpeedStat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseSpeedStat(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoE_C_Stats::execGetCurrentDefenceStat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentDefenceStat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoE_C_Stats::execDecreaseDefenceStat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecreaseDefenceStat(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoE_C_Stats::execIncreaseDefenceStat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseDefenceStat(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoE_C_Stats::execGetCurrentAttackStat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentAttackStat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoE_C_Stats::execDecreaseAttackStat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecreaseAttackStat(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoE_C_Stats::execIncreaseAttackStat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseAttackStat(Z_Param_Value);
		P_NATIVE_END;
	}
	void UJoE_C_Stats::StaticRegisterNativesUJoE_C_Stats()
	{
		UClass* Class = UJoE_C_Stats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecreaseAttackStat", &UJoE_C_Stats::execDecreaseAttackStat },
			{ "DecreaseDefenceStat", &UJoE_C_Stats::execDecreaseDefenceStat },
			{ "DecreaseMagicStat", &UJoE_C_Stats::execDecreaseMagicStat },
			{ "DecreaseSpeedStat", &UJoE_C_Stats::execDecreaseSpeedStat },
			{ "DecreaseStaminaStat", &UJoE_C_Stats::execDecreaseStaminaStat },
			{ "GetCurrentAttackStat", &UJoE_C_Stats::execGetCurrentAttackStat },
			{ "GetCurrentDefenceStat", &UJoE_C_Stats::execGetCurrentDefenceStat },
			{ "GetCurrentMagicStat", &UJoE_C_Stats::execGetCurrentMagicStat },
			{ "GetCurrentSpeedStat", &UJoE_C_Stats::execGetCurrentSpeedStat },
			{ "GetCurrentStaminaStat", &UJoE_C_Stats::execGetCurrentStaminaStat },
			{ "IncreaseAttackStat", &UJoE_C_Stats::execIncreaseAttackStat },
			{ "IncreaseDefenceStat", &UJoE_C_Stats::execIncreaseDefenceStat },
			{ "IncreaseMagicStat", &UJoE_C_Stats::execIncreaseMagicStat },
			{ "IncreaseSpeedStat", &UJoE_C_Stats::execIncreaseSpeedStat },
			{ "IncreaseStaminaStat", &UJoE_C_Stats::execIncreaseStaminaStat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJoE_C_Stats_DecreaseAttackStat_Statics
	{
		struct JoE_C_Stats_eventDecreaseAttackStat_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoE_C_Stats_DecreaseAttackStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoE_C_Stats_eventDecreaseAttackStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoE_C_Stats_DecreaseAttackStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoE_C_Stats_DecreaseAttackStat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoE_C_Stats_DecreaseAttackStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoE_C_Stats_DecreaseAttackStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoE_C_Stats, nullptr, "DecreaseAttackStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoE_C_Stats_DecreaseAttackStat_Statics::JoE_C_Stats_eventDecreaseAttackStat_Parms), Z_Construct_UFunction_UJoE_C_Stats_DecreaseAttackStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_DecreaseAttackStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoE_C_Stats_DecreaseAttackStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_DecreaseAttackStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoE_C_Stats_DecreaseAttackStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoE_C_Stats_DecreaseAttackStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoE_C_Stats_DecreaseDefenceStat_Statics
	{
		struct JoE_C_Stats_eventDecreaseDefenceStat_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoE_C_Stats_DecreaseDefenceStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoE_C_Stats_eventDecreaseDefenceStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoE_C_Stats_DecreaseDefenceStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoE_C_Stats_DecreaseDefenceStat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoE_C_Stats_DecreaseDefenceStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoE_C_Stats_DecreaseDefenceStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoE_C_Stats, nullptr, "DecreaseDefenceStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoE_C_Stats_DecreaseDefenceStat_Statics::JoE_C_Stats_eventDecreaseDefenceStat_Parms), Z_Construct_UFunction_UJoE_C_Stats_DecreaseDefenceStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_DecreaseDefenceStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoE_C_Stats_DecreaseDefenceStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_DecreaseDefenceStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoE_C_Stats_DecreaseDefenceStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoE_C_Stats_DecreaseDefenceStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoE_C_Stats_DecreaseMagicStat_Statics
	{
		struct JoE_C_Stats_eventDecreaseMagicStat_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoE_C_Stats_DecreaseMagicStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoE_C_Stats_eventDecreaseMagicStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoE_C_Stats_DecreaseMagicStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoE_C_Stats_DecreaseMagicStat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoE_C_Stats_DecreaseMagicStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoE_C_Stats_DecreaseMagicStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoE_C_Stats, nullptr, "DecreaseMagicStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoE_C_Stats_DecreaseMagicStat_Statics::JoE_C_Stats_eventDecreaseMagicStat_Parms), Z_Construct_UFunction_UJoE_C_Stats_DecreaseMagicStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_DecreaseMagicStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoE_C_Stats_DecreaseMagicStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_DecreaseMagicStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoE_C_Stats_DecreaseMagicStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoE_C_Stats_DecreaseMagicStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoE_C_Stats_DecreaseSpeedStat_Statics
	{
		struct JoE_C_Stats_eventDecreaseSpeedStat_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoE_C_Stats_DecreaseSpeedStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoE_C_Stats_eventDecreaseSpeedStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoE_C_Stats_DecreaseSpeedStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoE_C_Stats_DecreaseSpeedStat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoE_C_Stats_DecreaseSpeedStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoE_C_Stats_DecreaseSpeedStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoE_C_Stats, nullptr, "DecreaseSpeedStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoE_C_Stats_DecreaseSpeedStat_Statics::JoE_C_Stats_eventDecreaseSpeedStat_Parms), Z_Construct_UFunction_UJoE_C_Stats_DecreaseSpeedStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_DecreaseSpeedStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoE_C_Stats_DecreaseSpeedStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_DecreaseSpeedStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoE_C_Stats_DecreaseSpeedStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoE_C_Stats_DecreaseSpeedStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoE_C_Stats_DecreaseStaminaStat_Statics
	{
		struct JoE_C_Stats_eventDecreaseStaminaStat_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoE_C_Stats_DecreaseStaminaStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoE_C_Stats_eventDecreaseStaminaStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoE_C_Stats_DecreaseStaminaStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoE_C_Stats_DecreaseStaminaStat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoE_C_Stats_DecreaseStaminaStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoE_C_Stats_DecreaseStaminaStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoE_C_Stats, nullptr, "DecreaseStaminaStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoE_C_Stats_DecreaseStaminaStat_Statics::JoE_C_Stats_eventDecreaseStaminaStat_Parms), Z_Construct_UFunction_UJoE_C_Stats_DecreaseStaminaStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_DecreaseStaminaStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoE_C_Stats_DecreaseStaminaStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_DecreaseStaminaStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoE_C_Stats_DecreaseStaminaStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoE_C_Stats_DecreaseStaminaStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoE_C_Stats_GetCurrentAttackStat_Statics
	{
		struct JoE_C_Stats_eventGetCurrentAttackStat_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoE_C_Stats_GetCurrentAttackStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoE_C_Stats_eventGetCurrentAttackStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoE_C_Stats_GetCurrentAttackStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoE_C_Stats_GetCurrentAttackStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoE_C_Stats_GetCurrentAttackStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoE_C_Stats_GetCurrentAttackStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoE_C_Stats, nullptr, "GetCurrentAttackStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentAttackStat_Statics::JoE_C_Stats_eventGetCurrentAttackStat_Parms), Z_Construct_UFunction_UJoE_C_Stats_GetCurrentAttackStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentAttackStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentAttackStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentAttackStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoE_C_Stats_GetCurrentAttackStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoE_C_Stats_GetCurrentAttackStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoE_C_Stats_GetCurrentDefenceStat_Statics
	{
		struct JoE_C_Stats_eventGetCurrentDefenceStat_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoE_C_Stats_GetCurrentDefenceStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoE_C_Stats_eventGetCurrentDefenceStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoE_C_Stats_GetCurrentDefenceStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoE_C_Stats_GetCurrentDefenceStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoE_C_Stats_GetCurrentDefenceStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoE_C_Stats_GetCurrentDefenceStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoE_C_Stats, nullptr, "GetCurrentDefenceStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentDefenceStat_Statics::JoE_C_Stats_eventGetCurrentDefenceStat_Parms), Z_Construct_UFunction_UJoE_C_Stats_GetCurrentDefenceStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentDefenceStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentDefenceStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentDefenceStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoE_C_Stats_GetCurrentDefenceStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoE_C_Stats_GetCurrentDefenceStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoE_C_Stats_GetCurrentMagicStat_Statics
	{
		struct JoE_C_Stats_eventGetCurrentMagicStat_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoE_C_Stats_GetCurrentMagicStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoE_C_Stats_eventGetCurrentMagicStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoE_C_Stats_GetCurrentMagicStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoE_C_Stats_GetCurrentMagicStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoE_C_Stats_GetCurrentMagicStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoE_C_Stats_GetCurrentMagicStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoE_C_Stats, nullptr, "GetCurrentMagicStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentMagicStat_Statics::JoE_C_Stats_eventGetCurrentMagicStat_Parms), Z_Construct_UFunction_UJoE_C_Stats_GetCurrentMagicStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentMagicStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentMagicStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentMagicStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoE_C_Stats_GetCurrentMagicStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoE_C_Stats_GetCurrentMagicStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoE_C_Stats_GetCurrentSpeedStat_Statics
	{
		struct JoE_C_Stats_eventGetCurrentSpeedStat_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoE_C_Stats_GetCurrentSpeedStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoE_C_Stats_eventGetCurrentSpeedStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoE_C_Stats_GetCurrentSpeedStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoE_C_Stats_GetCurrentSpeedStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoE_C_Stats_GetCurrentSpeedStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoE_C_Stats_GetCurrentSpeedStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoE_C_Stats, nullptr, "GetCurrentSpeedStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentSpeedStat_Statics::JoE_C_Stats_eventGetCurrentSpeedStat_Parms), Z_Construct_UFunction_UJoE_C_Stats_GetCurrentSpeedStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentSpeedStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentSpeedStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentSpeedStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoE_C_Stats_GetCurrentSpeedStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoE_C_Stats_GetCurrentSpeedStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoE_C_Stats_GetCurrentStaminaStat_Statics
	{
		struct JoE_C_Stats_eventGetCurrentStaminaStat_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoE_C_Stats_GetCurrentStaminaStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoE_C_Stats_eventGetCurrentStaminaStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoE_C_Stats_GetCurrentStaminaStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoE_C_Stats_GetCurrentStaminaStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoE_C_Stats_GetCurrentStaminaStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoE_C_Stats_GetCurrentStaminaStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoE_C_Stats, nullptr, "GetCurrentStaminaStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentStaminaStat_Statics::JoE_C_Stats_eventGetCurrentStaminaStat_Parms), Z_Construct_UFunction_UJoE_C_Stats_GetCurrentStaminaStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentStaminaStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentStaminaStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_GetCurrentStaminaStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoE_C_Stats_GetCurrentStaminaStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoE_C_Stats_GetCurrentStaminaStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoE_C_Stats_IncreaseAttackStat_Statics
	{
		struct JoE_C_Stats_eventIncreaseAttackStat_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoE_C_Stats_IncreaseAttackStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoE_C_Stats_eventIncreaseAttackStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoE_C_Stats_IncreaseAttackStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoE_C_Stats_IncreaseAttackStat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoE_C_Stats_IncreaseAttackStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoE_C_Stats_IncreaseAttackStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoE_C_Stats, nullptr, "IncreaseAttackStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoE_C_Stats_IncreaseAttackStat_Statics::JoE_C_Stats_eventIncreaseAttackStat_Parms), Z_Construct_UFunction_UJoE_C_Stats_IncreaseAttackStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_IncreaseAttackStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoE_C_Stats_IncreaseAttackStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_IncreaseAttackStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoE_C_Stats_IncreaseAttackStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoE_C_Stats_IncreaseAttackStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoE_C_Stats_IncreaseDefenceStat_Statics
	{
		struct JoE_C_Stats_eventIncreaseDefenceStat_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoE_C_Stats_IncreaseDefenceStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoE_C_Stats_eventIncreaseDefenceStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoE_C_Stats_IncreaseDefenceStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoE_C_Stats_IncreaseDefenceStat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoE_C_Stats_IncreaseDefenceStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoE_C_Stats_IncreaseDefenceStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoE_C_Stats, nullptr, "IncreaseDefenceStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoE_C_Stats_IncreaseDefenceStat_Statics::JoE_C_Stats_eventIncreaseDefenceStat_Parms), Z_Construct_UFunction_UJoE_C_Stats_IncreaseDefenceStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_IncreaseDefenceStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoE_C_Stats_IncreaseDefenceStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_IncreaseDefenceStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoE_C_Stats_IncreaseDefenceStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoE_C_Stats_IncreaseDefenceStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoE_C_Stats_IncreaseMagicStat_Statics
	{
		struct JoE_C_Stats_eventIncreaseMagicStat_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoE_C_Stats_IncreaseMagicStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoE_C_Stats_eventIncreaseMagicStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoE_C_Stats_IncreaseMagicStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoE_C_Stats_IncreaseMagicStat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoE_C_Stats_IncreaseMagicStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoE_C_Stats_IncreaseMagicStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoE_C_Stats, nullptr, "IncreaseMagicStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoE_C_Stats_IncreaseMagicStat_Statics::JoE_C_Stats_eventIncreaseMagicStat_Parms), Z_Construct_UFunction_UJoE_C_Stats_IncreaseMagicStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_IncreaseMagicStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoE_C_Stats_IncreaseMagicStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_IncreaseMagicStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoE_C_Stats_IncreaseMagicStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoE_C_Stats_IncreaseMagicStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoE_C_Stats_IncreaseSpeedStat_Statics
	{
		struct JoE_C_Stats_eventIncreaseSpeedStat_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoE_C_Stats_IncreaseSpeedStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoE_C_Stats_eventIncreaseSpeedStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoE_C_Stats_IncreaseSpeedStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoE_C_Stats_IncreaseSpeedStat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoE_C_Stats_IncreaseSpeedStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoE_C_Stats_IncreaseSpeedStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoE_C_Stats, nullptr, "IncreaseSpeedStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoE_C_Stats_IncreaseSpeedStat_Statics::JoE_C_Stats_eventIncreaseSpeedStat_Parms), Z_Construct_UFunction_UJoE_C_Stats_IncreaseSpeedStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_IncreaseSpeedStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoE_C_Stats_IncreaseSpeedStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_IncreaseSpeedStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoE_C_Stats_IncreaseSpeedStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoE_C_Stats_IncreaseSpeedStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoE_C_Stats_IncreaseStaminaStat_Statics
	{
		struct JoE_C_Stats_eventIncreaseStaminaStat_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoE_C_Stats_IncreaseStaminaStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoE_C_Stats_eventIncreaseStaminaStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoE_C_Stats_IncreaseStaminaStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoE_C_Stats_IncreaseStaminaStat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoE_C_Stats_IncreaseStaminaStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoE_C_Stats_IncreaseStaminaStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoE_C_Stats, nullptr, "IncreaseStaminaStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoE_C_Stats_IncreaseStaminaStat_Statics::JoE_C_Stats_eventIncreaseStaminaStat_Parms), Z_Construct_UFunction_UJoE_C_Stats_IncreaseStaminaStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_IncreaseStaminaStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoE_C_Stats_IncreaseStaminaStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoE_C_Stats_IncreaseStaminaStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoE_C_Stats_IncreaseStaminaStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoE_C_Stats_IncreaseStaminaStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJoE_C_Stats);
	UClass* Z_Construct_UClass_UJoE_C_Stats_NoRegister()
	{
		return UJoE_C_Stats::StaticClass();
	}
	struct Z_Construct_UClass_UJoE_C_Stats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAttackModifiedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttackModifiedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDefenceModifiedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDefenceModifiedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSpeedModifiedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpeedModifiedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStaminaModifiedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStaminaModifiedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMagicModifiedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMagicModifiedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackMaxStat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackMaxStat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Attack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefenceMaxStat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefenceMaxStat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Defence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Defence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMaxStat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMaxStat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaMaxStat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaMaxStat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagicMaxStat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MagicMaxStat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magic_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJoE_C_Stats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Judgement_of_Eden,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJoE_C_Stats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJoE_C_Stats_DecreaseAttackStat, "DecreaseAttackStat" }, // 3845314157
		{ &Z_Construct_UFunction_UJoE_C_Stats_DecreaseDefenceStat, "DecreaseDefenceStat" }, // 3633775824
		{ &Z_Construct_UFunction_UJoE_C_Stats_DecreaseMagicStat, "DecreaseMagicStat" }, // 539981274
		{ &Z_Construct_UFunction_UJoE_C_Stats_DecreaseSpeedStat, "DecreaseSpeedStat" }, // 3514752602
		{ &Z_Construct_UFunction_UJoE_C_Stats_DecreaseStaminaStat, "DecreaseStaminaStat" }, // 52683057
		{ &Z_Construct_UFunction_UJoE_C_Stats_GetCurrentAttackStat, "GetCurrentAttackStat" }, // 321504461
		{ &Z_Construct_UFunction_UJoE_C_Stats_GetCurrentDefenceStat, "GetCurrentDefenceStat" }, // 289360274
		{ &Z_Construct_UFunction_UJoE_C_Stats_GetCurrentMagicStat, "GetCurrentMagicStat" }, // 2739634902
		{ &Z_Construct_UFunction_UJoE_C_Stats_GetCurrentSpeedStat, "GetCurrentSpeedStat" }, // 3244239419
		{ &Z_Construct_UFunction_UJoE_C_Stats_GetCurrentStaminaStat, "GetCurrentStaminaStat" }, // 668306489
		{ &Z_Construct_UFunction_UJoE_C_Stats_IncreaseAttackStat, "IncreaseAttackStat" }, // 3312191398
		{ &Z_Construct_UFunction_UJoE_C_Stats_IncreaseDefenceStat, "IncreaseDefenceStat" }, // 560668766
		{ &Z_Construct_UFunction_UJoE_C_Stats_IncreaseMagicStat, "IncreaseMagicStat" }, // 3117612784
		{ &Z_Construct_UFunction_UJoE_C_Stats_IncreaseSpeedStat, "IncreaseSpeedStat" }, // 507135734
		{ &Z_Construct_UFunction_UJoE_C_Stats_IncreaseStaminaStat, "IncreaseStaminaStat" }, // 1860570648
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoE_C_Stats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "JoE_C_Stats.h" },
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnAttackModifiedEvent_MetaData[] = {
		{ "Comment", "// Events\n" },
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
		{ "ToolTip", "Events" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnAttackModifiedEvent = { "OnAttackModifiedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJoE_C_Stats, OnAttackModifiedEvent), Z_Construct_UDelegateFunction_Judgement_of_Eden_OnAttackModifiedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnAttackModifiedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnAttackModifiedEvent_MetaData)) }; // 3958189857
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnDefenceModifiedEvent_MetaData[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnDefenceModifiedEvent = { "OnDefenceModifiedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJoE_C_Stats, OnDefenceModifiedEvent), Z_Construct_UDelegateFunction_Judgement_of_Eden_OnDefenceModifiedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnDefenceModifiedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnDefenceModifiedEvent_MetaData)) }; // 3909901500
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnSpeedModifiedEvent_MetaData[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnSpeedModifiedEvent = { "OnSpeedModifiedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJoE_C_Stats, OnSpeedModifiedEvent), Z_Construct_UDelegateFunction_Judgement_of_Eden_OnSpeedModifiedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnSpeedModifiedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnSpeedModifiedEvent_MetaData)) }; // 2886123644
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnStaminaModifiedEvent_MetaData[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnStaminaModifiedEvent = { "OnStaminaModifiedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJoE_C_Stats, OnStaminaModifiedEvent), Z_Construct_UDelegateFunction_Judgement_of_Eden_OnStaminaModifiedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnStaminaModifiedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnStaminaModifiedEvent_MetaData)) }; // 121207282
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnMagicModifiedEvent_MetaData[] = {
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnMagicModifiedEvent = { "OnMagicModifiedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJoE_C_Stats, OnMagicModifiedEvent), Z_Construct_UDelegateFunction_Judgement_of_Eden_OnMagicModifiedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnMagicModifiedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnMagicModifiedEvent_MetaData)) }; // 2282718314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_AttackMaxStat_MetaData[] = {
		{ "Category", "JoE_C_Stats" },
		{ "Comment", "// Stats Protected So Only Child Classes Can Access This Directly\n" },
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
		{ "ToolTip", "Stats Protected So Only Child Classes Can Access This Directly" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_AttackMaxStat = { "AttackMaxStat", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJoE_C_Stats, AttackMaxStat), METADATA_PARAMS(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_AttackMaxStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_AttackMaxStat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Attack_MetaData[] = {
		{ "Category", "JoE_C_Stats" },
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJoE_C_Stats, Attack), METADATA_PARAMS(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Attack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_DefenceMaxStat_MetaData[] = {
		{ "Category", "JoE_C_Stats" },
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_DefenceMaxStat = { "DefenceMaxStat", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJoE_C_Stats, DefenceMaxStat), METADATA_PARAMS(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_DefenceMaxStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_DefenceMaxStat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Defence_MetaData[] = {
		{ "Category", "JoE_C_Stats" },
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Defence = { "Defence", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJoE_C_Stats, Defence), METADATA_PARAMS(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Defence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Defence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_SpeedMaxStat_MetaData[] = {
		{ "Category", "JoE_C_Stats" },
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_SpeedMaxStat = { "SpeedMaxStat", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJoE_C_Stats, SpeedMaxStat), METADATA_PARAMS(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_SpeedMaxStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_SpeedMaxStat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "JoE_C_Stats" },
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJoE_C_Stats, Speed), METADATA_PARAMS(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_StaminaMaxStat_MetaData[] = {
		{ "Category", "JoE_C_Stats" },
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_StaminaMaxStat = { "StaminaMaxStat", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJoE_C_Stats, StaminaMaxStat), METADATA_PARAMS(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_StaminaMaxStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_StaminaMaxStat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Stamina_MetaData[] = {
		{ "Category", "JoE_C_Stats" },
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJoE_C_Stats, Stamina), METADATA_PARAMS(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Stamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Stamina_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_MagicMaxStat_MetaData[] = {
		{ "Category", "JoE_C_Stats" },
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_MagicMaxStat = { "MagicMaxStat", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJoE_C_Stats, MagicMaxStat), METADATA_PARAMS(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_MagicMaxStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_MagicMaxStat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Magic_MetaData[] = {
		{ "Category", "JoE_C_Stats" },
		{ "ModuleRelativePath", "JoE_C_Stats.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Magic = { "Magic", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJoE_C_Stats, Magic), METADATA_PARAMS(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Magic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Magic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJoE_C_Stats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnAttackModifiedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnDefenceModifiedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnSpeedModifiedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnStaminaModifiedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_OnMagicModifiedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_AttackMaxStat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Attack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_DefenceMaxStat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Defence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_SpeedMaxStat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_StaminaMaxStat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Stamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_MagicMaxStat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoE_C_Stats_Statics::NewProp_Magic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJoE_C_Stats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJoE_C_Stats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJoE_C_Stats_Statics::ClassParams = {
		&UJoE_C_Stats::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UJoE_C_Stats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UJoE_C_Stats_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UJoE_C_Stats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJoE_C_Stats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJoE_C_Stats()
	{
		if (!Z_Registration_Info_UClass_UJoE_C_Stats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJoE_C_Stats.OuterSingleton, Z_Construct_UClass_UJoE_C_Stats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJoE_C_Stats.OuterSingleton;
	}
	template<> JUDGEMENT_OF_EDEN_API UClass* StaticClass<UJoE_C_Stats>()
	{
		return UJoE_C_Stats::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJoE_C_Stats);
	UJoE_C_Stats::~UJoE_C_Stats() {}
	struct Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJoE_C_Stats, UJoE_C_Stats::StaticClass, TEXT("UJoE_C_Stats"), &Z_Registration_Info_UClass_UJoE_C_Stats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJoE_C_Stats), 3282877713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_4191685759(TEXT("/Script/Judgement_of_Eden"),
		Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_JoE_C_Stats_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
