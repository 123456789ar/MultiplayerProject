// Fill out your copyright notice in the Description page of Project Settings.


#include "EdenTear.h"

// Sets default values
AEdenTear::AEdenTear()
{
	OnActorBeginOverlap.AddDynamic(this, &AEdenTear::OnOverlap);

}

void AEdenTear::OnOverlap(AActor* MyOverlappedActor, AActor* OtherActor)
{
	if ((OtherActor != nullptr) && (OtherActor != this))
	{
		MyCharacter = Cast<AC_Character>(OtherActor);

		if (MyCharacter && MyCharacter->GetHealth() < 1.0f)
		{
			MyCharacter->UpdateHealth(10.0f);
			Destroy();
		}
	}
}


