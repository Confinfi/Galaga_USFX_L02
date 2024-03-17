// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspiaG2.h"

ANaveEnemigaEspiaG2::ANaveEnemigaEspiaG2()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));

	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaEspiaG2::Mover()
{

}

void ANaveEnemigaEspiaG2::Disparar()
{

}

void ANaveEnemigaEspiaG2::Destruirse()
{

}

void ANaveEnemigaEspiaG2::Escapar()
{

}