// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Facade_PatternGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FACADE_PATTERN_API AFacade_PatternGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFacade_PatternGameModeBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
