// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaG2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodrizaG2 : public ANaveEnemigaNodriza
{
	GENERATED_BODY()
private:
	int resistenciaX6;
	ANaveEnemigaNodrizaG2();
	FORCEINLINE int GettripleResistenciaX6() const { return resistenciaX6; }
	FORCEINLINE void SetInvisibilidadTemp(int _resistenciaX6) { resistenciaX6 = _resistenciaX6; }
protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
};
