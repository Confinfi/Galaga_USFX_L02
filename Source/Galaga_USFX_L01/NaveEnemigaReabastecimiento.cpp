// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimiento.h"

ANaveEnemigaReabastecimiento::ANaveEnemigaReabastecimiento()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));

	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaReabastecimiento::Mover(float DeltaTime)
{
	static FVector PosicionInicial = GetActorLocation();
	static float LimiteInferior = PosicionInicial.X - 700.0f;
	static float LimiteSuperior = PosicionInicial.X + 80.0f;
	static float Limitederecho = PosicionInicial.Y + 1300.0f;
	static float LimiteIzquierdo = PosicionInicial.Y - 250.0f;
	static float movimientoY = 100.0f;
	FVector Desplazamiento = FVector(-100.0f * DeltaTime, movimientoY * DeltaTime, FMath::RandRange(-500.0f, 500.0f) * DeltaTime);

	FVector NuevaPosicion = GetActorLocation() + Desplazamiento;

	if (NuevaPosicion.X < LimiteInferior)
	{
		NuevaPosicion.X = LimiteSuperior;
	}
	else if (NuevaPosicion.X > LimiteSuperior)
	{
		NuevaPosicion.X = LimiteInferior;
	}
	if (NuevaPosicion.Y < LimiteIzquierdo || NuevaPosicion.Y >  Limitederecho)
	{
		movimientoY *= -1.0f;
	}


	SetActorLocation(NuevaPosicion);

}

void ANaveEnemigaReabastecimiento::Disparar()
{

}

void ANaveEnemigaReabastecimiento::Destruirse()
{

}

void ANaveEnemigaReabastecimiento::Escapar()
{
}
void ANaveEnemigaReabastecimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}