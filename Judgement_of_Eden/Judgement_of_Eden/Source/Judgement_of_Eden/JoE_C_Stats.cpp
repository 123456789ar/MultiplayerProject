// Fill out your copyright notice in the Description page of Project Settings.


#include "JoE_C_Stats.h"

UJoE_C_Stats::UJoE_C_Stats()
{
	PrimaryComponentTick.bCanEverTick = false;
	PrimaryComponentTick.bStartWithTickEnabled = false;
}

void UJoE_C_Stats::IncreaseAttackStat(float Value)
{
	const float OldAttack = Attack;
	Attack = FMath::Clamp(Attack + Value, 0.0f, AttackMaxStat);

	OnAttackModifiedEvent.Broadcast(OldAttack, Attack);
}

void UJoE_C_Stats::DecreaseAttackStat(float Value)
{
	const float OldAttack = Attack;
	Attack = FMath::Clamp(Attack - Value, 0.0f, AttackMaxStat);

	OnAttackModifiedEvent.Broadcast(OldAttack, Attack);
}

float UJoE_C_Stats::GetCurrentAttackStat() const
{
	return Attack;
}

void UJoE_C_Stats::IncreaseDefenceStat(float Value)
{
	const float OldDefence = Defence;
	Defence = FMath::Clamp(Defence + Value, 0.0f, DefenceMaxStat);

	OnDefenceModifiedEvent.Broadcast(OldDefence, Defence);
}

void UJoE_C_Stats::DecreaseDefenceStat(float Value)
{
	const float OldDefence = Defence;
	Defence = FMath::Clamp(Defence - Value, 0.0f, DefenceMaxStat);

	OnDefenceModifiedEvent.Broadcast(OldDefence, Defence);
}

float UJoE_C_Stats::GetCurrentDefenceStat() const
{
	return Defence;
}

void UJoE_C_Stats::IncreaseSpeedStat(float Value)
{
	const float OldSpeed = Speed;
	Speed = FMath::Clamp(Speed + Value, 0.0f, SpeedMaxStat);

	OnSpeedModifiedEvent.Broadcast(OldSpeed, Speed);
}

void UJoE_C_Stats::DecreaseSpeedStat(float Value)
{
	const float OldSpeed = Speed;
	Speed = FMath::Clamp(Speed - Value, 0.0f, SpeedMaxStat);

	OnSpeedModifiedEvent.Broadcast(OldSpeed, Speed);
}

float UJoE_C_Stats::GetCurrentSpeedStat() const
{
	return Speed;
}

void UJoE_C_Stats::IncreaseStaminaStat(float Value)
{
	const float OldStamina = Stamina;
	Stamina = FMath::Clamp(Stamina + Value, 0.0f, StaminaMaxStat);

	OnStaminaModifiedEvent.Broadcast(OldStamina, Stamina);
}

void UJoE_C_Stats::DecreaseStaminaStat(float Value)
{
	const float OldStamina = Stamina;
	Stamina = FMath::Clamp(Stamina - Value, 0.0f, StaminaMaxStat);

	OnStaminaModifiedEvent.Broadcast(OldStamina, Stamina);
}

float UJoE_C_Stats::GetCurrentStaminaStat() const
{
	return Stamina;
}

void UJoE_C_Stats::IncreaseMagicStat(float Value)
{
	const float OldMagic = Magic;
	Magic = FMath::Clamp(Magic + Value, 0.0f, MagicMaxStat);

	OnMagicModifiedEvent.Broadcast(OldMagic, Magic);
}

void UJoE_C_Stats::DecreaseMagicStat(float Value)
{
	const float OldMagic = Magic;
	Magic = FMath::Clamp(Speed - Value, 0.0f, MagicMaxStat);

	OnMagicModifiedEvent.Broadcast(OldMagic, Magic);
}

float UJoE_C_Stats::GetCurrentMagicStat() const
{
	return Magic;
}
