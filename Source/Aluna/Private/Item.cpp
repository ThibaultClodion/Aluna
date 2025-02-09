// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "Aluna/DebugMacros.h"


AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AItem::BeginPlay()
{
	Super::BeginPlay();

	FVector Location = GetActorLocation();
	FVector Forward = GetActorForwardVector();
		
    DRAW_SPHERE(Location);
	DRAW_VECTOR(Location, Location + Forward * 100.f);
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
