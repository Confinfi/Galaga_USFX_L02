

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

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{

	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();


}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	FVector UbicacionNaveEnemiga = FVector(0.0f, 1000.0f, 200.0f);
	FVector ubicacionInicioNavesEnemigasCaza = FVector(-500.0f, 500.0f, 200.0f);
	FVector ubicacionInicioNavesEnemigasTransporte = FVector(500.0f, 500.0f, 200.0f);
	FVector ubicacionInicioNAvesEnemigasReabastecimiento = FVector(1000.0f, 500.0f, 200.0f);


	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)


	{
		//es clave declarar los contenedores con la clase abstracta para que cuando queramos almacenar los
		//objetos, puedan ser de todos los tipos siguiendo el arbol de erencia
		/*for (int k = 0; k < 30; k++)
		{
            FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasCaza.X, ubicacionInicioNavesEnemigasCaza.Y + k * 300, ubicacionInicioNavesEnemigasCaza.Z);
			AMyNaveEnemigaCaza* NaveEnemigaCazaTemporal = World->SpawnActor<AMyNaveEnemigaCaza>(PosicionNaveActual, rotacionNave);
			TANavesEnemigasCaza.Push(NaveEnemigaCazaTemporal);
		}*/

		/*for (int i = 0; i < 5; i++)*/
		{
			/*FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasCaza.X, ubicacionInicioNavesEnemigasCaza.Y + i * 300, ubicacionInicioNavesEnemigasCaza.Z);
			AMyNaveEnemigaCaza* NaveEnemigaCazaTemporal = World->SpawnActor<AMyNaveEnemigaCaza>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaCazaTemporal);*/

		}

	/*	float nevaaposicionX = ubicacionInicioNavesEnemigasTransporte.X - 300.0f;*/

		/*for (int j = 0; j < 5; j++)*/
		{
			//FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasCaza.X, ubicacionInicioNavesEnemigasCaza.Y + j * 300, ubicacionInicioNavesEnemigasCaza.Z);
			//AMyNaveEnemigaCaza* NaveEnemigaCazaTemporal = World->SpawnActor<AMyNaveEnemigaCaza>(PosicionNaveActual, rotacionNave);
            //TANavesEnemigasCaza.Push(NaveEnemigaCazaTemporal);
		}
		//esto es para el spawn local con ubicacion actual
		/*NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave01, rotacionNave);*/
			{
			// Array de clases de naves enemigas
			TArray<TSubclassOf<ANaveEnemiga>> claseNave = { AMyNaveEnemigaCazaG1::StaticClass(), AMyNaveEnemigaCazaG2::StaticClass(),ANaveEnemigaEspiaG1::StaticClass(),ANaveEnemigaEspiaG2::StaticClass(),
				ANaveEnemigaNodrizaG1::StaticClass(),ANaveEnemigaNodrizaG2::StaticClass(),ANaveEnemigaReabastecimientoG1::StaticClass(),ANaveEnemigaReabastecimientoG2::StaticClass(),
				ANaveEnemigaTransporteG1::StaticClass(),ANaveEnemigaTransporteG2::StaticClass()};

			// Punto inicial de spawn
			FVector InicialSpawnLocation = FVector(80.f, -500.f, 200.f);

			// Genera 30 naves enemigas
			for (int i = 0; i < 30; ++i)
			{
				// Seleccion aleatoria
				TSubclassOf<ANaveEnemiga> ClaseRandom = claseNave[FMath::RandRange(0, claseNave.Num() - 1)];

				// pocision adicional de spawn
				FVector SpawnLocation = InicialSpawnLocation + FVector( 0.f,i * 50.f, 0.f); // Aumenta en 300 unidades en la dirección X

				// spawn con rotacion 0 y todo lo demas
				FRotator SpawnRotation = FRotator::ZeroRotator; 
				ANaveEnemiga* NuevaNaveSpawn = GetWorld()->SpawnActor<ANaveEnemiga>(ClaseRandom, SpawnLocation, SpawnRotation);

				// vemos si funca
				if (NuevaNaveSpawn)
				{
					// Asigna valores aleatorios a otros atributos de la nave enemiga
					//NuevaNaveSpawn->SetResistencia(FMath::RandRange(1.f, 100.f));
					//NuevaNaveSpawn->SetVelocidad(FMath::RandRange(1.f, 100.f));
					//NuevaNaveSpawn->SetDanoProducido(FMath::RandRange(1.f, 100.f));
					//NuevaNaveSpawn->SetNombre(FString::Printf(TEXT("NaveEnemiga %d"), i));
					//NuevaNaveSpawn->SetTiempoDisparo(FMath::RandRange(1.f, 100.f));
				}
			}
		}
	
	}

	//MyNaveEnemigaCaza01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));


}

void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
