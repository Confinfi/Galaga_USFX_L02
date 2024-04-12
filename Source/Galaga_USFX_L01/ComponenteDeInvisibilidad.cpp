// ComponenteDeInvisibilidad.cpp

#include "ComponenteDeInvisibilidad.h"
#include "Components/StaticMeshComponent.h"
#include "TimerManager.h"

UComponenteDeInvisibilidad::UComponenteDeInvisibilidad()
{
    SetComponentTickEnabled(false);
}

void UComponenteDeInvisibilidad::BeginPlay()
{
    Super::BeginPlay();

    //Vemos en que actor se usara el componente 
    NaveEnemiga = GetOwner();
    if (!NaveEnemiga)
    {
        UE_LOG(LogTemp, Error, TEXT("UComponenteDeInvisibilidad: No se pudo obtener el actor asociado."));
        return;
    }

    // Temporizador cada 5 segundos
    GetWorld()->GetTimerManager().SetTimer(TimerHandle_Visibilidad, this, &UComponenteDeInvisibilidad::CambiarVisibilidad, 5.0f, true);

}

void UComponenteDeInvisibilidad::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UComponenteDeInvisibilidad::CambiarVisibilidad()
{
    if (NaveEnemiga)
    {
        // Genera un valor aleatorio
        float RandomValue = FMath::FRandRange(1.f, 10.f);

        // porcentaje 50%
        bool Invisible = RandomValue > 5.0f;

        // Hace invisible o visible al actor según el valor aleatorio
        NaveEnemiga->SetActorHiddenInGame(Invisible);
    }
}