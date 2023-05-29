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
	 * BlueprintGeneratedClass Tent_BP.Tent_BP_C
	 * Size -> 0x0061 (FullSize[0x0BE9] - InheritedSize[0x0B88])
	 */
	class ATent_BP_C : public APrimalStructureSkeletalDoor
	{
	public:
		class UBoxComponent*                                       DoorCollision;                                           // 0x0B88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBoxComponent*                                       Trigger;                                                 // 0x0B90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USkeletalMeshComponent*                              SkeletalDoor;                                            // 0x0B98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                TentMesh;                                                // 0x0BA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    StasisComponent;                                         // 0x0BA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DecayRate;                                               // 0x0BB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      AmountOfDecay;                                           // 0x0BB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       FirstLoop;                                               // 0x0BB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OPMP[0x3];                                   // 0x0BB9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FloorMaxDeltaZ;                                          // 0x0BBC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class UClass*>                                      StructureClassesForFullPickUp;                           // 0x0BC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UPrimalItem*                                         K2Node_Event_pickedup;                                   // 0x0BD0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetMaxHealth_ReturnValue;                       // 0x0BD8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue;                  // 0x0BDC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x0BE0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y77W[0x3];                                   // 0x0BE1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x0BE4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x0BE8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void UseFullPickup(class APrimalStructure* StructToPickUp, bool* UseFull);
		bool BPAllowPickupGiveItem(class APlayerController* ForPC);
		bool BPPreventUsingAsFloorForStructure(struct FPlacementData* theOutPlacementData, class APrimalStructure* StructureToPlaceOnMe);
		void GiveChildStructuresToInventory(class UPrimalInventoryComponent* ToInv);
		void GiveFloorStructures();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void PeriodicDamage();
		void BPApplyCustomDurabilityOnPickup(class UPrimalItem* PickedUp);
		void ExecuteUbergraph_Tent_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
