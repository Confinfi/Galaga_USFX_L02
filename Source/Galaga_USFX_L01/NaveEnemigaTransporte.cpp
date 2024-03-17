// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}
void ANaveEnemigaTransporte::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();

	float NuevaX = FMath::RandRange(-500.0f, 500.0f) * (DeltaTime / 500.0f);
	float NuevaY = FMath::RandRange(-500.0f, 500.0f) * (DeltaTime / 500.0f);
	float NuevaZ = FMath::RandRange(-500.0f, 500.0f) * DeltaTime;

	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z + NuevaZ);

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