// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"

ANaveEnemigaEspia::ANaveEnemigaEspia()
{
	   static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));

	   mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaEspia::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();

	float NuevaX = FMath::RandRange(-500.0f, 500.0f) * (DeltaTime / 500.0f);
	float NuevaY = FMath::RandRange(-500.0f, 500.0f) * (DeltaTime / 500.0f);
	float NuevaZ = FMath::RandRange(-500.0f, 500.0f) * DeltaTime;

	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z + NuevaZ);

	SetActorLocation(NuevaPosicion);
}

void ANaveEnemigaEspia::Disparar()
{

}

void ANaveEnemigaEspia::Destruirse()
{

}

void ANaveEnemigaEspia::Escapar()
{

}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}