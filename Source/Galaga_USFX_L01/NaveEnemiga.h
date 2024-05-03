// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ComponenteDeInvisibilidad.h"
#include "NaveEnemiga.generated.h"

UCLASS(abstract)
class GALAGA_USFX_L01_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNaveEnemiga;

protected:
	float resistencia; 
	float velocidad;
	float dano; 
	FString nombre;
	FVector posicion;
	int tipoNave; 
	float experiencia;

public:
	// Sets default values for this actor's properties
	ANaveEnemiga();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	//virtual void mover() = 0;
	void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover, );
	void Disparar() PURE_VIRTUAL(ANaveEnemiga::Disparar, );
	void Destruirse() PURE_VIRTUAL(ANaveEnemiga::Destruirse, );
	void Escapar() PURE_VIRTUAL(ANaveEnemiga::Escapar, );
	//pruebas
	UComponenteDeInvisibilidad* ComponenteInvisibilidad;
	FTimerHandle Timerhandle_Visibilidad;
};
 