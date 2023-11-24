// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Character.h"
#include "Kismet/KismetMathLibrary.h"
#include "TimerManager.h"

// Sets default values
AC_Character::AC_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AC_Character::BeginPlay()
{
	Super::BeginPlay();
	
	FullHealth = 1000.0f;
	Health = FullHealth;
	HealthPercentage = 1.0f;
	bCanBeDamaged = true;
}

// Called every frame
void AC_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AC_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float AC_Character::GetHealth()
{
	return HealthPercentage;
}

FText AC_Character::GetHealthIntText()
{
	int32 HP = FMath::RoundHalfFromZero(HealthPercentage * 100);
	FString HPS = FString::FromInt(HP);
	FString HealthHUD = HPS + FString(TEXT("%"));
	FText HPTEXT = FText::FromString(HealthHUD);
	return HPTEXT;
}

void AC_Character::SetDamageState()
{
	bCanBeDamaged = true;
}

void AC_Character::DamageTimer()
{
	GetWorldTimerManager().SetTimer(MemberTimerHandle,  
		this, &AC_Character::SetDamageState, 2.0f, false);
}

bool AC_Character::PlayFlash()
{
	if (redFlash)
	{
		redFlash = false;
		return true;
	}

	return false;
}

void AC_Character::RecievePointDamage(float Damage, const class UDamageType* DamageType, 
	FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, 
	FName BoneName, FVector ShotFromDirection, class AController* InstigatedBy,
	AActor* DamageCauser, const FHitResult& HitInfo)
{
	bCanBeDamaged = false;
	redFlash = true;
	UpdateHealth(-Damage);
	DamageTimer();
}

void AC_Character::UpdateHealth(float HealthChange)
{
	Health += HealthChange;
	Health = FMath::Clamp(Health, 0.0f, FullHealth);
	HealthPercentage = Health / FullHealth;
}