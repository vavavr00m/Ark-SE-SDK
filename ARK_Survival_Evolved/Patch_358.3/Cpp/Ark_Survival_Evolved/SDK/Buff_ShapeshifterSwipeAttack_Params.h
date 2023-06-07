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
	 * Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.ReceiveBeginPlay
	 */
	struct ABuff_ShapeshifterSwipeAttack_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.AllowPostProcessEffect
	 */
	struct ABuff_ShapeshifterSwipeAttack_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YEUP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.BPDeactivated
	 */
	struct ABuff_ShapeshifterSwipeAttack_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.BPSetupForInstigator
	 */
	struct ABuff_ShapeshifterSwipeAttack_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.BuffTickServer
	 */
	struct ABuff_ShapeshifterSwipeAttack_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.BPActivated
	 */
	struct ABuff_ShapeshifterSwipeAttack_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.UserConstructionScript
	 */
	struct ABuff_ShapeshifterSwipeAttack_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ShapeshifterSwipeAttack.Buff_ShapeshifterSwipeAttack_C.ExecuteUbergraph_Buff_ShapeshifterSwipeAttack
	 */
	struct ABuff_ShapeshifterSwipeAttack_C_ExecuteUbergraph_Buff_ShapeshifterSwipeAttack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
