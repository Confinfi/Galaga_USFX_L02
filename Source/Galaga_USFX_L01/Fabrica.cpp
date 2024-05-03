// Fill out your copyright notice in the Description page of Project Settings.


#include "Fabrica.h"
#include "NaveEnemiga.h"
#include "MyNaveEnemigaCazaG1.h"
#include "MyNaveEnemigaCazaG2.h"
#include "NaveEnemigaEspiaG1.h"
#include "NaveEnemigaEspiaG2.h"
#include "NaveEnemigaNodrizaG1.h"
#include "NaveEnemigaNodrizaG2.h"
#include "NaveEnemigaReabastecimientoG1.h"
#include "NaveEnemigaReabastecimientoG2.h"
#include "NaveEnemigaTransporteG1.h"
#include "NaveEnemigaTransporteG2.h"
// Sets default values
AFabrica::AFabrica()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

ANaveEnemiga* AFabrica::CrearNaves(FString Tipo, UWorld* World, FVector Posicion, FRotator Rotacion)
{

	if (Tipo == "CazaG1")
	{
		AMyNaveEnemigaCazaG1* NaveCreada = World->SpawnActor<AMyNaveEnemigaCazaG1>(Posicion, Rotacion);
		return NaveCreada;
	}
	if (Tipo == "CazaG2")
	{
		AMyNaveEnemigaCazaG2* NaveCreada = World->SpawnActor<AMyNaveEnemigaCazaG2>(Posicion, Rotacion);
		return NaveCreada;
	}
	if (Tipo == "EspiaG1")
	{
		ANaveEnemigaEspiaG1* NaveCreada = World->SpawnActor<ANaveEnemigaEspiaG1>(Posicion, Rotacion);
		return NaveCreada;
	}
	if (Tipo == "EspiaG2")
	{
		ANaveEnemigaEspiaG2* NaveCreada = World->SpawnActor<ANaveEnemigaEspiaG2>(Posicion, Rotacion);
		return NaveCreada;
	}
	if (Tipo == "NodrizaG1")
	{
		ANaveEnemigaNodrizaG1* NaveCreada = World->SpawnActor<ANaveEnemigaNodrizaG1>(Posicion, Rotacion);
		return NaveCreada;
	}
	if (Tipo == "NodrizaG2")
	{
		ANaveEnemigaNodrizaG2* NaveCreada = World->SpawnActor<ANaveEnemigaNodrizaG2>(Posicion, Rotacion);
		return NaveCreada;
	}
	if (Tipo == "ReabastecimientoG1")
	{
		ANaveEnemigaReabastecimientoG1* NaveCreada = World->SpawnActor<ANaveEnemigaReabastecimientoG1>(Posicion, Rotacion);
		return NaveCreada;
	}
	if (Tipo == "ReabastecimientoG2")
	{
		ANaveEnemigaReabastecimientoG2* NaveCreada = World->SpawnActor<ANaveEnemigaReabastecimientoG2>(Posicion, Rotacion);
		return NaveCreada;
	}
	if (Tipo == "TransporteG1")
	{
		ANaveEnemigaTransporteG1* NaveCreada = World->SpawnActor<ANaveEnemigaTransporteG1>(Posicion, Rotacion);
		return NaveCreada;
	}
	if (Tipo == "TransporteG2")
	{
		ANaveEnemigaTransporteG2* NaveCreada = World->SpawnActor<ANaveEnemigaTransporteG2>(Posicion, Rotacion);
		return NaveCreada;
	}
	return nullptr;
}

// Called when the game starts or when spawned
void AFabrica::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabrica::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

