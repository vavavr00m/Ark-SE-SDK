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
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.clear rider
	 */
	struct ABuff_TekStrider_Machinegun_C_clearrider_Params
	{
	public:
		class AShooterCharacter*                                   prevrider;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Disable Awaiting Player Loc
	 */
	struct ABuff_TekStrider_Machinegun_C_DisableAwaitingPlayerLoc_Params
	{	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BPServerHandleNetExecCommand
	 */
	struct ABuff_TekStrider_Machinegun_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.fire shots
	 */
	struct ABuff_TekStrider_Machinegun_C_fireshots_Params
	{
	public:
		bool                                                       HitSomething;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9BUC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              hittarget;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          hitinfo;                                                 // 0x0010(0x0088)  (Parm)
		struct FVector                                             hitspot;                                                 // 0x0098(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             fromspot;                                                // 0x00A4(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BuffTickServer
	 */
	struct ABuff_TekStrider_Machinegun_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BPGetHUDElements
	 */
	struct ABuff_TekStrider_Machinegun_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.target is within angle
	 */
	struct ABuff_TekStrider_Machinegun_C_targetiswithinangle_Params
	{
	public:
		class APrimalDinoCharacter*                                InputPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NewParam;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NM8W[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Strider Firing Duration
	 */
	struct ABuff_TekStrider_Machinegun_C_StriderFiringDuration_Params
	{	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Wild Shot Cooldown
	 */
	struct ABuff_TekStrider_Machinegun_C_WildShotCooldown_Params
	{	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Wild Dino Deactivate
	 */
	struct ABuff_TekStrider_Machinegun_C_WildDinoDeactivate_Params
	{	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.can fire
	 */
	struct ABuff_TekStrider_Machinegun_C_canfire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VWG6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.spawn shot vfx
	 */
	struct ABuff_TekStrider_Machinegun_C_spawnshotvfx_Params
	{
	public:
		bool                                                       HitSomething;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AJXL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             hitloc;                                                  // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.trace for blocking stuff between here and target
	 */
	struct ABuff_TekStrider_Machinegun_C_traceforblockingstuffbetweenhereandtarget_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          OutHit;                                                  // 0x0018(0x0088)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UMX9[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.TriggerReleased
	 */
	struct ABuff_TekStrider_Machinegun_C_TriggerReleased_Params
	{	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Trigger
	 */
	struct ABuff_TekStrider_Machinegun_C_Trigger_Params
	{	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Get Beam Origin and End
	 */
	struct ABuff_TekStrider_Machinegun_C_GetBeamOriginandEnd_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.GetBeamImpact
	 */
	struct ABuff_TekStrider_Machinegun_C_GetBeamImpact_Params
	{
	public:
		struct FVector                                             BeamStart;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             BeamEnd;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             BeamImpact;                                              // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HitSomething;                                            // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9EO6[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              HitTarget;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          hitinfo;                                                 // 0x0030(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.IsAIControlled?
	 */
	struct ABuff_TekStrider_Machinegun_C_IsAIControlled_Params
	{
	public:
		bool                                                       IsAI;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8828[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Update Beam Impact Location
	 */
	struct ABuff_TekStrider_Machinegun_C_UpdateBeamImpactLocation_Params
	{	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BPSetupForInstigator
	 */
	struct ABuff_TekStrider_Machinegun_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.BuffTickClient
	 */
	struct ABuff_TekStrider_Machinegun_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Visual Beam Origin
	 */
	struct ABuff_TekStrider_Machinegun_C_VisualBeamOrigin_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.UserConstructionScript
	 */
	struct ABuff_TekStrider_Machinegun_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Multicast_ActivateBeam
	 */
	struct ABuff_TekStrider_Machinegun_C_Multicast_ActivateBeam_Params
	{	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Multicast_DeactivateBeam
	 */
	struct ABuff_TekStrider_Machinegun_C_Multicast_DeactivateBeam_Params
	{	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.ValidatePlayerBeamOnServer
	 */
	struct ABuff_TekStrider_Machinegun_C_ValidatePlayerBeamOnServer_Params
	{
	public:
		struct FVector                                             ImpactPoint;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Multicast_UpdateBeamImpactLocation
	 */
	struct ABuff_TekStrider_Machinegun_C_Multicast_UpdateBeamImpactLocation_Params
	{
	public:
		struct FVector                                             BeamImpactLocation;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HitSomething;                                            // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Multicast_UpdateBeamImpactLocation_SecondGun
	 */
	struct ABuff_TekStrider_Machinegun_C_Multicast_UpdateBeamImpactLocation_SecondGun_Params
	{
	public:
		struct FVector                                             BeamImpactLocation;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HitSomething;                                            // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.Request Player Shot Loc
	 */
	struct ABuff_TekStrider_Machinegun_C_RequestPlayerShotLoc_Params
	{	};

	/**
	 * Function Buff_TekStrider_Machinegun.Buff_TekStrider_Machinegun_C.ExecuteUbergraph_Buff_TekStrider_Machinegun
	 */
	struct ABuff_TekStrider_Machinegun_C_ExecuteUbergraph_Buff_TekStrider_Machinegun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
