// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StarShipCrewMember.generated.h"

UCLASS()
class FACADE_PATTERN_API AStarShipCrewMember : public AActor
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
	void Levantarse();
	void Ejercitarse();
	void Prepararse();
	void Limpieza();
	void Trabajar();
	void Organizar();
	void ApagarLuces();

	void Tarea(const TArray<FString> _Tareas);

	virtual void Obligacion() PURE_VIRTUAL(AStarShipCrewMember::Obligacion;);

	virtual FString TituloDeLaTripulacion() PURE_VIRTUAL(AStarShipCrewMember::TituloDeLaTripulacion, return " ";);
private:
	void ValidarTareas(const FString& _tarea)
};
