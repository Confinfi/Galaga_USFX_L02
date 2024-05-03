

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "Fabrica.h"
#include "NaveEnemigaTransporte.h"
#include "MyNaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaReabastecimiento.h"
#include "MyNaveEnemigaCazaG1.h"
#include "MyNaveEnemigaCazaG2.h"
#include "NaveEnemigaTransporteG1.h"
#include "NaveEnemigaTransporteG2.h"
#include "NaveEnemigaEspiaG1.h"
#include "NaveEnemigaEspiaG2.h"
#include "NaveEnemigaNodrizaG1.h"
#include "NaveEnemigaNodrizaG2.h"
#include "NaveEnemigaReabastecimientoG1.h"
#include "NaveEnemigaReabastecimientoG2.h"
#include "Kismet/GameplayStatics.h"
#include "Containers/UnrealString.h"
#include "Containers/Array.h"


AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{

	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();


}


void AGalaga_USFX_L01GameMode::BeginPlay()
{
    Super::BeginPlay();

    FVector ubicacionInicialNaves = FVector(1000.0f, -1300.0f, 250.0f);
    FRotator rotacionNave = FRotator(0.0f, 180.0f, 0.0f);

    UWorld* const World = GetWorld();
    if (World != nullptr)
    {

        TArray<TPair<FString, FVector>> TiposNaves;
        TiposNaves.Add(TPair<FString, FVector>("CazaG1", FVector(ubicacionInicialNaves.X, ubicacionInicialNaves.Y, ubicacionInicialNaves.Z)));
        TiposNaves.Add(TPair<FString, FVector>("CazaG2", FVector(ubicacionInicialNaves.X - 300.0f, ubicacionInicialNaves.Y, ubicacionInicialNaves.Z)));
        TiposNaves.Add(TPair<FString, FVector>("EspiaG1", FVector(ubicacionInicialNaves.X - 600.0f, ubicacionInicialNaves.Y, ubicacionInicialNaves.Z)));
        TiposNaves.Add(TPair<FString, FVector>("EspiaG2", FVector(ubicacionInicialNaves.X - 900.0f, ubicacionInicialNaves.Y, ubicacionInicialNaves.Z)));
        TiposNaves.Add(TPair<FString, FVector>("TransporteG1", FVector(ubicacionInicialNaves.X - 1200.0f, ubicacionInicialNaves.Y, ubicacionInicialNaves.Z)));
        TiposNaves.Add(TPair<FString, FVector>("TransporteG2", FVector(ubicacionInicialNaves.X - 1500.0f, ubicacionInicialNaves.Y, ubicacionInicialNaves.Z)));

 
        for (const auto& TipoNave : TiposNaves)
        {
            FString Tipo = TipoNave.Key;
            FVector PosicionInicial = TipoNave.Value;

  
            for (int i = 0; i < 6; i++)
            {
                FVector ubicacionActual = FVector(PosicionInicial.X, PosicionInicial.Y + 300.0f * i, PosicionInicial.Z);
                ANaveEnemiga* NaveEnemigaActual = AFabrica::CrearNaves(Tipo, World, ubicacionActual, rotacionNave);
                TANavesEnemigas.Add(NaveEnemigaActual);
            }
        }

    }

}




void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
