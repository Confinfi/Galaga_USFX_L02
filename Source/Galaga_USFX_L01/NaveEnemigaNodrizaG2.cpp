// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodrizaG2.h"

ANaveEnemigaNodrizaG2::ANaveEnemigaNodrizaG2()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaNodrizaG2::Mover()
{

}

void ANaveEnemigaNodrizaG2::Disparar()
{

}

void ANaveEnemigaNodrizaG2::Destruirse()
{

}

void ANaveEnemigaNodrizaG2::Escapar()
{

}