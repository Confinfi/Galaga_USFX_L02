// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaG2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaEspiaG2 : public ANaveEnemigaEspia
{
	GENERATED_BODY()
	
private:
	int invisibilidadTemp;
	ANaveEnemigaEspiaG2();
	FORCEINLINE int GetInvisibilidadTemp() const { return invisibilidadTemp; }
	FORCEINLINE void SetInvisibilidadTemp(int _invisibilidadTemp) { invisibilidadTemp = _invisibilidadTemp; }
protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
};
