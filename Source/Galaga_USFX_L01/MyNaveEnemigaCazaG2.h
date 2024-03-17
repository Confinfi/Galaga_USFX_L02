// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyNaveEnemigaCaza.h"
#include "MyNaveEnemigaCazaG2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AMyNaveEnemigaCazaG2 : public AMyNaveEnemigaCaza
{
	GENERATED_BODY()
private:
	int resistenciaDoble;
	AMyNaveEnemigaCazaG2();
	FORCEINLINE int GetResistenciaDoble() const { return resistenciaDoble; }
	FORCEINLINE void SetResistenciaDoble(int _resistenciaDoble) { resistenciaDoble = _resistenciaDoble; }
protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
};
