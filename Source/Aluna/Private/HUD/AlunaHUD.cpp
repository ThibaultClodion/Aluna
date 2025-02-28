// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/AlunaHUD.h"
#include "HUD/AlunaOverlay.h"

void AAlunaHUD::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* Controller = World->GetFirstPlayerController();

		if (Controller && AlunaOverlayClass)
		{
			AlunaOverlay = CreateWidget<UAlunaOverlay>(Controller, AlunaOverlayClass);
			AlunaOverlay->AddToViewport();
		}
	}
}
