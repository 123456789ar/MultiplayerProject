// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "C_Character.h"
#include "Judgement_of_EdenGameModeBase.generated.h"

UENUM()
enum class EGamePlayState
{
	EPlaying,
	EGameOver,
	EUnknown
};

/**
 * 
 */
UCLASS(minimalapi)
class AJudgement_of_EdenGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AJudgement_of_EdenGameModeBase();
	
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	AC_Character* MyCharacter;

	UFUNCTION(BlueprintPure, Category = "Health")
		EGamePlayState GetCurrentState() const;

	void SetCurrentState(EGamePlayState NewState);

private:
	EGamePlayState CurrentState;

	void HandleNewState(EGamePlayState NewState);
};
