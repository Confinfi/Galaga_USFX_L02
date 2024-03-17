// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNaveEnemigaCaza.h"

AMyNaveEnemigaCaza::AMyNaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}


void AMyNaveEnemigaCaza::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();

	float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;
	float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;


	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);

}



void AMyNaveEnemigaCaza::Disparar()
{

}

void AMyNaveEnemigaCaza::Destruirse()
{

}

void AMyNaveEnemigaCaza::Escapar()
{

}

void AMyNaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}