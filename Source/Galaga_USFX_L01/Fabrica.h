// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "GameFramework/Actor.h"
#include "Fabrica.generated.h"
UCLASS()
class GALAGA_USFX_L01_API AFabrica : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabrica();

	static ANaveEnemiga* CrearNaves(FString Tipo, UWorld* World, FVector Posicion, FRotator Rotacion);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
