// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNaveEnemigaCazaG1.h"

AMyNaveEnemigaCazaG1::AMyNaveEnemigaCazaG1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));

	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void AMyNaveEnemigaCazaG1::Mover()
{

}

void AMyNaveEnemigaCazaG1::Disparar()
{

}

void AMyNaveEnemigaCazaG1::Destruirse()
{

}

void AMyNaveEnemigaCazaG1::Escapar()
{

}