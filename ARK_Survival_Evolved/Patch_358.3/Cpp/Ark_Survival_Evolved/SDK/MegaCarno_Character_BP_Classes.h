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
	 * BlueprintGeneratedClass MegaCarno_Character_BP.MegaCarno_Character_BP_C
	 * Size -> 0x0008 (FullSize[0x2298] - InheritedSize[0x2290])
	 */
	class AMegaCarno_Character_BP_C : public ACarno_Character_BP_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_MegaCarno_C*        DinoCharacterStatus_BP_MegaCarno_C1;                     // 0x2290(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_MegaCarno_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
