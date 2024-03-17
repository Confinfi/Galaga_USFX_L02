// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodriza : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	int nivelSpawn;

public:
	ANaveEnemigaNodriza();
	FORCEINLINE int GetNivelSpawn() const { return nivelSpawn; }
	FORCEINLINE void SetNivelSpawn(int _nivelSpawn) { nivelSpawn = _nivelSpawn; }
protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	
public:

	virtual void Tick(float DeltaTime) override;
};
