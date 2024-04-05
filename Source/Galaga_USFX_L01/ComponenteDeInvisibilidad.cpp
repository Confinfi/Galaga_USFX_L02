// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteDeInvisibilidad.h"
#include "Galaga_USFX_L01GameMode.h"
#include "Components/StaticMeshComponent.h"
#include "TimerManager.h"

// Sets default values for this component's properties
UComponenteDeInvisibilidad::UComponenteDeInvisibilidad()
{

	PrimaryComponentTick.bCanEverTick = true;


}
void UComponenteDeInvisibilidad::OcultarMallaDeNave()
{
    // Obtener el game mode
    AGalaga_USFX_L01GameMode* GameMode = Cast<AGalaga_USFX_L01GameMode>(GetWorld()->GetAuthGameMode());
    if (GameMode)
    {
        // Decide aleatoriamente si esta nave debe ser invisible
        bool DebeSerInvisible = FMath::RandBool();

        // Si se decide que la nave debe ser invisible, oculta su malla
        if (DebeSerInvisible)
        {
            mallaNaveEnemiga->SetVisibility(false);
        }
        else
        {
            mallaNaveEnemiga->SetVisibility(true);
        }
    }
}

// Called when the game starts
void UComponenteDeInvisibilidad::BeginPlay()
{
	Super::BeginPlay();

    // Obtener la malla de la nave enemiga adjunta a este actor
    mallaNaveEnemiga = Cast<UStaticMeshComponent>(GetOwner()->GetComponentByClass(UStaticMeshComponent::StaticClass()));
 
    // Inicia el temporizador para cambiar la visibilidad cada 5 segundos
    GetWorld()->GetTimerManager().SetTimer(Timerhandle_Visibilidad, this, &UComponenteDeInvisibilidad::CambiarVisibilidad, 5.0f, true);


}


// Called every frame
void UComponenteDeInvisibilidad::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
void UComponenteDeInvisibilidad::CambiarVisibilidad()
{
    if (mallaNaveEnemiga)
    {
        // Decide aleatoriamente si la nave debe ser invisible
        bool DebeSerInvisible = FMath::RandBool();

        // Cambia la visibilidad de la malla de la nave enemiga según la decisión aleatoria
        mallaNaveEnemiga->SetVisibility(!DebeSerInvisible);
    }
}
