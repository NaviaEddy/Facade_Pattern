// Fill out your copyright notice in the Description page of Project Settings.


#include "StarShipCrewMember.h"

// Sets default values
AStarShipCrewMember::AStarShipCrewMember()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStarShipCrewMember::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStarShipCrewMember::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStarShipCrewMember::Levantarse()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue,
		FString::Printf(TEXT("%s, LEVANTARSE!!!!"), *TituloDeLaTripulacion()));
}

void AStarShipCrewMember::Ejercitarse()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
		FString::Printf(TEXT("%s, Ejercicio matutino"), *TituloDeLaTripulacion()));
}

void AStarShipCrewMember::Prepararse()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s, VESTIRSE!!!!"), *TituloDeLaTripulacion()));
}

void AStarShipCrewMember::Limpieza()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange,
		FString::Printf(TEXT("%s, Aseando"), *TituloDeLaTripulacion()));
}

void AStarShipCrewMember::Trabajar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Emerald,
		FString::Printf(TEXT("%s, Charlando"), *TituloDeLaTripulacion()));
}

void AStarShipCrewMember::Organizar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta,
		FString::Printf(TEXT("%s, Haciendo fila"), *TituloDeLaTripulacion()));
}

void AStarShipCrewMember::ApagarLuces()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan,
		FString::Printf(TEXT("%s, Hora de dormir"), *TituloDeLaTripulacion()));
}

void AStarShipCrewMember::Tarea(const TArray<FString> _Tareas)
{
	for (const FString& mytarea : _Tareas) {
		ValidarTareas(mytarea);
	}
}

void AStarShipCrewMember::ValidarTareas(const FString& _tarea) {
	if (_tarea.Equals("Toque de diana")) {
		Levantarse();
	}
	else if (_tarea.Equals("Reunion")) {
		Ejercitarse();
	}
	else if (_tarea.Equals("Limpiar banios")) {
		Limpieza();
	}
	else if (_tarea.Equals("Hacer supervision")) {
		Trabajar();
	}
	else if (_tarea.Equals("Llamada de la libertad")) {
		Organizar();
	}
	else if (_tarea.Equals("Apagar luces")) {
		ApagarLuces();
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,
			FString::Printf(TEXT("No existe una tarea")));
	}
}

