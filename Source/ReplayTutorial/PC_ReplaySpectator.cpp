// Fill out your copyright notice in the Description page of Project Settings.

#include "PC_ReplaySpectator.h"
#include "Engine/DemoNetDriver.h"


APC_ReplaySpectator::APC_ReplaySpectator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bShowMouseCursor = true;
	PrimaryActorTick.bTickEvenWhenPaused = true;
	bShouldPerformFullTickWhenPaused = true;
}


