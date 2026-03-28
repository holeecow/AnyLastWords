// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterTypes.h"
#include "BaseMinion.generated.h"

UCLASS()
class ANYLASTWORDS_API ABaseMinion : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseMinion();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Getter function for the minion state
	UFUNCTION(BlueprintCallable)
	FORCEINLINE EMinionState GetMinionState() const { return MinionState; }

	// Setter function for the minion state
	UFUNCTION(BlueprintCallable)
	void SetMinionState(EMinionState State) { 
		MinionState = State; 
		UE_LOG(LogTemp, Warning, TEXT("Minion State Changed to: %d"), (int32)State);
	}
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:	
	EMinionState MinionState = EMinionState::EMS_Idle;

};
