// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyNaveEnemigaCaza.h"
#include "MyNaveEnemigaCazaG1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AMyNaveEnemigaCazaG1 : public AMyNaveEnemigaCaza
{
	GENERATED_BODY()
private:
	int danoEspecial;

public:
	AMyNaveEnemigaCazaG1();
	FORCEINLINE int GetDanoEspecial() const { return danoEspecial; }
	FORCEINLINE void SetDanoEspecial(int _danoEspecial) { danoEspecial = _danoEspecial; }
protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
};
