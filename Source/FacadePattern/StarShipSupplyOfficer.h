// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StarShipCrewMember.h" //Tripulacion de una nave estelar
#include "StarShipSupplyOfficer.generated.h"

/**
 * 
 */
UCLASS()
class FACADEPATTERN_API AStarShipSupplyOfficer : public AStarShipCrewMember
{
	GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AStarShipSupplyOfficer(); //Oficial de suministros de naves estelares

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    //Funci?n Interfaz Obligacion - Imprime el registro de la Obligacion
    void Obligacion() override;

    //Funcion Interfaz Tripulacion - Devuelve el nombre
    FString TituloDeLaTripulacion() override;
	
};
