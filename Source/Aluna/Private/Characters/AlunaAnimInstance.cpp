// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/AlunaAnimInstance.h"
#include "Characters/AlunaCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UAlunaAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	AlunaCharacter = Cast<AAlunaCharacter>(TryGetPawnOwner());
	
	if (AlunaCharacter)
	{
		AlunaCharacterMovement = AlunaCharacter->GetCharacterMovement();
	}
}

void UAlunaAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if (AlunaCharacterMovement)
	{
		GroundSpeed = UKismetMathLibrary::VSizeXY(AlunaCharacterMovement->Velocity);
		IsFalling = AlunaCharacterMovement->IsFalling();
		CharacterState = AlunaCharacter->GetCharacterState();
		ActionState = AlunaCharacter->GetActionState();
		DeathPose = AlunaCharacter->GetDeathPose();
	}
}
