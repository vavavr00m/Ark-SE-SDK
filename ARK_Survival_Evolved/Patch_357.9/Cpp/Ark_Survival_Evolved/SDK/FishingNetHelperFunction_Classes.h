#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass FishingNetHelperFunction.FishingNetHelperFunction_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFishingNetHelperFunction_C : public UObject
	{
	public:
		void StopReeling(class UObject* Fisher);
		void CancelCast(class UObject* ProjectileOwner);
		void CaughtFish(class UObject* ProjectileOwner, class APrimalDinoCharacter* Fish);
		void PassProjectileReference(class UObject* ProjectileOwner, class AShooterProjectile* Projectile);
		void reel(class UObject* Fisher);
		void UpdateRope(class AShooterProjectile* netprojectile, const struct FVector& RopeEndpointLocation);
		void NotifyNetCollidedWithWater(class UObject* ProjectileOwner, const struct FVector& WaterCollideLocation, const struct FRotator& ProjectileRotation);
		void ExecuteUbergraph_FishingNetHelperFunction(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
