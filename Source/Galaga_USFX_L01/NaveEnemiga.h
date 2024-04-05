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
	
	//UPROPERTY(VisibleAnywhere)
	//UComponenteDeInvisibilidad* ComponenteInvisibilidad;

	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	//UComponenteDeInvisibilidad* ComponenteDeInvisibilidad;
	

protected:
	float resistencia; //Numero de disparos que puede recibir antes de ser destruido
	float velocidad;
	float danoProducido; //Potencia de cada proyectil que dispara la anave
	FString nombre;
	float tiempoDisparo; //Tiempo que debe transcurrir entre cada disparo
	FVector posicion;
	int trayectoria; //Cada valor numerico representa a una funcion que la nave debe asumir para moverse
	int capacidadPasajeros; //Numero de naves que puede transportar
	int capacidadMunicion; //Numero de disparos que puede realizar antes de recargar
	int tipoNave; //Cada valor numerico representa a un tipo de nave enemiga
	float experiencia;
	float energia;

	float peso;
	float volumen;


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
	//Pruebas
	//void AlternarVisibilidad();
	//void ActualizarInvisibilidad();
	FTimerHandle Timerhandle_Visibilidad;
};
 