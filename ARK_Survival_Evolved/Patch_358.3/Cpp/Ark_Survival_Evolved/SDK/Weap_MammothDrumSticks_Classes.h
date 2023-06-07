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
	 * BlueprintGeneratedClass Weap_MammothDrumSticks.Weap_MammothDrumSticks_C
	 * Size -> 0x0010 (FullSize[0x0D98] - InheritedSize[0x0D88])
	 */
	class AWeap_MammothDrumSticks_C : public AWeapFists_C
	{
	public:
		class UStaticMeshComponent*                                RightStick_TPV;                                          // 0x0D88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                LeftStick_TPV;                                           // 0x0D90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveDestroyed();
		void ClearDrumSticks();
		void BPStartEquippedNotify();
		void StartUnequipEvent();
		void UserConstructionScript();
		void ExecuteUbergraph_Weap_MammothDrumSticks(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
