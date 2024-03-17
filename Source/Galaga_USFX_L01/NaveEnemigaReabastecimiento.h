// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaReabastecimiento.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaReabastecimiento : public ANaveEnemiga
{
	GENERATED_BODY()
	
private:
	int recargaResistencia;

public:
	ANaveEnemigaReabastecimiento();
	FORCEINLINE int GetRecargaResistencia() const { return recargaResistencia; }
	FORCEINLINE void SetRecargaResistencia(int _recargaResistencia) { recargaResistencia = _recargaResistencia; }
protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
public:

	virtual void Tick(float DeltaTime) override;
};
