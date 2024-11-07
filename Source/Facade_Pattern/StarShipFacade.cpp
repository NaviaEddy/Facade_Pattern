// Fill out your copyright notice in the Description page of Project Settings.


#include "StarShipFacade.h"
#include "StarShipNavigationOfficer.h"
#include "StarShipOperationsOfficer.h"
#include "StarShipSupplyOfficer.h"

// Sets default values
AStarShipFacade::AStarShipFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStarShipFacade::BeginPlay()
{
	Super::BeginPlay();
	//Inicializamos los tarrays
	Tripulacion = TArray<AStarShipCrewMember*>();
	Tareas = TArray<FString>();

	//Engendramos los diferentes oficiales
	AStarShipNavigationOfficer* OficialNav =
		GetWorld()->SpawnActor<AStarShipNavigationOfficer>
		(AStarShipNavigationOfficer::StaticClass());
	AStarShipOperationsOfficer* OficialOp =
		GetWorld()->SpawnActor<AStarShipOperationsOfficer>
		(AStarShipOperationsOfficer::StaticClass());
	AStarShipSupplyOfficer* OficialSup =
		GetWorld()->SpawnActor<AStarShipSupplyOfficer>
		(AStarShipSupplyOfficer::StaticClass());

	//Agregamos al TArray los diferentes oficiales
	Tripulacion.Add(OficialNav);
	Tripulacion.Add(OficialOp);
	Tripulacion.Add(OficialSup);
}

// Called every frame
void AStarShipFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStarShipFacade::ToqueDeDiana()
{
	Tareas.Empty();
	Tareas.Add("Toque de diana");
	Tareas.Add("Reunion");
	Tareas.Add("Limpiar banios");

	PerformtTasks(Tripulacion, Tareas);
}

void AStarShipFacade::PlanDelDia()
{
	Tareas.Empty();
	Tareas.Add("Hacer supervision");

	PerformtTasks(Tripulacion, Tareas);
}

void AStarShipFacade::ToqueDeSilencio()
{
	Tareas.Empty();
	Tareas.Add("Llamada de la libertad");
	Tareas.Add("Apagar luces");

	PerformtTasks(Tripulacion, Tareas);
}

void AStarShipFacade::PerformtTasks(TArray<AStarShipCrewMember*> _tripulacion, TArray<FString> _tareas)
{
	for (AStarShipCrewMember* Miembro : _tripulacion) {
		Miembro->Tarea(_tareas);
	}
}

