// Fill out your copyright notice in the Description page of Project Settings.


#include "StarShipOperationsOfficer.h"

// Sets default values
AStarShipOperationsOfficer::AStarShipOperationsOfficer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStarShipOperationsOfficer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStarShipOperationsOfficer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStarShipOperationsOfficer::Obligacion()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Silver,
		FString::Printf(TEXT("%s, Opera el barco"), *TituloDeLaTripulacion()));
}

FString AStarShipOperationsOfficer::TituloDeLaTripulacion()
{
	return "Oficial de operaciones";
}

