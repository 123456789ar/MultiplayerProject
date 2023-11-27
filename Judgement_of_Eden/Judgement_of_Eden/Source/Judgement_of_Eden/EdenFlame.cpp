// Fill out your copyright notice in the Description page of Project Settings.


#include "EdenFlame.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

// Sets default values
AEdenFlame::AEdenFlame()
{
	MyBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("My Box Component"));
	MyBoxComponent->InitBoxExtent(FVector(50.0f, 50.0f, 50.0f));
	RootComponent = MyBoxComponent;

	Fire = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("My Fire"));
	Fire->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	Fire->SetupAttachment(RootComponent);

	bCanApplyDamage = false;
}

void AEdenFlame::BeginPlay()
{
	FScriptDelegate OnBeginOverlapDelegate;
	OnBeginOverlapDelegate.BindUFunction(this, "OnOverlapBegin");
	MyBoxComponent->OnComponentBeginOverlap.Add(OnBeginOverlapDelegate);

	FScriptDelegate OnEndOverlapDelegate;
	OnEndOverlapDelegate.BindUFunction(this, "OnOverlapEnd");
	MyBoxComponent->OnComponentEndOverlap.Add(OnEndOverlapDelegate);
}

void AEdenFlame::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp,
	class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		bCanApplyDamage = true;
		MyCharacter = Cast<AActor>(OtherActor);
		MyHit = SweepResult;
		GetWorldTimerManager().SetTimer(FireTimerHandle, this, &AEdenFlame::ApplyFireDamage, 2.2f, true, 0.0f);
	}
}

void AEdenFlame::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp,
	class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
	bCanApplyDamage = false;
	GetWorldTimerManager().ClearTimer(FireTimerHandle);
	MyCharacter = nullptr;
}

void AEdenFlame::ApplyFireDamage()
{
	if (bCanApplyDamage && MyCharacter)
	{
		UGameplayStatics::ApplyPointDamage(MyCharacter, 200.0f, GetActorLocation(), MyHit, nullptr, this, FireDamageType);
	}
}

