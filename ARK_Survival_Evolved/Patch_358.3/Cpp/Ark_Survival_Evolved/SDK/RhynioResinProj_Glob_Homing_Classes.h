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
	 * BlueprintGeneratedClass RhynioResinProj_Glob_Homing.RhynioResinProj_Glob_Homing_C
	 * Size -> 0x0050 (FullSize[0x0880] - InheritedSize[0x0830])
	 */
	class ARhynioResinProj_Glob_Homing_C : public ARhynioResinProj_Glob_C
	{
	public:
		class AActor*                                              HomingActor;                                             // 0x0830(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                HomingTowardsBone;                                       // 0x0838(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USceneComponent*                                     HomingTargetCompOverride;                                // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V05A[0x8];                                   // 0x0848(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct UObject_FTransform                                  CallFunc_AddComponent_RelativeTransform_AddComponentDefaultTransform; // 0x0850(0x0030) Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void ReceiveDestroyed();
		void ReceiveBeginPlay();
		void UserConstructionScript();
		void ExecuteUbergraph_RhynioResinProj_Glob_Homing(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
