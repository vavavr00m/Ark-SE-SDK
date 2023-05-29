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
	 * BlueprintGeneratedClass Emitter_MissionPrepArea.Emitter_MissionPrepArea_C
	 * Size -> 0x0020 (FullSize[0x0538] - InheritedSize[0x0518])
	 */
	class AEmitter_MissionPrepArea_C : public APrimalEmitterSpawnable
	{
	public:
		class UStaticMeshComponent*                                StaticMesh2;                                             // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          ActivateSFX;                                             // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          DeactivateSFX;                                           // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveBeginPlay();
		void UserConstructionScript();
		void ExecuteUbergraph_Emitter_MissionPrepArea(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
