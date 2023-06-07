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
	 * BlueprintGeneratedClass MegaWyvern_Character_BP_Fire.MegaWyvern_Character_BP_Fire_C
	 * Size -> 0x0008 (FullSize[0x23C8] - InheritedSize[0x23C0])
	 */
	class AMegaWyvern_Character_BP_Fire_C : public AWyvern_Character_BP_Fire_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_MegaWyvern_C*       DinoCharacterStatus_BP_MegaWyvern_C1;                    // 0x23C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_MegaWyvern_Character_BP_Fire(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
