// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}
void ANaveEnemigaTransporte::Mover(float DeltaTime)
{
	//FVector PosicionActual = GetActorLocation();

	//float NuevaX = -100.0f;
	//float NuevaY = 0.0f;
	//float NuevaZ = FMath::RandRange(-500.0f, 500.0f) * DeltaTime;

	//FVector Desplazamiento = FVector(NuevaX * DeltaTime, NuevaY * DeltaTime, NuevaZ);

	//FVector NuevaPosicion = PosicionActual + Desplazamiento;

	//SetActorLocation(NuevaPosicion);

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
	//probar si se puede mover cierta cantidad y no en el mapa 

	//if (movimientoY = movimientoY + 200.0f)
	//{
	//	movimientoY *= -1.0f;
	//}


	SetActorLocation(NuevaPosicion);

}

void ANaveEnemigaTransporte::Disparar()
{
}
void ANaveEnemigaTransporte::Destruirse()
{
}

void ANaveEnemigaTransporte::Escapar()
{
}
void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}