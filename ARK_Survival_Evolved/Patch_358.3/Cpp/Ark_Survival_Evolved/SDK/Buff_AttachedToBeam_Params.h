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
	 * Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.BuffTickServer
	 */
	struct ABuff_AttachedToBeam_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DVGU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.UpdatePreventInstigatorAttack
	 */
	struct ABuff_AttachedToBeam_C_UpdatePreventInstigatorAttack_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.BPSetupForInstigator
	 */
	struct ABuff_AttachedToBeam_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.DoStruggle
	 */
	struct ABuff_AttachedToBeam_C_DoStruggle_Params
	{	};

	/**
	 * Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.BPCheckPreventInput
	 */
	struct ABuff_AttachedToBeam_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.UserConstructionScript
	 */
	struct ABuff_AttachedToBeam_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.Server_Struggle
	 */
	struct ABuff_AttachedToBeam_C_Server_Struggle_Params
	{	};

	/**
	 * Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.ExecuteUbergraph_Buff_AttachedToBeam
	 */
	struct ABuff_AttachedToBeam_C_ExecuteUbergraph_Buff_AttachedToBeam_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
