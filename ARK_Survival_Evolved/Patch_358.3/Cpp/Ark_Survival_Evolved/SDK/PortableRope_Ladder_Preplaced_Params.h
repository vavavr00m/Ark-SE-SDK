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
	 * Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.BPGetMultiUseEntries
	 */
	struct APortableRope_Ladder_Preplaced_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.BPPlacedStructure
	 */
	struct APortableRope_Ladder_Preplaced_C_BPPlacedStructure_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.UserConstructionScript
	 */
	struct APortableRope_Ladder_Preplaced_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PortableRope_Ladder_Preplaced.PortableRope_Ladder_Preplaced_C.ExecuteUbergraph_PortableRope_Ladder_Preplaced
	 */
	struct APortableRope_Ladder_Preplaced_C_ExecuteUbergraph_PortableRope_Ladder_Preplaced_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
