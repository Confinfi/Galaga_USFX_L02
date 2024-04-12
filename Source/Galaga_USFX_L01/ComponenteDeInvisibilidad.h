// ComponenteDeInvisibilidad.h

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ComponenteDeInvisibilidad.generated.h" 

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GALAGA_USFX_L01_API UComponenteDeInvisibilidad : public UActorComponent
{

    GENERATED_BODY()


public:
 /*   UStaticMeshComponent* mallaNaveEnemiga;*/
    UComponenteDeInvisibilidad();

protected:
    virtual void BeginPlay() override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    void CambiarVisibilidad();
    FTimerHandle TimerHandle_Visibilidad;
private:
    AActor* NaveEnemiga;
};