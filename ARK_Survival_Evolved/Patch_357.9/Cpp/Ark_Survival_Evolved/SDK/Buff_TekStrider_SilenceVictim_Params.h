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
	 * Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.HideBuffFromHUD
	 */
	struct ABuff_TekStrider_SilenceVictim_C_HideBuffFromHUD_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPDrawBuffStatusHUD
	 */
	struct ABuff_TekStrider_SilenceVictim_C_BPDrawBuffStatusHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      XPos;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      YPos;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ScaleMult;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BIWR[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.Delay Update Vfx
	 */
	struct ABuff_TekStrider_SilenceVictim_C_DelayUpdateVfx_Params
	{	};

	/**
	 * Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BuffTickClient
	 */
	struct ABuff_TekStrider_SilenceVictim_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPClientHandleNetExecCommand
	 */
	struct ABuff_TekStrider_SilenceVictim_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPPreventflight
	 */
	struct ABuff_TekStrider_SilenceVictim_C_BPPreventflight_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPActivated
	 */
	struct ABuff_TekStrider_SilenceVictim_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.Update whether deactivate VFX should be seen by rider
	 */
	struct ABuff_TekStrider_SilenceVictim_C_UpdatewhetherdeactivateVFXshouldbeseenbyrider_Params
	{	};

	/**
	 * Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BuffTickServer
	 */
	struct ABuff_TekStrider_SilenceVictim_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.BPPreventInstigatorAttack
	 */
	struct ABuff_TekStrider_SilenceVictim_C_BPPreventInstigatorAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.UserConstructionScript
	 */
	struct ABuff_TekStrider_SilenceVictim_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.ReceiveBeginPlay
	 */
	struct ABuff_TekStrider_SilenceVictim_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.OnSilenceEnded
	 */
	struct ABuff_TekStrider_SilenceVictim_C_OnSilenceEnded_Params
	{	};

	/**
	 * Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.toggle invalid particle
	 */
	struct ABuff_TekStrider_SilenceVictim_C_toggleinvalidparticle_Params
	{	};

	/**
	 * Function Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C.ExecuteUbergraph_Buff_TekStrider_SilenceVictim
	 */
	struct ABuff_TekStrider_SilenceVictim_C_ExecuteUbergraph_Buff_TekStrider_SilenceVictim_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
