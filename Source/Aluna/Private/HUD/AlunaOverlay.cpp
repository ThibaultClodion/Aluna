// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/AlunaOverlay.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UAlunaOverlay::SetHealthBarPercent(float Percent)
{
	if (HealthProgressBar)
	{
		HealthProgressBar->SetPercent(Percent);
	}
}

void UAlunaOverlay::SetStaminaBarPercent(float Percent)
{
	if (StaminaProgressBar)
	{
		StaminaProgressBar->SetPercent(Percent);
	}
}

void UAlunaOverlay::SetGoldText(int32 Gold)
{
	if (GoldCountText)
	{
		GoldCountText->SetText(FText::FromString(FString::Printf(TEXT("%d"), Gold)));
	}
}

void UAlunaOverlay::SetSoulText(int32 Soul)
{
	if (SoulCountText)
	{
		SoulCountText->SetText(FText::FromString(FString::Printf(TEXT("%d"), Soul)));
	}
}
