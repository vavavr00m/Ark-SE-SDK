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
	 * Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.BPCustomAllowAddBuff
	 */
	struct ABuff_BogSpiderBioGrappleEscape_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.BPGetHUDElements
	 */
	struct ABuff_BogSpiderBioGrappleEscape_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.UserConstructionScript
	 */
	struct ABuff_BogSpiderBioGrappleEscape_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.ExecuteUbergraph_Buff_BogSpiderBioGrappleEscape
	 */
	struct ABuff_BogSpiderBioGrappleEscape_C_ExecuteUbergraph_Buff_BogSpiderBioGrappleEscape_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
