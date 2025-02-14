// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/AlunaCharacter.h"

AAlunaCharacter::AAlunaCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AAlunaCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAlunaCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAlunaCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

