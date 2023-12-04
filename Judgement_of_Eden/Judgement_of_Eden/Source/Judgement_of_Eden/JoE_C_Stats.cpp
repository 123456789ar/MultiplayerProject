// Fill out your copyright notice in the Description page of Project Settings.


#include "JoE_C_Stats.h"
#include "Kismet/KismetMathLibrary.h"
#include "TimerManager.h"

// Sets default values for this component's properties
UJoE_C_Stats::UJoE_C_Stats()
{
	//: FullStrength (10)
	//: FullDefense (10)
	//: FullSpeed (10)
	: FullStamina (100)
	: FullCore (100)
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UJoE_C_Stats::BeginPlay()
{
	Super::BeginPlay();
	Strength = FullStrength;
	Stamina = FullStamina;
	StaminaPercentage = 1.0f;
	Core = FullCore;
	CorePercentage = 1.0f;
	// ...
	
}


// Called every frame
void UJoE_C_Stats::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

float UJoE_C_Stats::GetStamina()
{
	return FullStamina;
}

FText UJoE_C_Stats::GetStaminaIntText()
{
	int32 STM = FMath::RoundHalfFromZero(StaminaPercentage * 100);
	FString STMS = FString::FromInt(STM);
	FString StaminaHUD = STMS + FString(TEXT("%"));
	FText STMTEXT = FText::FromString(StaminaHUD);
	return STMTEXT;
}

void UJoE_C_Stats::UpdateStamina(float StaminaChange)
{
	Stamina += StaminaChange;
	Stamina = FMath::Clamp(Stamina, 0.0f, FullStamina);
	StaminaPercentage = Stamina / FullStamina;
}
/*
float UJoE_C_Stats::GetDefense()
{
	return FullDefense;
}

FText UJoE_C_Stats::GetDefenseIntText()
{
	int32 DEF = FMath::RoundHalfFromZero(DefensePercentage * 100);
	FString DEFS = FString::FromInt(DEF);
	FString DefenseHUD = DEFS + FString(TEXT("%"));
	FText DEFTEXT = FText::FromString(DefenseHUD);
	return DEFTEXT;
}*/