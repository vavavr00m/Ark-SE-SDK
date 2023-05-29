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
	 * BlueprintGeneratedClass StructureTurretRocket.StructureTurretRocket_C
	 * Size -> 0x0028 (FullSize[0x10F0] - InheritedSize[0x10C8])
	 */
	class AStructureTurretRocket_C : public APrimalStructureTurretBallista
	{
	public:
		class UPrimalInventoryBP_Ballista_C*                       PrimalInventoryBP_Ballista_C1;                           // 0x10C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              RocketMesh;                                              // 0x10D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                TargetingEmitter;                                        // 0x10D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              SkeletalMesh1;                                           // 0x10E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    StasisComponent;                                         // 0x10E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void GetHudData(class UPrimalInventoryComponent** InventoryComponent, class UClass** CurrentAmmoItemTemplate, TArray<class UClass*>* AmmoItemTemplates, int32_t* LowAmmoWarningAmount);
		void BPReleasedPlayer(class AShooterCharacter* ReleasedChar, int32_t AtSeatNumber);
		void UserConstructionScript();
		void ExecuteUbergraph_StructureTurretRocket(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
