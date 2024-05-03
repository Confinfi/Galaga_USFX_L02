// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_L01GameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaTransporte;
class ANaveEnemigaTransporteG1;
class ANaveEnemigaTransporteG2;
class AMyNaveEnemigaCaza;
class AMyNaveEnemigaCazaG1;
class AMyNaveEnemigaCazaG2;
class ANaveEnemigaEspia;
class ANaveEnemigaEspiaG1;
class ANaveEnemigaEspiaG2;
class ANaveEnemigaNodriza;
class ANaveEnemigaNodrizaG1;
class ANaveEnemigaNodrizaG2;
class ANaveEnemigaReabastecimiento;
class ANaveEnemigaReabastecimientoG1;
class ANaveEnemigaReabastecimientoG2;

UCLASS(MinimalAPI)
class AGalaga_USFX_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L01GameMode();


protected:
	//Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:

	virtual void Tick(float DeltaTime) override;
public:
	TArray<ANaveEnemiga*> TANavesEnemigas;

	
};