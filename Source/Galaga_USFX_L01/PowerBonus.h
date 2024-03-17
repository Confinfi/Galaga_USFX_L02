// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PowerBonus.generated.h"

UCLASS()
class GALAGA_USFX_L01_API APowerBonus : public AActor
{
	GENERATED_BODY()

private:
	float velocidadCaida;
	FVector posicion;
	float limitTime;

public:

	FORCEINLINE float GetvelocidadCaida() const { return velocidadCaida; }
	FORCEINLINE FVector Getposicion() const { return posicion; }
	FORCEINLINE float GetlimitTime() const { return limitTime; }

	FORCEINLINE void SetVelocidadCaida(float _velocidadCaida) { velocidadCaida = _velocidadCaida; }
	FORCEINLINE void SetPocision(FVector _posicion) { posicion = _posicion; }
	FORCEINLINE void SetlimitTime(float _limitTime) { limitTime = _limitTime; }

public:	
	// Sets default values for this actor's properties
	APowerBonus();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
