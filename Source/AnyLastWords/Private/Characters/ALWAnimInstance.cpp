// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/ALWAnimInstance.h"
#include "Characters/AnyLastWordsCharacter.h"

void UALWAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	// Cache the character reference once on initialization
	AnyLastWordsCharacter = Cast<AAnyLastWordsCharacter>(GetOwningActor());
}

void UALWAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if (!AnyLastWordsCharacter) return;

	// Animation blueprint will always know the character state 
	CharacterState = AnyLastWordsCharacter->GetCharacterState();
}
