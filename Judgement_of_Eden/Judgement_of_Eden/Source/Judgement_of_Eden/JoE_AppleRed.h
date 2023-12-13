// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "JoE_AppleRed.generated.h"

UCLASS()
class JUDGEMENT_OF_EDEN_API AJoE_AppleRed : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJoE_AppleRed();

	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere)
	UBoxComponent* MyBoxComponent;

	UPROPERTY(EditAnywhere)
		TSubclassOf<UDamageType> AttackStatType;

	UPROPERTY(EditAnywhere)
	AActor* MyCharacter;

	UPROPERTY(EditAnywhere)
	FHitResult MyHit;

	bool bCanIncreaseAttack;
	FTimerHandle AttackTimerHandle;

	UPROPERTY(EditAnywhere)
	float AttackUp = 10;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp,
			class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp,
			class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex);

	UFUNCTION()
	void ApplyAttackIncrease();
};
