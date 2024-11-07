// Fill out your copyright notice in the Description page of Project Settings.


#include "StarShipNavigationOfficer.h"

// Sets default values
AStarShipNavigationOfficer::AStarShipNavigationOfficer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStarShipNavigationOfficer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStarShipNavigationOfficer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStarShipNavigationOfficer::Obligacion()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Silver,
		FString::Printf(TEXT("%s, Navega el barco"), *TituloDeLaTripulacion()));
}

FString AStarShipNavigationOfficer::TituloDeLaTripulacion()
{
	return "Oficial de navegacion";
}

