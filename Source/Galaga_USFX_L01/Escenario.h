// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escenario.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEscenario : public AActor
{
	GENERATED_BODY()

private:
	float tamanoAncho;
	float tamanoAlto;
	float vidas;
	float puntuacion;
	float level;

public:
	FORCEINLINE float GetTamanoAncho() const { return tamanoAncho; }
	FORCEINLINE float GetTamanoAlto() const { return tamanoAlto; }
	FORCEINLINE float GetVidas() const { return vidas; }
	FORCEINLINE float GetPuntuacion() const { return puntuacion; }
	FORCEINLINE float GetLevel() const { return level; }

	FORCEINLINE void SetTamanoAncho(float _tamanoAncho) { tamanoAncho = _tamanoAncho; }
	FORCEINLINE void SetTamanoAlto(float _tamanoAlto) { tamanoAlto = _tamanoAlto; }
	FORCEINLINE void SetVidas(float _vidas) { vidas = _vidas; }
	FORCEINLINE void SetPuntuacion(float _puntuacion) { puntuacion = _puntuacion; }
	FORCEINLINE void SetLevel(float _level) { level = _level; }

public:	
	// Sets default values for this actor's properties
	AEscenario();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
