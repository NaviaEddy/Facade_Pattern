// Fill out your copyright notice in the Description page of Project Settings.


#include "StarShipSupplyOfficer.h"

//Sets default values
AStarShipSupplyOfficer::AStarShipSupplyOfficer()
{
    //Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
}

//Called when the game starts or when spawned
void AStarShipSupplyOfficer::BeginPlay()
{
    Super::BeginPlay();
}

//Called every frame
void AStarShipSupplyOfficer::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AStarShipSupplyOfficer::Obligacion()
{
    //Imprimir cadena de obligacion
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s garantiza que haya suministros suficientes para los barcos."), *TituloDeLaTripulacion()));
}
FString AStarShipSupplyOfficer::TituloDeLaTripulacion()
{
    //Devuelve el titulo
    return "El Oficial de suministros";
}