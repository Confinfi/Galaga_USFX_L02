// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodriza.h"

ANaveEnemigaNodriza::ANaveEnemigaNodriza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaNodriza::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();

	float NuevaX = FMath::RandRange(-500.0f, 500.0f) * (DeltaTime / 500.0f);
	float NuevaY = FMath::RandRange(-500.0f, 500.0f) * (DeltaTime / 500.0f);
	float NuevaZ = FMath::RandRange(-500.0f, 500.0f) * DeltaTime;

	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z + NuevaZ);

	SetActorLocation(NuevaPosicion);
}

void ANaveEnemigaNodriza::Disparar()
{

}

void ANaveEnemigaNodriza::Destruirse()
{

}

void ANaveEnemigaNodriza::Escapar()
{
}
void ANaveEnemigaNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}