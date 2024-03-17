// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspiaG1.h"

ANaveEnemigaEspiaG1::ANaveEnemigaEspiaG1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));

	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaEspiaG1::Mover()
{

}

void ANaveEnemigaEspiaG1::Disparar()
{

}

void ANaveEnemigaEspiaG1::Destruirse()
{

}

void ANaveEnemigaEspiaG1::Escapar()
{

}