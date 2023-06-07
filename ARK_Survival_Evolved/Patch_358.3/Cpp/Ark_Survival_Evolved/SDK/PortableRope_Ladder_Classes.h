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
	 * BlueprintGeneratedClass PortableRope_Ladder.PortableRope_Ladder_C
	 * Size -> 0x0060 (FullSize[0x0C48] - InheritedSize[0x0BE8])
	 */
	class APortableRope_Ladder_C : public APrimalStructurePortableLadder
	{
	public:
		class UBoxComponent*                                       BoxCollision;                                            // 0x0BE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    StasisComponent;                                         // 0x0BF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             RetractedCollisionLadderCenter;                          // 0x0BF8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             RetractedCollisionLadderScale;                           // 0x0C04(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             ExtendedCollisionLadderCenter;                           // 0x0C10(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             ExtendedCollisionLadderScale;                            // 0x0C1C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             TracePosOffset;                                          // 0x0C28(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LUYJ[0x4];                                   // 0x0C34(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x0C38(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		bool AllowManualMultiUseActivation(class APlayerController* ForPC);
		void BPAttachedRootComponent();
		void BuildLadder();
		void UpdateBoxCollitionForRetraction();
		void UserConstructionScript();
		void ExecuteUbergraph_PortableRope_Ladder(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
