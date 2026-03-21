// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterTypes.h"
#include "AnyLastWordsCharacter.generated.h"

UCLASS()
class ANYLASTWORDS_API AAnyLastWordsCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAnyLastWordsCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Getter function for the character state
	FORCEINLINE ECharacterState GetCharacterState() const { return CharacterState; }

	UFUNCTION(BlueprintCallable)
	void SetCharacterState(ECharacterState State) { CharacterState = State; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


private: 
	ECharacterState CharacterState =  ECharacterState::ECS_Unequipped;
};
