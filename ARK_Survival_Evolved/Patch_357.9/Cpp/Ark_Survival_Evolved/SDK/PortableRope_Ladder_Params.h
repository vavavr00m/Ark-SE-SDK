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
	 * Function PortableRope_Ladder.PortableRope_Ladder_C.AllowManualMultiUseActivation
	 */
	struct APortableRope_Ladder_C_AllowManualMultiUseActivation_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PortableRope_Ladder.PortableRope_Ladder_C.BPAttachedRootComponent
	 */
	struct APortableRope_Ladder_C_BPAttachedRootComponent_Params
	{	};

	/**
	 * Function PortableRope_Ladder.PortableRope_Ladder_C.BuildLadder
	 */
	struct APortableRope_Ladder_C_BuildLadder_Params
	{	};

	/**
	 * Function PortableRope_Ladder.PortableRope_Ladder_C.UpdateBoxCollitionForRetraction
	 */
	struct APortableRope_Ladder_C_UpdateBoxCollitionForRetraction_Params
	{	};

	/**
	 * Function PortableRope_Ladder.PortableRope_Ladder_C.UserConstructionScript
	 */
	struct APortableRope_Ladder_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PortableRope_Ladder.PortableRope_Ladder_C.ExecuteUbergraph_PortableRope_Ladder
	 */
	struct APortableRope_Ladder_C_ExecuteUbergraph_PortableRope_Ladder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
