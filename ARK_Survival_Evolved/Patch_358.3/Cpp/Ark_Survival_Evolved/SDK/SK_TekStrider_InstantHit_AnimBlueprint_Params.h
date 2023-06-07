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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SK_TekStrider_InstantHit_AnimBlueprint.SK_TekStrider_InstantHit_AnimBlueprint_C.BlueprintPlayAnimationEvent
	 */
	struct USK_TekStrider_InstantHit_AnimBlueprint_C_BlueprintPlayAnimationEvent_Params
	{
	public:
		class UAnimMontage*                                        AnimationMontage;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PlayRate;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      playedAnimLength;                                        // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SK_TekStrider_InstantHit_AnimBlueprint.SK_TekStrider_InstantHit_AnimBlueprint_C.BlueprintUpdateAnimation
	 */
	struct USK_TekStrider_InstantHit_AnimBlueprint_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SK_TekStrider_InstantHit_AnimBlueprint.SK_TekStrider_InstantHit_AnimBlueprint_C.ExecuteUbergraph_SK_TekStrider_InstantHit_AnimBlueprint
	 */
	struct USK_TekStrider_InstantHit_AnimBlueprint_C_ExecuteUbergraph_SK_TekStrider_InstantHit_AnimBlueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
