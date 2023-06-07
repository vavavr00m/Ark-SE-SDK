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
	 * BlueprintGeneratedClass Thatch_Door.Thatch_Door_C
	 * Size -> 0x0008 (FullSize[0x0B78] - InheritedSize[0x0B70])
	 */
	class AThatch_Door_C : public ADoor_Base_SM_C
	{
	public:
		class USphereComponent*                                    StasisComponent_1;                                       // 0x0B70(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Thatch_Door(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
