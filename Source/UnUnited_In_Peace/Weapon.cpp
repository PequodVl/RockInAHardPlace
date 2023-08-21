#include "Weapon.h"

// Sets default values
AWeapon::AWeapon()
{
	// Set this empty to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	Mesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
}


void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}
