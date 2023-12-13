// Fill out your copyright notice in the Description page of Project Settings.


#include "JoE_AppleRed.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "JoE_C_Stats.h"

// Sets default values
AJoE_AppleRed::AJoE_AppleRed()
{
	MyBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("My Box Component"));
	MyBoxComponent->InitBoxExtent(FVector(50.0f, 50.0f, 50.0f));
	RootComponent = MyBoxComponent;

	bCanIncreaseAttack = false;
}

// Called when the game starts or when spawned
void AJoE_AppleRed::BeginPlay()
{
	FScriptDelegate OnBeginOverlapDelegate;
	OnBeginOverlapDelegate.BindUFunction(this, "OnOverlapBegin");
	MyBoxComponent->OnComponentBeginOverlap.Add(OnBeginOverlapDelegate);

	FScriptDelegate OnEndOverlapDelegate;
	OnEndOverlapDelegate.BindUFunction(this, "OnOverlapEnd");
	MyBoxComponent->OnComponentEndOverlap.Add(OnEndOverlapDelegate);
}

void AJoE_AppleRed::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp,
	class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		bCanIncreaseAttack = true;
		MyCharacter = Cast<AActor>(OtherActor);
		MyHit = SweepResult;
		GetWorldTimerManager().SetTimer(AttackTimerHandle, this, &AJoE_AppleRed::ApplyAttackIncrease, 2.2f, true, 0.0f);
	}
}

void AJoE_AppleRed::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp,
	class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
	bCanIncreaseAttack = false;
	GetWorldTimerManager().ClearTimer(AttackTimerHandle);
	MyCharacter = nullptr;
}

void AJoE_AppleRed::ApplyAttackIncrease()
{
	if (bCanIncreaseAttack && MyCharacter)
	{
		float Attack = MyCharacter->GetComponentByClass<UJoE_C_Stats>()->GetCurrentDefenceStat();
		float ActualAttack = FMath::Max(AttackUp + Attack, 0.0f);
		UGameplayStatics::ApplyPointDamage(MyCharacter, ActualAttack, GetActorLocation(), MyHit, nullptr, this, AttackStatType);
	}
}
