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
	 * BlueprintGeneratedClass FlyingAnt_Character_BP.FlyingAnt_Character_BP_C
	 * Size -> 0x0010 (FullSize[0x2298] - InheritedSize[0x2288])
	 */
	class AFlyingAnt_Character_BP_C : public AAnt_Character_Base_C
	{
	public:
		class UAudioComponent*                                     LivingAudio;                                             // 0x2288(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDinoCharacterStatusComponent_BP_FlyingAnt_C*        DinoCharacterStatus_BP_FlyingAnt_C1;                     // 0x2290(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_FlyingAnt_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
