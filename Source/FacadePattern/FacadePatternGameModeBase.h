// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FacadePatternGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FACADEPATTERN_API AFacadePatternGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
    //Sets default values for this actor's properties
    AFacadePatternGameModeBase();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;



};
