// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/ALWAnimInstance.h"
#include "Characters/AnyLastWordsCharacter.h"
#include "Characters/BaseMinion.h"

void UALWAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	// Cache the character reference once on initialization
	AnyLastWordsCharacter = Cast<AAnyLastWordsCharacter>(GetOwningActor());

	BaseMinion = Cast<ABaseMinion>(GetOwningActor());
}

void UALWAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if (AnyLastWordsCharacter)
	{
		// Character state is updated every frame to ensure the animation blueprint reflects the current state of the character
		CharacterState = AnyLastWordsCharacter->GetCharacterState();
	}

	if (BaseMinion)
	{
		if (MinionState == EMinionState::EMS_Dead) return;
		if (!IsValid(BaseMinion)) return;
		MinionState = BaseMinion->GetMinionState();
	}
}
