// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StarShipCrewMember.h"
#include "StarShipNavigationOfficer.generated.h"

/**
 * 
 */
UCLASS()
class FACADEPATTERN_API AStarShipNavigationOfficer : public AStarShipCrewMember
{
	GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AStarShipNavigationOfficer();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    //Función Interfaz Obligacion - Imprime el registro de la Obligacion
    virtual void Obligacion() override;

    //Funcion Interfaz Tripulacion - Devuelve el nombre
    virtual FString TituloDeLaTripulacion() override;

	
};
