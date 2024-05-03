// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "MyNaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AMyNaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int cantidadBombas;

public:
	AMyNaveEnemigaCaza();

protected:
	virtual void Mover(float DeltaTime) ;
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
