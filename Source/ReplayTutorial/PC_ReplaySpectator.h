// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PC_ReplaySpectator.generated.h"

/**
 * 
 */
UCLASS()
class REPLAYTUTORIAL_API APC_ReplaySpectator : public APlayerController
{
	GENERATED_BODY()
	
public:
	/** we must set some Pause-Behavior values in the ctor */
	APC_ReplaySpectator(const FObjectInitializer& ObjectInitializer);
	
	
};
