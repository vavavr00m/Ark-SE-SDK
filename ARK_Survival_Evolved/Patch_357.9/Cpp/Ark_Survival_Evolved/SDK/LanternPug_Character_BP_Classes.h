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
	 * BlueprintGeneratedClass LanternPug_Character_BP.LanternPug_Character_BP_C
	 * Size -> 0x0008 (FullSize[0x25C0] - InheritedSize[0x25B8])
	 */
	class ALanternPug_Character_BP_C : public ALanternPet_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_LanternPug_C*       DinoCharacterStatus_BP_LanternPug_C1;                    // 0x25B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_LanternPug_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
