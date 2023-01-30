// Fill out your copyright notice in the Description page of Project Settings.


#include "StarShipFacade.h" //Fachada de la nave estelar
#include "StarShipNavigationOfficer.h" //Oficial de navegación de naves estelares
#include "StarShipOperationsOfficer.h" //Oficial de operaciones de naves estelares
#include "StarShipSupplyOfficer.h" //Oficial de suministros de naves estelares

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

	//Inicializando la lista
	Tripulacion = TArray<AStarShipCrewMember*>();
	Tareas = TArray<FString>();

	//Engendrar los miembros
	AStarShipNavigationOfficer* OficialDeNav = GetWorld()->SpawnActor<AStarShipNavigationOfficer>(AStarShipNavigationOfficer::StaticClass());
	AStarShipOperationsOfficer* OficialDeOp = GetWorld()->SpawnActor<AStarShipOperationsOfficer>(AStarShipOperationsOfficer::StaticClass());
	AStarShipSupplyOfficer* OficialDeSum = GetWorld()->SpawnActor<AStarShipSupplyOfficer>(AStarShipSupplyOfficer::StaticClass());

	//Añadir el miembro a la tripulación
	Tripulacion.Add(OficialDeNav);
	Tripulacion.Add(OficialDeOp);
	Tripulacion.Add(OficialDeSum);

}

// Called every frame
void AStarShipFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStarShipFacade::ToqueDeDiana()
{

	//Vaciar la lista de tareas
	Tareas.Empty();

	//Añadir las tareas a ejecutar
	Tareas.Add("Toque de diana");
	Tareas.Add("Reunion");

	//Ejecutar las tareas
	PerformTasks(Tripulacion, Tareas);

}


void AStarShipFacade::PlanDelDia()
{
	//Vaciar la lista de tareas
	Tareas.Empty();

	//Añadir las tareas a ejecutar
	Tareas.Add("Obligacion");

	//Ejecutar las tareas
	PerformTasks(Tripulacion, Tareas);

}

void AStarShipFacade::ToqueDeSilencio()
{
	//Vaciar la lista de tareas
	Tareas.Empty();

	//Añadir las tareas a ejecutar
	Tareas.Add("Llamada de la libertad");
	Tareas.Add("Apagar luces");

	//Ejecutar las tareas
	PerformTasks(Tripulacion, Tareas);

}

void AStarShipFacade::PerformTasks(TArray<AStarShipCrewMember*> _MyTripulacion, TArray<FString> _MyTareas)
{
	//Ejecutar las tareas aprobadas para cada miembro de la tripulación
	for (AStarShipCrewMember* Miembro : _MyTripulacion)
	{
		//Ejecutar las tareas
		Miembro->Tarea(_MyTareas);
	}

}


