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
	 * BlueprintGeneratedClass BP_DoubleDoor_Stone.BP_DoubleDoor_Stone_C
	 * Size -> 0x0010 (FullSize[0x0BB8] - InheritedSize[0x0BA8])
	 */
	class ABP_DoubleDoor_Stone_C : public ABase_DoubleDoor_C
	{
	public:
		class UStaticMeshComponent*                                SecondDoor;                                              // 0x0BA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     SecondDoorTransform;                                     // 0x0BB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_BP_DoubleDoor_Stone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
