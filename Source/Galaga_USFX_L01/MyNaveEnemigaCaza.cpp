// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNaveEnemigaCaza.h"

AMyNaveEnemigaCaza::AMyNaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}


void AMyNaveEnemigaCaza::Mover(float DeltaTime)
{

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