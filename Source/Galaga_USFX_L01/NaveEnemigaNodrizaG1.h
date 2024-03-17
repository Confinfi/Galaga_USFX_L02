// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaG1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodrizaG1 : public ANaveEnemigaNodriza
{
	GENERATED_BODY()

private:
	int resistenciaCuadruple;
	ANaveEnemigaNodrizaG1();
	FORCEINLINE int GettripleResistenciaCuadruple() const { return resistenciaCuadruple; }
	FORCEINLINE void SetInvisibilidadTemp(int _resistenciaCuadruple) { resistenciaCuadruple = _resistenciaCuadruple; }
protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
};
