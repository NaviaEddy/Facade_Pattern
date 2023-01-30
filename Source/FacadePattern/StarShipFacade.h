// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StarShipCrewMember.h"
#include "StarShipFacade.generated.h"

UCLASS()
class FACADEPATTERN_API AStarShipFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStarShipFacade();

private:

	//La lista de la tripulacion
	TArray<AStarShipCrewMember*> Tripulacion;

	//Las tareas a ejecutar
	UPROPERTY()
		TArray<FString> Tareas;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Ejecutar las tareas de toque de diana
	void ToqueDeDiana();

	//Ejecutar las tareas plan del día
	void PlanDelDia();

	//Ejecutar las tareas al acabar el dia
	void ToqueDeSilencio();

private:

	//Ejecutar las tareas para una Tripulación específica
	void PerformTasks(TArray<AStarShipCrewMember*> _MyTripulacion, TArray<FString> _MyTareas);

};
