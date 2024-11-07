// Copyright Epic Games, Inc. All Rights Reserved.


#include "Facade_PatternGameModeBase.h"
#include "StarShipFacade.h"

AFacade_PatternGameModeBase::AFacade_PatternGameModeBase()
{
}

void AFacade_PatternGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	AStarShipFacade* Facade = GetWorld()->SpawnActor<AStarShipFacade>
		(AStarShipFacade::StaticClass());

	Facade->ToqueDeDiana();
	Facade->PlanDelDia();
	Facade->ToqueDeSilencio();
}

void AFacade_PatternGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
