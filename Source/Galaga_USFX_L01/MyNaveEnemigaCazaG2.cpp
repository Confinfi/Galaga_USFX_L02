// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNaveEnemigaCazaG2.h"

AMyNaveEnemigaCazaG2::AMyNaveEnemigaCazaG2()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));

	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void AMyNaveEnemigaCazaG2::Mover()
{

}

void AMyNaveEnemigaCazaG2::Disparar()
{

}

void AMyNaveEnemigaCazaG2::Destruirse()
{

}

void AMyNaveEnemigaCazaG2::Escapar()
{

}