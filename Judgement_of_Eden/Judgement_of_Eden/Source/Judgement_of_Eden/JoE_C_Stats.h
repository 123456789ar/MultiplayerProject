// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "JoE_C_Stats.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttackModifiedEvent, float, PreviousAttackStat, float, NewAttackStat);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDefenceModifiedEvent, float, PreviousDefenceStat, float, NewDefenceStat);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSpeedModifiedEvent, float, PreviousSpeedStat, float, NewSpeedStat);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStaminaModifiedEvent, float, PreviousStaminaStat, float, NewStaminaStat);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMagicModifiedEvent, float, PreviousMagicStat, float, NewMagicStat);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class JUDGEMENT_OF_EDEN_API UJoE_C_Stats : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UJoE_C_Stats();

protected:
	// Called when the game starts
	virtual void BeginPlay() override { Super::BeginPlay(); }

public:	
	UFUNCTION(BlueprintCallable)
		void IncreaseAttackStat(float Value);
	UFUNCTION(BlueprintCallable)
		void DecreaseAttackStat(float Value);
	UFUNCTION(BlueprintPure)
		float GetCurrentAttackStat() const;

	UFUNCTION(BlueprintCallable)
		void IncreaseDefenceStat(float Value);
	UFUNCTION(BlueprintCallable)
		void DecreaseDefenceStat(float Value);
	UFUNCTION(BlueprintPure)
		float GetCurrentDefenceStat() const;

	UFUNCTION(BlueprintCallable)
		void IncreaseSpeedStat(float Value);
	UFUNCTION(BlueprintCallable)
		void DecreaseSpeedStat(float Value);
	UFUNCTION(BlueprintPure)
		float GetCurrentSpeedStat() const;

	UFUNCTION(BlueprintCallable)
		void IncreaseStaminaStat(float Value);
	UFUNCTION(BlueprintCallable)
		void DecreaseStaminaStat(float Value);
	UFUNCTION(BlueprintPure)
		float GetCurrentStaminaStat() const;

	UFUNCTION(BlueprintCallable)
		void IncreaseMagicStat(float Value);
	UFUNCTION(BlueprintCallable)
		void DecreaseMagicStat(float Value);
	UFUNCTION(BlueprintPure)
		float GetCurrentMagicStat() const;

public: // Events

	UPROPERTY(BlueprintAssignable)
		FOnAttackModifiedEvent	OnAttackModifiedEvent;
	UPROPERTY(BlueprintAssignable)
		FOnDefenceModifiedEvent OnDefenceModifiedEvent;
	UPROPERTY(BlueprintAssignable)
		FOnSpeedModifiedEvent	OnSpeedModifiedEvent;
	UPROPERTY(BlueprintAssignable)
		FOnStaminaModifiedEvent OnStaminaModifiedEvent;
	UPROPERTY(BlueprintAssignable)
		FOnMagicModifiedEvent	OnMagicModifiedEvent;

protected: // Stats Protected So Only Child Classes Can Access This Directly

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float AttackMaxStat = 250;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float Attack = 10;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float DefenceMaxStat = 250;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float Defence = 10;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float SpeedMaxStat = 250;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float Speed = 10;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float StaminaMaxStat = 250;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float Stamina = 10;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float MagicMaxStat = 250;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float Magic = 10;
};
