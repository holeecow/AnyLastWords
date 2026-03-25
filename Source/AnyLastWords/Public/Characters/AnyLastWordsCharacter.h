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

	UFUNCTION(BlueprintCallable)
	// Getter function for the character state
	FORCEINLINE ECharacterState GetCharacterState() const { return CharacterState; }

	// Setter function for the character state
	UFUNCTION(BlueprintCallable)
	void SetCharacterState(ECharacterState State) { CharacterState = State; }

	// Getter function for the action state
	UFUNCTION(BlueprintCallable)
	FORCEINLINE EActionState GetActionState() const { return ActionState; }

	// Setter function for the action state
	UFUNCTION(BlueprintCallable)
	void SetActionState(EActionState State) { ActionState = State; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


private: 
	ECharacterState CharacterState =  ECharacterState::ECS_Unequipped;
	EActionState ActionState = EActionState::EAS_Unoccupied;
};
