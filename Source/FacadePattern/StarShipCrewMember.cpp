// Fill out your copyright notice in the Description page of Project Settings.


#include "StarShipCrewMember.h"

//Sets default values
AStarShipCrewMember::AStarShipCrewMember()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

//Called when the game starts or when spawned
void AStarShipCrewMember::BeginPlay()
{
	Super::BeginPlay();
	
}

//Called every frame
void AStarShipCrewMember::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStarShipCrewMember::ApagarLasLuces()
{
	//Imprimir cadena de luces apagadas
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s toque de silencio,toque de silencio luces apagadas."), *TituloDeLaTripulacion()));

}

void AStarShipCrewMember::LevantarseToqueDeDiana()
{
	//Imprimir cadena de toque de diana
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s todas las manos en alto y en toque de diana."), *TituloDeLaTripulacion()));

}

void AStarShipCrewMember::LLamadoDeLibertad()
{
	//Imprimir cadena del llamado de la libertad
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s llamado de la libertad, llamado de la libertad."), *TituloDeLaTripulacion()));

}

void AStarShipCrewMember::ReunionDeLaTripulacion()
{
	//Imprimir cadena reunion de la tripulacion
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s hora de la reunion."), *TituloDeLaTripulacion()));
}

void AStarShipCrewMember::Tarea(const TArray<FString>& _Tareas)
{
	//Haga un bucle en la matriz Tareas y llame a la función Tarea() para cada una de ellas
	for (const FString& myTarea : _Tareas)
	{
		Tarea(myTarea);
	}

}

void AStarShipCrewMember::Tarea(const FString& Tarea)
{
    //Comprueba qué tarea debe ejecutarse
    if (Tarea.Equals("Apagar luces"))
    {
        ApagarLasLuces();
    }
    else if (Tarea.Equals("Toque de diana"))
    {
        LevantarseToqueDeDiana();
    }
    else if (Tarea.Equals("Llamada de la libertad"))
    {
        LLamadoDeLibertad();
    }
    else if (Tarea.Equals("Reunion"))
    {
        ReunionDeLaTripulacion();
    }
    else if (Tarea.Equals("Obligacion"))
    {
        Obligacion();
    }
    else
    {
        //En caso de que la tarea pasada no exista
        GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Tarea indefinida")));
    }

}

