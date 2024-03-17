// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimientoG1.h"

ANaveEnemigaReabastecimientoG1::ANaveEnemigaReabastecimientoG1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));

	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaReabastecimientoG1::Mover()
{

}

void ANaveEnemigaReabastecimientoG1::Disparar()
{

}

void ANaveEnemigaReabastecimientoG1::Destruirse()
{

}

void ANaveEnemigaReabastecimientoG1::Escapar()
{

}