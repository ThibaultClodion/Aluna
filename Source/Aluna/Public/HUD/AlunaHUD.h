// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AlunaHUD.generated.h"

class UAlunaOverlay;

UCLASS()
class ALUNA_API AAlunaHUD : public AHUD
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

private:

	UPROPERTY(EditDefaultsOnly, Category = Aluna)
	TSubclassOf<UAlunaOverlay> AlunaOverlayClass;

	UPROPERTY()
	UAlunaOverlay* AlunaOverlay;

public:
	FORCEINLINE UAlunaOverlay* GetAlunaOverlay() const { return AlunaOverlay; }
};
