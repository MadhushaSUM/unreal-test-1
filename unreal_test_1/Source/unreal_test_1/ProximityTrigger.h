#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProximityTrigger.generated.h"

UCLASS()
class UNREAL_TEST_1_API AProximityTrigger : public AActor
{
	GENERATED_BODY()
	
public:	
	AProximityTrigger();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
