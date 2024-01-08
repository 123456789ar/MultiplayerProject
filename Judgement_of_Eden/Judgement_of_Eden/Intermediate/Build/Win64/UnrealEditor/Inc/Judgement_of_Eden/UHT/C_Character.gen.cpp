// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Judgement_of_Eden/C_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Character() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	JUDGEMENT_OF_EDEN_API UClass* Z_Construct_UClass_AC_Character();
	JUDGEMENT_OF_EDEN_API UClass* Z_Construct_UClass_AC_Character_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Judgement_of_Eden();
// End Cross Module References
	DEFINE_FUNCTION(AC_Character::execUpdateHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealthChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHealth(Z_Param_HealthChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_Character::execReceiveDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveDamage(Z_Param_Damage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_Character::execHandleDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_Character::execPlayFlash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlayFlash();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_Character::execSetDamageState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDamageState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_Character::execDamageTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_Character::execGetHealthIntText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetHealthIntText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_Character::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	void AC_Character::StaticRegisterNativesAC_Character()
	{
		UClass* Class = AC_Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageTimer", &AC_Character::execDamageTimer },
			{ "GetHealth", &AC_Character::execGetHealth },
			{ "GetHealthIntText", &AC_Character::execGetHealthIntText },
			{ "HandleDeath", &AC_Character::execHandleDeath },
			{ "PlayFlash", &AC_Character::execPlayFlash },
			{ "ReceiveDamage", &AC_Character::execReceiveDamage },
			{ "SetDamageState", &AC_Character::execSetDamageState },
			{ "UpdateHealth", &AC_Character::execUpdateHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC_Character_DamageTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_Character_DamageTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_Character_DamageTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_Character, nullptr, "DamageTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_Character_DamageTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Character_DamageTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_Character_DamageTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_Character_DamageTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_Character_GetHealth_Statics
	{
		struct C_Character_eventGetHealth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_Character_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_Character_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_Character_GetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_Character_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_Character_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "C_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_Character_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_Character, nullptr, "GetHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_AC_Character_GetHealth_Statics::C_Character_eventGetHealth_Parms), Z_Construct_UFunction_AC_Character_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Character_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_Character_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Character_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_Character_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_Character_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_Character_GetHealthIntText_Statics
	{
		struct C_Character_eventGetHealthIntText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AC_Character_GetHealthIntText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_Character_eventGetHealthIntText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_Character_GetHealthIntText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_Character_GetHealthIntText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_Character_GetHealthIntText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "C_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_Character_GetHealthIntText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_Character, nullptr, "GetHealthIntText", nullptr, nullptr, sizeof(Z_Construct_UFunction_AC_Character_GetHealthIntText_Statics::C_Character_eventGetHealthIntText_Parms), Z_Construct_UFunction_AC_Character_GetHealthIntText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Character_GetHealthIntText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_Character_GetHealthIntText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Character_GetHealthIntText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_Character_GetHealthIntText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_Character_GetHealthIntText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_Character_HandleDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_Character_HandleDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_Character_HandleDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_Character, nullptr, "HandleDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_Character_HandleDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Character_HandleDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_Character_HandleDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_Character_HandleDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_Character_PlayFlash_Statics
	{
		struct C_Character_eventPlayFlash_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AC_Character_PlayFlash_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((C_Character_eventPlayFlash_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AC_Character_PlayFlash_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(C_Character_eventPlayFlash_Parms), &Z_Construct_UFunction_AC_Character_PlayFlash_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_Character_PlayFlash_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_Character_PlayFlash_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_Character_PlayFlash_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "C_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_Character_PlayFlash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_Character, nullptr, "PlayFlash", nullptr, nullptr, sizeof(Z_Construct_UFunction_AC_Character_PlayFlash_Statics::C_Character_eventPlayFlash_Parms), Z_Construct_UFunction_AC_Character_PlayFlash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Character_PlayFlash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_Character_PlayFlash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Character_PlayFlash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_Character_PlayFlash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_Character_PlayFlash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_Character_ReceiveDamage_Statics
	{
		struct C_Character_eventReceiveDamage_Parms
		{
			float Damage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_Character_ReceiveDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_Character_eventReceiveDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_Character_ReceiveDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_Character_ReceiveDamage_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_Character_ReceiveDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_Character_ReceiveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_Character, nullptr, "ReceiveDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AC_Character_ReceiveDamage_Statics::C_Character_eventReceiveDamage_Parms), Z_Construct_UFunction_AC_Character_ReceiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Character_ReceiveDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_Character_ReceiveDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Character_ReceiveDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_Character_ReceiveDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_Character_ReceiveDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_Character_SetDamageState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_Character_SetDamageState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_Character_SetDamageState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_Character, nullptr, "SetDamageState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_Character_SetDamageState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Character_SetDamageState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_Character_SetDamageState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_Character_SetDamageState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_Character_UpdateHealth_Statics
	{
		struct C_Character_eventUpdateHealth_Parms
		{
			float HealthChange;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_Character_UpdateHealth_Statics::NewProp_HealthChange = { "HealthChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_Character_eventUpdateHealth_Parms, HealthChange), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_Character_UpdateHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_Character_UpdateHealth_Statics::NewProp_HealthChange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_Character_UpdateHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "C_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_Character_UpdateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_Character, nullptr, "UpdateHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_AC_Character_UpdateHealth_Statics::C_Character_eventUpdateHealth_Parms), Z_Construct_UFunction_AC_Character_UpdateHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Character_UpdateHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_Character_UpdateHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_Character_UpdateHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_Character_UpdateHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_Character_UpdateHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_Character);
	UClass* Z_Construct_UClass_AC_Character_NoRegister()
	{
		return AC_Character::StaticClass();
	}
	struct Z_Construct_UClass_AC_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FullHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_redFlash_MetaData[];
#endif
		static void NewProp_redFlash_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_redFlash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Judgement_of_Eden,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC_Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC_Character_DamageTimer, "DamageTimer" }, // 2202493360
		{ &Z_Construct_UFunction_AC_Character_GetHealth, "GetHealth" }, // 3720752138
		{ &Z_Construct_UFunction_AC_Character_GetHealthIntText, "GetHealthIntText" }, // 121431109
		{ &Z_Construct_UFunction_AC_Character_HandleDeath, "HandleDeath" }, // 913280334
		{ &Z_Construct_UFunction_AC_Character_PlayFlash, "PlayFlash" }, // 523603278
		{ &Z_Construct_UFunction_AC_Character_ReceiveDamage, "ReceiveDamage" }, // 923912833
		{ &Z_Construct_UFunction_AC_Character_SetDamageState, "SetDamageState" }, // 2009082770
		{ &Z_Construct_UFunction_AC_Character_UpdateHealth, "UpdateHealth" }, // 1734315030
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C_Character.h" },
		{ "ModuleRelativePath", "C_Character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Character_Statics::NewProp_FullHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "C_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_Character_Statics::NewProp_FullHealth = { "FullHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_Character, FullHealth), METADATA_PARAMS(Z_Construct_UClass_AC_Character_Statics::NewProp_FullHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Character_Statics::NewProp_FullHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Character_Statics::NewProp_HealthPercentage_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "C_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_Character_Statics::NewProp_HealthPercentage = { "HealthPercentage", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_Character, HealthPercentage), METADATA_PARAMS(Z_Construct_UClass_AC_Character_Statics::NewProp_HealthPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Character_Statics::NewProp_HealthPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Character_Statics::NewProp_redFlash_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "C_Character.h" },
	};
#endif
	void Z_Construct_UClass_AC_Character_Statics::NewProp_redFlash_SetBit(void* Obj)
	{
		((AC_Character*)Obj)->redFlash = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AC_Character_Statics::NewProp_redFlash = { "redFlash", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AC_Character), &Z_Construct_UClass_AC_Character_Statics::NewProp_redFlash_SetBit, METADATA_PARAMS(Z_Construct_UClass_AC_Character_Statics::NewProp_redFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Character_Statics::NewProp_redFlash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Character_Statics::NewProp_Health_MetaData[] = {
		{ "ModuleRelativePath", "C_Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_Character_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_Character, Health), METADATA_PARAMS(Z_Construct_UClass_AC_Character_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Character_Statics::NewProp_Health_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Character_Statics::NewProp_FullHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Character_Statics::NewProp_HealthPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Character_Statics::NewProp_redFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Character_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_Character_Statics::ClassParams = {
		&AC_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC_Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC_Character_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_Character()
	{
		if (!Z_Registration_Info_UClass_AC_Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_Character.OuterSingleton, Z_Construct_UClass_AC_Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AC_Character.OuterSingleton;
	}
	template<> JUDGEMENT_OF_EDEN_API UClass* StaticClass<AC_Character>()
	{
		return AC_Character::StaticClass();
	}

	void AC_Character::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_HealthPercentage(TEXT("HealthPercentage"));
		static const FName Name_Health(TEXT("Health"));

		const bool bIsValid = true
			&& Name_HealthPercentage == ClassReps[(int32)ENetFields_Private::HealthPercentage].Property->GetFName()
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AC_Character"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_Character);
	AC_Character::~AC_Character() {}
	struct Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AC_Character, AC_Character::StaticClass, TEXT("AC_Character"), &Z_Registration_Info_UClass_AC_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_Character), 1992620113U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_79077577(TEXT("/Script/Judgement_of_Eden"),
		Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
