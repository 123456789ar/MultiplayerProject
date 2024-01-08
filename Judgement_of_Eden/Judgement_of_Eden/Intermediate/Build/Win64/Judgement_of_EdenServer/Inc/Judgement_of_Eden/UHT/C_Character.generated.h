// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_Character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JUDGEMENT_OF_EDEN_C_Character_generated_h
#error "C_Character.generated.h already included, missing '#pragma once' in C_Character.h"
#endif
#define JUDGEMENT_OF_EDEN_C_Character_generated_h

#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_SPARSE_DATA
#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateHealth); \
	DECLARE_FUNCTION(execReceiveDamage); \
	DECLARE_FUNCTION(execHandleDeath); \
	DECLARE_FUNCTION(execPlayFlash); \
	DECLARE_FUNCTION(execSetDamageState); \
	DECLARE_FUNCTION(execDamageTimer); \
	DECLARE_FUNCTION(execGetHealthIntText); \
	DECLARE_FUNCTION(execGetHealth);


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateHealth); \
	DECLARE_FUNCTION(execReceiveDamage); \
	DECLARE_FUNCTION(execHandleDeath); \
	DECLARE_FUNCTION(execPlayFlash); \
	DECLARE_FUNCTION(execSetDamageState); \
	DECLARE_FUNCTION(execDamageTimer); \
	DECLARE_FUNCTION(execGetHealthIntText); \
	DECLARE_FUNCTION(execGetHealth);


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_ACCESSORS
#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_Character(); \
	friend struct Z_Construct_UClass_AC_Character_Statics; \
public: \
	DECLARE_CLASS(AC_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Judgement_of_Eden"), NO_API) \
	DECLARE_SERIALIZER(AC_Character) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HealthPercentage=NETFIELD_REP_START, \
		Health, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAC_Character(); \
	friend struct Z_Construct_UClass_AC_Character_Statics; \
public: \
	DECLARE_CLASS(AC_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Judgement_of_Eden"), NO_API) \
	DECLARE_SERIALIZER(AC_Character) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HealthPercentage=NETFIELD_REP_START, \
		Health, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_Character(AC_Character&&); \
	NO_API AC_Character(const AC_Character&); \
public: \
	NO_API virtual ~AC_Character();


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_Character(AC_Character&&); \
	NO_API AC_Character(const AC_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_Character) \
	NO_API virtual ~AC_Character();


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_13_PROLOG
#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_SPARSE_DATA \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_RPC_WRAPPERS \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_ACCESSORS \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_INCLASS \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_SPARSE_DATA \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_ACCESSORS \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_INCLASS_NO_PURE_DECLS \
	FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JUDGEMENT_OF_EDEN_API UClass* StaticClass<class AC_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Judgement_of_Eden_Judgement_of_Eden_Source_Judgement_of_Eden_C_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
