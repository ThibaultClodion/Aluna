// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AlunaCharacter.generated.h"

UCLASS()
class ALUNA_API AAlunaCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AAlunaCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual void BeginPlay() override;
};
