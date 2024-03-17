// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporteG2.h"

ANaveEnemigaTransporteG2::ANaveEnemigaTransporteG2()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));

	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaTransporteG2::Mover()
{

}

void ANaveEnemigaTransporteG2::Disparar()
{

}

void ANaveEnemigaTransporteG2::Destruirse()
{

}

void ANaveEnemigaTransporteG2::Escapar()
{

}