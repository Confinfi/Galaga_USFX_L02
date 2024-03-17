// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaReabastecimientoG1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaReabastecimientoG1 : public ANaveEnemigaReabastecimiento
{
	GENERATED_BODY()
	
private:
	int regenerarResistencia;
	ANaveEnemigaReabastecimientoG1();
	FORCEINLINE int GetRegenerarResistencia() const { return regenerarResistencia; }
	FORCEINLINE void SetRegenerarResistencia(int _regenerarResistencia) { regenerarResistencia = _regenerarResistencia; }
protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
};
