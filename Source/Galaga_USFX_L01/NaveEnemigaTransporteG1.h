// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransporteG1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaTransporteG1 : public ANaveEnemigaTransporte
{
	GENERATED_BODY()
	
private:
	int cargaMayor;
	ANaveEnemigaTransporteG1();
	FORCEINLINE int GetCargaMayor() const { return cargaMayor; }
	FORCEINLINE void SetCargaMayor(int _cargaMayor) { cargaMayor = _cargaMayor; }
protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
};
