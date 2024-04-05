// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "Galaga_USFX_L01GameMode.h"


// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	// Create the mesh component
	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	mallaNaveEnemiga->SetupAttachment(RootComponent);
	RootComponent = mallaNaveEnemiga;
}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();

	// Obtener el componente de malla de la nave enemiga
	/*mallaNaveEnemiga = Cast<UStaticMeshComponent>(GetComponentByClass(UStaticMeshComponent::StaticClass()));
	if (!mallaNaveEnemiga)
	{
		UE_LOG(LogTemp, Error, TEXT("No se pudo encontrar el componente de malla de la nave enemiga."));
		return;
	}*/


	//GetWorldTimerManager().SetTimer(Timerhandle_Visibilidad, this, &ANaveEnemiga::ActualizarInvisibilidad, 5.0f, true);
}

//void ANaveEnemiga::ActualizarInvisibilidad()
//{
//    // Obtener el game mode
//    AGalaga_USFX_L01GameMode* GameMode = Cast<AGalaga_USFX_L01GameMode>(GetWorld()->GetAuthGameMode());
//    if (GameMode)
//    {
//        // Decide aleatoriamente si esta nave debe ser invisible
//        bool DebeSerInvisible = FMath::RandBool();
//
//        // Si se decide que la nave debe ser invisible, oculta su malla
//        if (DebeSerInvisible)
//        {
//            mallaNaveEnemiga->SetVisibility(false);
//        }
//        else
//        {
//            mallaNaveEnemiga->SetVisibility(true);
//        }
//    }
//}
// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

