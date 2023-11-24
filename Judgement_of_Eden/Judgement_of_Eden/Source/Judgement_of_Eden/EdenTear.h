// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C_Character.h"
#include "EdenTear.generated.h"

UCLASS()
class JUDGEMENT_OF_EDEN_API AEdenTear : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEdenTear();

public:	
	
	UFUNCTION()
	void OnOverlap(AActor* MyOverlappedActor, AActor* OtherActor);

	UPROPERTY(EditAnywhere)
	AC_Character* MyCharacter;

};
