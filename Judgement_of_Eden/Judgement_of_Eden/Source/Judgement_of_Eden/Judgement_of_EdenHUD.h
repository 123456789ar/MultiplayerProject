// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Judgement_of_EdenHUD.generated.h"

/**
 * 
 */
UCLASS()
class AJudgement_of_EdenHUD : public AHUD
{
	GENERATED_BODY()

public:
	AJudgement_of_EdenHUD();
	
	virtual void DrawHUD() override;

	virtual void BeginPlay() override;

private:
	class UTexture2D* CrosshairTex;

	UPROPERTY(EditAnywhere, Category = "Health")
	TSubclassOf<class UUserWidget> HUDWidgetClass;

	UPROPERTY(EditAnywhere, Category = "Health")
	class UUserWidget* CurrentWidget;
};
