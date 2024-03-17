// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransporteG2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaTransporteG2 : public ANaveEnemigaTransporte
{
	GENERATED_BODY()
	
private:
	int cargaDoble;
	ANaveEnemigaTransporteG2();
	FORCEINLINE int GetCargaDoble() const { return cargaDoble; }
	FORCEINLINE void SetCargaDoble(int _cargaDoble) { cargaDoble = _cargaDoble; }
protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
};
