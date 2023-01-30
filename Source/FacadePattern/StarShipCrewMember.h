// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StarShipCrewMember.generated.h"

UCLASS()
class FACADEPATTERN_API AStarShipCrewMember : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStarShipCrewMember();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
    //Ejecutar la tarea Apagar luces
    void ApagarLasLuces();

    //Ejecutar la tarea de levantarse al toque de diana
    void LevantarseToqueDeDiana();

    //Ejecutar la tarea del llamado a la libertad
    void LLamadoDeLibertad();

    //Ejecutar la tarea reunion de la tripulacion
    void ReunionDeLaTripulacion();

    //Ejecutar las tareas aprobadas
    void Tarea(const TArray<FString>& _Tareas);

    //Ejecuta la tarea del miembro. Es virtual puro, por lo que no necesita una implementación en esta clase
    virtual void Obligacion() PURE_VIRTUAL(AStarShipCrewMember::Duty;);

    //Devuelve el titulo de la tripulacion. Es virtual puro, por lo que no necesita una implementación en esta clase
    virtual FString TituloDeLaTripulacion() PURE_VIRTUAL(AStarShipCrewMember::CrewTitle, return "";);

private:
    //Ejecutar la tarea pasada
    void Tarea(const FString& Tarea);

};
