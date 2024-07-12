#include "ProximityTrigger.h"
#include "Components/CapsuleComponent.h"

AProximityTrigger::AProximityTrigger()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collider"));
	RootComponent = CapsuleComp;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(CapsuleComp);

	CapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &AProximityTrigger::OnOverlapStart);
}

void AProximityTrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

void AProximityTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProximityTrigger::OnOverlapStart(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Something overlapped!!!"));
}
