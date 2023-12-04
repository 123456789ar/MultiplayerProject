// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "JoE_C_Stats.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class JUDGEMENT_OF_EDEN_API UJoE_C_Stats : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UJoE_C_Stats();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	/*
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stat")
	float FullStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stat")
	float StrengthPercentage;

	UFUNCTION(BlueprintPure, Category = "Stat")
	float GetStrength();

	UFUNCTION(BlueprintPure, Category = "Stat")
	FText GetStrengthIntText();

	UFUNCTION(BlueprintCallable, Category = "Stat")
	void UpdateStrength(float StrengthChange);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stat")
	float FullDefense;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stat")
	float DefensePercentage;

	UFUNCTION(BlueprintPure, Category = "Stat")
	float GetDefense();

	UFUNCTION(BlueprintPure, Category = "Stat")
	FText GetDefenseIntText();

	UFUNCTION(BlueprintCallable, Category = "Stat")
	void UpdateDefense(float DefenseChange);
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stat")
	float FullSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stat")
	float SpeedPercentage;

	UFUNCTION(BlueprintPure, Category = "Stat")
	float GetSpeed();

	UFUNCTION(BlueprintPure, Category = "Stat")
	FText GetSpeedIntText();

	UFUNCTION(BlueprintCallable, Category = "Stat")
	void UpdateSpeed(float SpeedChange);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stat")
	float FullStamina;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float StaminaPercentage;

	UFUNCTION(BlueprintPure, Category = "Stat")
	float GetStamina();

	UFUNCTION(BlueprintPure, Category = "Stat")
	FText GetStaminaIntText();

	UFUNCTION(BlueprintCallable, Category = "Stat")
	void UpdateStamina(float StaminaChange);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stat")
	float FullCore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float CorePercentage;

	UFUNCTION(BlueprintPure, Category = "Stat")
	float GetCore();

	UFUNCTION(BlueprintPure, Category = "Stat")
	FText GetCoreIntText();

	UFUNCTION(BlueprintCallable, Category = "Stat")
	void UpdateCore(float CoreChange);
};
