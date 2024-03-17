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

public:

	ANaveEnemiga* NaveEnemiga01;
	ANaveEnemigaTransporte* NaveEnemigaTransporte01;
	AMyNaveEnemigaCaza* MyNaveEnemigaCaza01;
	AMyNaveEnemigaCazaG1* MyNaveEnemigaCazaG101;
	AMyNaveEnemigaCazaG2* MyNaveEnemigaCazaG201;
	ANaveEnemigaEspia* NaveEnemigaEspia01;
	ANaveEnemigaNodriza* NaveEnemigaNodriza01;
	ANaveEnemigaReabastecimiento* NaveEnemigaReabastecimiento01;
	ANaveEnemigaTransporteG1* NaveEnemigaTransporteG101;
	ANaveEnemigaTransporteG2* NaveEnemigaTransporteG201;
	ANaveEnemigaEspiaG1* NaveEnemigaEspiaG101;
	ANaveEnemigaEspiaG2* NaveEnemigaEspiaG201;
	ANaveEnemigaNodrizaG1* NaveEnemigaNodrizaG101;
	ANaveEnemigaNodrizaG2* NaveEnemigaNodrizaG201;
	ANaveEnemigaReabastecimientoG1* NaveEnemigaReabastecimientoG101;
	ANaveEnemigaReabastecimientoG2* NaveEnemigaReabastecimientoG201;
protected:
	//Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<AMyNaveEnemigaCaza*> TANavesEnemigasCaza;
	TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;
private:
	int TiempoTranscurrido;

public:
	virtual void Tick(float DeltaTime) override;

};