#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

USTRUCT(BlueprintType)
struct FIKProperties
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UAnimSequence* AnimPose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float AimOffset = 15.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FTransform CUstomOffsetTransform;
};

UCLASS(Abstract)
class UNUNITED_IN_PEACE_API AWeapon : public AActor
{
	GENERATED_BODY()
public:
	AWeapon();

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class UStaticMeshComponent* Mesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configurations")
		FIKProperties IKProperties;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configurations")
		FTransform PlacementTransform;
};