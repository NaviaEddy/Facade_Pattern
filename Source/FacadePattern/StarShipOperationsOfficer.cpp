// Fill out your copyright notice in the Description page of Project Settings.


#include "StarShipOperationsOfficer.h"

//Sets default values
AStarShipOperationsOfficer::AStarShipOperationsOfficer()
{
    //Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
}

//Called when the game starts or when spawned
void AStarShipOperationsOfficer::BeginPlay()
{
    Super::BeginPlay();
}

//Called every frame
void AStarShipOperationsOfficer::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AStarShipOperationsOfficer::Obligacion()
{
    //Imprimir cadena de obligacion
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s sintetiza y difunde la información recibida." ), *TituloDeLaTripulacion()));
}

FString AStarShipOperationsOfficer::TituloDeLaTripulacion()
{
    //Devuelve el titulo
    return "El Oficial de operaciones";
}
