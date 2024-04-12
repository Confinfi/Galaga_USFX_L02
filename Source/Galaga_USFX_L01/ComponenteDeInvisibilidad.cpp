// ComponenteDeInvisibilidad.cpp

#include "ComponenteDeInvisibilidad.h"
#include "Components/StaticMeshComponent.h"
#include "TimerManager.h"

UComponenteDeInvisibilidad::UComponenteDeInvisibilidad()
{
    //Permiso para que el componente se actualice cada frame 
    //PrimaryComponentTick.bCanEverTick = true;
}

void UComponenteDeInvisibilidad::BeginPlay()
{
    Super::BeginPlay();

    // Obtener la malla de la nave enemiga
    mallaNaveEnemiga = Cast<UStaticMeshComponent>(GetOwner()->GetComponentByClass(UStaticMeshComponent::StaticClass()));

    // Temporizador para cambiar la visibilidad cada 5 segundos
    GetWorld()->GetTimerManager().SetTimer(TimerHandle_Visibilidad, this, &UComponenteDeInvisibilidad::CambiarVisibilidad, 5.0f, true);
}

void UComponenteDeInvisibilidad::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UComponenteDeInvisibilidad::CambiarVisibilidad()
{
    //verificacion
    if (mallaNaveEnemiga)
    {
        // Decidir aleatoriamente si la nave debe ser invisible
        bool DebeSerInvisible = FMath::RandBool();
        mallaNaveEnemiga->SetVisibility(!DebeSerInvisible);
    }
}