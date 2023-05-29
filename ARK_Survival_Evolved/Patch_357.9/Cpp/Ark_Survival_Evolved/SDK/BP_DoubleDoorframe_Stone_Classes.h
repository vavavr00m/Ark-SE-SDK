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
	 * BlueprintGeneratedClass BP_DoubleDoorframe_Stone.BP_DoubleDoorframe_Stone_C
	 * Size -> 0x0010 (FullSize[0x0B10] - InheritedSize[0x0B00])
	 */
	class ABP_DoubleDoorframe_Stone_C : public ABase_DoubleDoorframe_C
	{
	public:
		class UStaticMeshComponent*                                RightPillar;                                             // 0x0B00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                LeftPillar;                                              // 0x0B08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_BP_DoubleDoorframe_Stone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
