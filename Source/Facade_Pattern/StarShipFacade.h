// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "StarShipCrewMember.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StarShipFacade.generated.h"

UCLASS()
class FACADE_PATTERN_API AStarShipFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStarShipFacade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	TArray<FString> Tareas;
	TArray<AStarShipCrewMember*> Tripulacion;

	void ToqueDeDiana();
	void PlanDelDia();
	void ToqueDeSilencio();

private:
	void PerformtTasks(TArray<AStarShipCrewMember*> _tripulacion,
		TArray<FString> _tareas);

};
