// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharacterTypes.h"
#include "ALWAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class ANYLASTWORDS_API UALWAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly)
	class AAnyLastWordsCharacter* AnyLastWordsCharacter;

	// Allow ECharacterState to be read in the animation blueprint but not modified
	UPROPERTY(BlueprintReadOnly, Category = "Movement | Character State")
	ECharacterState CharacterState;
};
