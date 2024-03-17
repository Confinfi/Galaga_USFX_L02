// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaG1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaEspiaG1 : public ANaveEnemigaEspia
{
	GENERATED_BODY()
	
private:
	int mayorVelocidad;
	ANaveEnemigaEspiaG1();
	FORCEINLINE int GetMayorVelocidad() const { return mayorVelocidad; }
	FORCEINLINE void SetMayorVelocidad(int _mayorVelocidad) { mayorVelocidad = _mayorVelocidad; }
protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
};
