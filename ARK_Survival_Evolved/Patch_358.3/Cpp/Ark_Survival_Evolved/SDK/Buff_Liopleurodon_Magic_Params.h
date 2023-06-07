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
	 * Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.BPResetBuffStart
	 */
	struct ABuff_Liopleurodon_Magic_C_BPResetBuffStart_Params
	{	};

	/**
	 * Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.BuffTickClient
	 */
	struct ABuff_Liopleurodon_Magic_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.BPDrawBuffStatusHUD
	 */
	struct ABuff_Liopleurodon_Magic_C_BPDrawBuffStatusHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      XPos;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      YPos;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ScaleMult;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.UserConstructionScript
	 */
	struct ABuff_Liopleurodon_Magic_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.SpawnCrateBuffedParticle
	 */
	struct ABuff_Liopleurodon_Magic_C_SpawnCrateBuffedParticle_Params
	{
	public:
		class APrimalStructureItemContainer_SupplyCrate*           TargetCrate;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.HideTimer
	 */
	struct ABuff_Liopleurodon_Magic_C_HideTimer_Params
	{
	public:
		bool                                                       ShouldHide;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.RevealBuffTimerAfterDelay
	 */
	struct ABuff_Liopleurodon_Magic_C_RevealBuffTimerAfterDelay_Params
	{	};

	/**
	 * Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.ReceiveBeginPlay
	 */
	struct ABuff_Liopleurodon_Magic_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C.ExecuteUbergraph_Buff_Liopleurodon_Magic
	 */
	struct ABuff_Liopleurodon_Magic_C_ExecuteUbergraph_Buff_Liopleurodon_Magic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
