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
	 * BlueprintGeneratedClass Base_DoubleDoor.Base_DoubleDoor_C
	 * Size -> 0x0018 (FullSize[0x0BA8] - InheritedSize[0x0B90])
	 */
	class ABase_DoubleDoor_C : public ABase_Door_C
	{
	public:
		class UBoxComponent*                                       OutsideBox;                                              // 0x0B90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBoxComponent*                                       InsideBox;                                               // 0x0B98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBoxComponent*                                       PlayerCheckBox;                                          // 0x0BA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Base_DoubleDoor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
