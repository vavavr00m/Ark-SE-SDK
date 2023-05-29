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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ProjGlowStick_Self.ProjGlowStick_Self_C.GetGlowstickOwner
	 */
	struct AProjGlowStick_Self_C_GetGlowstickOwner_Params
	{
	public:
		class AActor*                                              glowstickOwner;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjGlowStick_Self.ProjGlowStick_Self_C.UserConstructionScript
	 */
	struct AProjGlowStick_Self_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjGlowStick_Self.ProjGlowStick_Self_C.ReceiveBeginPlay
	 */
	struct AProjGlowStick_Self_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjGlowStick_Self.ProjGlowStick_Self_C.ExecuteUbergraph_ProjGlowStick_Self
	 */
	struct AProjGlowStick_Self_C_ExecuteUbergraph_ProjGlowStick_Self_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
