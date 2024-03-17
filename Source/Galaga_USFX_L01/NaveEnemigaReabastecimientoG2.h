// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaReabastecimientoG2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaReabastecimientoG2 : public ANaveEnemigaReabastecimiento
{
	GENERATED_BODY()
	
private:
	int duplicarResistencia;
	ANaveEnemigaReabastecimientoG2();
	FORCEINLINE int GetDuplicarResistencia() const { return duplicarResistencia; }
	FORCEINLINE void SetDuplicarResistencia(int _duplicarResistencia) { duplicarResistencia = _duplicarResistencia; }
protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
};
