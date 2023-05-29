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
	 * BlueprintGeneratedClass LanternGoat_Character_BP.LanternGoat_Character_BP_C
	 * Size -> 0x0008 (FullSize[0x25C0] - InheritedSize[0x25B8])
	 */
	class ALanternGoat_Character_BP_C : public ALanternPet_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_LanternGoat_C*      DinoCharacterStatus_BP_LanternGoat_C1;                   // 0x25B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void UserConstructionScript();
		void ExecuteUbergraph_LanternGoat_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
