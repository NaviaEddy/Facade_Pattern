// Copyright Epic Games, Inc. All Rights Reserved.


#include "FacadePatternGameModeBase.h"
#include "StarShipFacade.h"

AFacadePatternGameModeBase::AFacadePatternGameModeBase()
{
	//Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AFacadePatternGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	//Crear el Actor Fachada del Barco
	AStarShipFacade* ShipFacade = GetWorld()->SpawnActor<AStarShipFacade>(AStarShipFacade::StaticClass());

	//Ejecutar las tareas necesarias
	ShipFacade->ToqueDeDiana();
	ShipFacade->PlanDelDia();
	ShipFacade->ToqueDeSilencio();

}

void AFacadePatternGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
