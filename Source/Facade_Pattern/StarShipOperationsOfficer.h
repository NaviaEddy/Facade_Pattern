// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StarShipCrewMember.h"
#include "StarShipOperationsOfficer.generated.h"

UCLASS()
class FACADE_PATTERN_API AStarShipOperationsOfficer : public AStarShipCrewMember
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStarShipOperationsOfficer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Obligacion() override;
	FString TituloDeLaTripulacion() override;

};
