

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
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

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{

	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();


}
FVector InicialSpawnLocation = FVector(80.f, -500.f, 200.f);

FTimerHandle TimerHandle_MostrarMensajes;
FTimerHandle TimerHandle_EliminarNaves;
FTimerHandle TimerHandle_AgregarNaves;

TArray<TSubclassOf<ANaveEnemiga>> claseNave = { AMyNaveEnemigaCazaG1::StaticClass(), AMyNaveEnemigaCazaG2::StaticClass(), ANaveEnemigaEspiaG1::StaticClass(), ANaveEnemigaEspiaG2::StaticClass(),
    ANaveEnemigaNodrizaG1::StaticClass(), ANaveEnemigaNodrizaG2::StaticClass(),ANaveEnemigaReabastecimientoG1::StaticClass(), ANaveEnemigaReabastecimientoG2::StaticClass(),
    ANaveEnemigaTransporteG1::StaticClass(), ANaveEnemigaTransporteG2::StaticClass() };

void AGalaga_USFX_L01GameMode::BeginPlay()
{
    Super::BeginPlay();
    FVector ubicacionInicioNAvesEnemigasReabastecimiento = FVector(250.0f, 140.0f, 250.0f);

// Verifica si el mundo es válido antes de continuar
    if (GetWorld() != nullptr)
    {
        // Genera 30 naves enemigas.
        for (int i = 0; i < 30; ++i)
        {
            // Selecciona aleatoriamente una clase de nave enemiga de la TArray.
            TSubclassOf<ANaveEnemiga> ClaseRandom = claseNave[FMath::RandRange(0, claseNave.Num() - 1)];

            // Calcula la posición de spawn de la nave en función de la posición inicial y un incremento en la dirección Y.
            FVector SpawnLocation = InicialSpawnLocation + FVector(0.f, i * 40.f, 0.f);

            // Define la rotación de spawn como cero.
            FRotator SpawnRotation = FRotator::ZeroRotator;

            // Genera una nueva instancia de la nave enemiga en el mundo.
            ANaveEnemiga* NuevaNaveSpawn = GetWorld()->SpawnActor<ANaveEnemiga>(ClaseRandom, SpawnLocation, SpawnRotation);

            // Verifica si la nave se creo correctamente.
            if (NuevaNaveSpawn)
            {
                // Obtiene el nombre de la clase de la nave enemiga.
                FString NombreNave = ClaseRandom->GetDefaultObject<ANaveEnemiga>()->GetName();

                // Esto es para eliminar "Default_" del nombre de la nave.
                if (NombreNave.StartsWith("Default_"))
                {
                    NombreNave = NombreNave.RightChop(8);
                }
         
                //TMPosicionesNavesEnemigas.Add(NombreNave, SpawnLocation);
                //// Esto es para mostrar en pantalla
                //FString Mensaje = FString::Printf(TEXT("Nombre de la Nave: %s, Ubicación: %s"), *NombreNave, *SpawnLocation.ToString());
                //GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, Mensaje);
            }
        }
        //// Programa la función para mostrar el mensaje en pantalla cada 15 segundos durante los primeros 45 segundos del juego
        //GetWorld()->GetTimerManager().SetTimer(TimerHandle_MostrarMensajes, this, &AGalaga_USFX_L01GameMode::MostrarMensajesEnPantalla, 15.0f, true, 0.0f);
        //// Programa el temporizador cada 10 segundos
        //GetWorld()->GetTimerManager().SetTimer(TimerHandle_EliminarNaves, this, &AGalaga_USFX_L01GameMode::EliminarNaves, 10.0f, true, 0.0f);
        //GetWorld()->GetTimerManager().SetTimer(TimerHandle_AgregarNaves, this, &AGalaga_USFX_L01GameMode::CrearNaves, 10.0f, true, 5.0f); // Agrega naves después de 5 segundos del inicio

    }
  /*  ANaveEnemigaNodrizaG1* NaveNodriza = GetWorld()->SpawnActor<ANaveEnemigaNodrizaG1>(ubicacionInicioNAvesEnemigasReabastecimiento, FRotator::ZeroRotator);*/
}
//void AGalaga_USFX_L01GameMode::ActualizarInvisibilidadNaves()
//{
//    // Obtiene todos los actores en el mundo
//    TArray<AActor*> FoundActors;
//    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANaveEnemiga::StaticClass(), FoundActors);
//
//    // Itera sobre todos los actores y actualiza la invisibilidad si son naves enemigas
//    for (AActor* Actor : FoundActors)
//    {
//        ANaveEnemiga* Nave = Cast<ANaveEnemiga>(Actor);
//        if (Nave)
//        {
//            // Decide aleatoriamente si esta nave debe ser invisible
//            bool DebeSerInvisible = FMath::RandBool();
//
//            // Si se decide que la nave debe ser invisible, oculta su malla
//            if (DebeSerInvisible)
//            {
//                Nave->mallaNaveEnemiga->SetVisibility(false);
//            }
//            else
//            {
//                Nave->mallaNaveEnemiga->SetVisibility(true);
//            }
//        }
//    }
//}

