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
	 * Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPGetDebugInfoString
	 */
	struct ABuff_TekCruiseMissileVision_C_BPGetDebugInfoString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPOverrideTalkerCharacter
	 */
	struct ABuff_TekCruiseMissileVision_C_BPOverrideTalkerCharacter_Params
	{
	public:
		class APrimalCharacter*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.ReceiveBeginPlay
	 */
	struct ABuff_TekCruiseMissileVision_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.IsLocalScout
	 */
	struct ABuff_TekCruiseMissileVision_C_IsLocalScout_Params
	{
	public:
		bool                                                       Retval;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPIsValidUnStasisCaster
	 */
	struct ABuff_TekCruiseMissileVision_C_BPIsValidUnStasisCaster_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPOverrideIsNetRelevantFor
	 */
	struct ABuff_TekCruiseMissileVision_C_BPOverrideIsNetRelevantFor_Params
	{
	public:
		class APlayerController*                                   RealViewer;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Viewer;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             SrcLocation;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.Missile Possession Change Pending
	 */
	struct ABuff_TekCruiseMissileVision_C_MissilePossessionChangePending_Params
	{
	public:
		class ATekCruiseMissile_Character_BP_C*                    missile;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BuffTickClient
	 */
	struct ABuff_TekCruiseMissileVision_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPDrawBuffStatusHUD
	 */
	struct ABuff_TekCruiseMissileVision_C_BPDrawBuffStatusHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      XPos;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      YPos;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ScaleMult;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.AllowPostProcessEffect
	 */
	struct ABuff_TekCruiseMissileVision_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.UserConstructionScript
	 */
	struct ABuff_TekCruiseMissileVision_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.ReceiveTick
	 */
	struct ABuff_TekCruiseMissileVision_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.tick vision
	 */
	struct ABuff_TekCruiseMissileVision_C_tickvision_Params
	{	};

	/**
	 * Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.ExecuteUbergraph_Buff_TekCruiseMissileVision
	 */
	struct ABuff_TekCruiseMissileVision_C_ExecuteUbergraph_Buff_TekCruiseMissileVision_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
