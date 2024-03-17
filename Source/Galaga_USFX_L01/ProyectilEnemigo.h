// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProyectilEnemigo.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AProyectilEnemigo : public AActor
{
	GENERATED_BODY()
	
private:

	float velocidad;
	int trayectoria;
	float tiempoExplosion;

public:

	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE int GetTrayectoria() const { return trayectoria; }
	FORCEINLINE float GetTiempoExplosion() const { return tiempoExplosion; }

	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetTrayectoria(int _trayectoria) { trayectoria = _trayectoria; }
	FORCEINLINE void SetTiempoExplosion(float _tiempoExplosion) { tiempoExplosion = _tiempoExplosion; }

public:	
	// Sets default values for this actor's properties
	AProyectilEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
