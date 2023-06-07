#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
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
	 * BlueprintGeneratedClass OceanPlatfom_Wood_BP.OceanPlatfom_Wood_BP_C
	 * Size -> 0x0055 (FullSize[0x0B75] - InheritedSize[0x0B20])
	 */
	class AOceanPlatfom_Wood_BP_C : public AOceanPlatform_Base_BP_C
	{
	public:
		class UBoxComponent*                                       BuildArea;                                               // 0x0B20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            FoamInner4;                                              // 0x0B28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            FoamInner3;                                              // 0x0B30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            FoamInner1;                                              // 0x0B38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            FoamInner2;                                              // 0x0B40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            OuterFoam4;                                              // 0x0B48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            OuterFoam3;                                              // 0x0B50(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            OuterFoam2;                                              // 0x0B58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            OuterFoam1;                                              // 0x0B60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             TestOffset;                                              // 0x0B68(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x0B74(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BPOnDemolish(class APlayerController* ForPC, class AActor* DamageCauser);
		void BPOnStructurePickup(class APlayerController* PlayerController, class UClass* ItemType, class UPrimalItem* NewlyPickedUpItem, bool bIsQuickPickup);
		void BPPlacedStructure(class APlayerController* ForPC);
		bool BPOverrideSnappedFromTransform(class APrimalStructure* ParentStructure, int32_t ParentSnapFromIndex, const class FName& ParentSnapFromName, const struct FVector& UnsnappedPlacementPos, const struct FRotator& UnsnappedPlacementRot, const struct FVector& SnappedPlacementPos, const struct FRotator& SnappedPlacementRot, int32_t SnapToIndex, const class FName& SnapToName, struct FVector* OutLocation, struct FRotator* OutRotation, int32_t* bForceInvalidateSnap);
		bool BPOverrideSnappedToTransform(class APrimalStructure* childStructure, int32_t ChildSnapFromIndex, const class FName& ChildSnapFromName, const struct FVector& UnsnappedPlacementPos, const struct FRotator& UnsnappedPlacementRot, const struct FVector& SnappedPlacementPos, const struct FRotator& SnappedPlacementRot, int32_t SnapToIndex, const class FName& SnapToName, struct FVector* OutLocation, struct FRotator* OutRotation, int32_t* bForceInvalidateSnap);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_OceanPlatfom_Wood_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
