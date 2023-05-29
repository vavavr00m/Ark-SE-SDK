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
	 * BlueprintGeneratedClass Plesiosaur_Character_BP.Plesiosaur_Character_BP_C
	 * Size -> 0x0010 (FullSize[0x2298] - InheritedSize[0x2288])
	 */
	class APlesiosaur_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UBoxComponent*                                       PlatformSaddleBuildArea;                                 // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDinoCharacterStatusComponent_BP_Plesiosaur_C*       DinoCharacterStatus_BP_Plesiosaur_C1;                    // 0x2290(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Plesiosaur_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
