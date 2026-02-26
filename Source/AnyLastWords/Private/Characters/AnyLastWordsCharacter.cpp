// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/AnyLastWordsCharacter.h"

// Sets default values
AAnyLastWordsCharacter::AAnyLastWordsCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAnyLastWordsCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAnyLastWordsCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAnyLastWordsCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

