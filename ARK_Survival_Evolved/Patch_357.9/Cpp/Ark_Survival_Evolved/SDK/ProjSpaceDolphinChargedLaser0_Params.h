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
	 * Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.GetExtraTriggerExplosionOffsetForTarget
	 */
	struct AProjSpaceDolphinChargedLaser0_C_GetExtraTriggerExplosionOffsetForTarget_Params
	{
	public:
		float                                                      _return_;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9RCW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ReceiveDestroyed
	 */
	struct AProjSpaceDolphinChargedLaser0_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.OnExplode
	 */
	struct AProjSpaceDolphinChargedLaser0_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.BPIgnoreRadialDamageVictim
	 */
	struct AProjSpaceDolphinChargedLaser0_C_BPIgnoreRadialDamageVictim_Params
	{
	public:
		class AActor*                                              Victim;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J3K9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.UserConstructionScript
	 */
	struct AProjSpaceDolphinChargedLaser0_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ReceiveTick
	 */
	struct AProjSpaceDolphinChargedLaser0_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ReceiveBeginPlay
	 */
	struct AProjSpaceDolphinChargedLaser0_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjSpaceDolphinChargedLaser0.ProjSpaceDolphinChargedLaser0_C.ExecuteUbergraph_ProjSpaceDolphinChargedLaser0
	 */
	struct AProjSpaceDolphinChargedLaser0_C_ExecuteUbergraph_ProjSpaceDolphinChargedLaser0_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