void AGalaga_USFX_L01GameMode::MostrarMensajesEnPantalla()
    {
        //// Verifica si ya han pasado los 45 segundos
        //if (GetWorld()->GetTimeSeconds() >= 45.0f)
        //{
        //    // Detén el temporizador
        //    GetWorld()->GetTimerManager().ClearTimer(TimerHandle_MostrarMensajes);
        //    return;
        //}

        //// Lógica para obtener el nombre y la posición de cada nave enemiga
        //for (const auto& Element : TMPosicionesNavesEnemigas)
        //{
        //    FString NombreNave = Element.Key;
        //    FVector UbicacionNave = Element.Value;

        //    // Muestra el nombre y la ubicación de la nave enemiga en pantalla
        //    FString Mensaje = FString::Printf(TEXT("Nombre de la Nave: %s, Ubicación: %s"), *NombreNave, *UbicacionNave.ToString());
        //    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, Mensaje);
        //}
    }  
void AGalaga_USFX_L01GameMode::EliminarNaves()
    {
        //// Elimina 2 naves aleatorias
        //for (int i = 0; i < 2; ++i)
        //{
        //    if (TMPosicionesNavesEnemigas.Num() > 0)
        //    {
        //        int32 RandomIndex = FMath::RandRange(0, TMPosicionesNavesEnemigas.Num() - 1);
        //        auto Iterator = TMPosicionesNavesEnemigas.CreateIterator();
        //        for (int j = 0; j < RandomIndex; ++j)
        //        {
        //            ++Iterator;
        //        }
        //        Iterator.RemoveCurrent();
        //    }
        //}
	}
void AGalaga_USFX_L01GameMode::CrearNaves()
	{
       /* for (int i = 0; i < 3; ++i)
        {
            TSubclassOf<ANaveEnemiga> ClaseRandom = claseNave[FMath::RandRange(0, claseNave.Num() - 1)];
            FVector SpawnLocation = InicialSpawnLocation + FVector(0.f, (TMPosicionesNavesEnemigas.Num() + i) * 50.f, 0.f);
            FRotator SpawnRotation = FRotator::ZeroRotator;
            ANaveEnemiga* NuevaNaveSpawn = GetWorld()->SpawnActor<ANaveEnemiga>(ClaseRandom, SpawnLocation, SpawnRotation);
            if (NuevaNaveSpawn)
            {
                FString NombreNave = ClaseRandom->GetDefaultObject<ANaveEnemiga>()->GetName();
                if (NombreNave.StartsWith("Default_"))
                {
                    NombreNave = NombreNave.RightChop(8);
                }
                TMPosicionesNavesEnemigas.Add(NombreNave, SpawnLocation);
                FString Mensaje = FString::Printf(TEXT("Nombre de la Nave: %s, Ubicación: %s"), *NombreNave, *SpawnLocation.ToString());
                GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, Mensaje);
            }
        }*/
    }
void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
