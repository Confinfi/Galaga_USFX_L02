// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporteG1.h"

ANaveEnemigaTransporteG1::ANaveEnemigaTransporteG1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));

	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaTransporteG1::Mover()
{

}

void ANaveEnemigaTransporteG1::Disparar()
{

}

void ANaveEnemigaTransporteG1::Destruirse()
{

}

void ANaveEnemigaTransporteG1::Escapar()
{

}