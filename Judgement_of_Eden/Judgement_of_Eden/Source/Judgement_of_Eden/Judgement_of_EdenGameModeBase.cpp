// Fill out your copyright notice in the Description page of Project Settings.


#include "Judgement_of_EdenGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "C_Character.h"

AJudgement_of_EdenGameModeBase::AJudgement_of_EdenGameModeBase()
{
}

void AJudgement_of_EdenGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	SetCurrentState(EGamePlayState::EPlaying);

	MyCharacter = Cast<AC_Character>(UGameplayStatics::GetPlayerPawn(this, 0));
}

void AJudgement_of_EdenGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (MyCharacter)
	{
		if (FMath::IsNearlyZero(MyCharacter->GetHealth(), 0.001f))
		{
			SetCurrentState(EGamePlayState::EGameOver);
		}
	}
}

EGamePlayState AJudgement_of_EdenGameModeBase::GetCurrentState() const
{
	return CurrentState;
}

void AJudgement_of_EdenGameModeBase::SetCurrentState(EGamePlayState NewState)
{
	CurrentState = NewState;
	HandleNewState(CurrentState);
}

void AJudgement_of_EdenGameModeBase::HandleNewState(EGamePlayState NewState)
{
	switch (NewState)
	{
	case EGamePlayState::EPlaying:
		{

		}
		break;

		case EGamePlayState::EGameOver:
		{
			UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
		}
		break;

		default:
		case EGamePlayState::EUnknown:
		{

		}
		break;
	}
}
