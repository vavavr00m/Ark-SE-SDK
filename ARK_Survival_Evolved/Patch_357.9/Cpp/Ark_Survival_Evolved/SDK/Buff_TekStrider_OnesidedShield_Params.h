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
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.get activation charge cost
	 */
	struct ABuff_TekStrider_OnesidedShield_C_getactivationchargecost_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N5M4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.
	 */
	struct ABuff_TekStrider_OnesidedShield_C__Params
	{
	public:
		float                                                      _1;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      _2;                                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Output;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.inverse map range
	 */
	struct ABuff_TekStrider_OnesidedShield_C_inversemaprange_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      InRangeA;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      InRangeB;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MappedrangeAinverse;                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MappedrangeBinverse;                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Output;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Restrict Doubletap Activate
	 */
	struct ABuff_TekStrider_OnesidedShield_C_RestrictDoubletapActivate_Params
	{	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Toggle Active On Ai
	 */
	struct ABuff_TekStrider_OnesidedShield_C_ToggleActiveOnAi_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M85J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.is ai controlled
	 */
	struct ABuff_TekStrider_OnesidedShield_C_isaicontrolled_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MUQW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BuffTickServer
	 */
	struct ABuff_TekStrider_OnesidedShield_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UM0Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.can activate
	 */
	struct ABuff_TekStrider_OnesidedShield_C_canactivate_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZXEV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.adjust shield loc to aiming direction
	 */
	struct ABuff_TekStrider_OnesidedShield_C_adjustshieldloctoaimingdirection_Params
	{	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Is Deactivating
	 */
	struct ABuff_TekStrider_OnesidedShield_C_IsDeactivating_Params
	{	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Restrict Doubletap Deactivate
	 */
	struct ABuff_TekStrider_OnesidedShield_C_RestrictDoubletapDeactivate_Params
	{	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.TriggerDoubletapped
	 */
	struct ABuff_TekStrider_OnesidedShield_C_TriggerDoubletapped_Params
	{	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.ReceivePointDamage
	 */
	struct ABuff_TekStrider_OnesidedShield_C_ReceivePointDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6WBD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                BoneName;                                                // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ShotFromDirection;                                       // 0x0038(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0KHP[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         InstigatedBy;                                            // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Get Dynamic Material
	 */
	struct ABuff_TekStrider_OnesidedShield_C_GetDynamicMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            Material;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.TriggerReleased
	 */
	struct ABuff_TekStrider_OnesidedShield_C_TriggerReleased_Params
	{	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.get local yaw and roll
	 */
	struct ABuff_TekStrider_OnesidedShield_C_getlocalyawandroll_Params
	{
	public:
		float                                                      Yaw;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Roll;                                                    // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.adjust shield location
	 */
	struct ABuff_TekStrider_OnesidedShield_C_adjustshieldlocation_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Yaw;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Roll;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPGetHUDElements
	 */
	struct ABuff_TekStrider_OnesidedShield_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.timeout cancel shield
	 */
	struct ABuff_TekStrider_OnesidedShield_C_timeoutcancelshield_Params
	{	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Get Held Direction
	 */
	struct ABuff_TekStrider_OnesidedShield_C_GetHeldDirection_Params
	{
	public:
		struct FVector                                             HeldDirection;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPServerHandleNetExecCommand
	 */
	struct ABuff_TekStrider_OnesidedShield_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPClientHandleNetExecCommand
	 */
	struct ABuff_TekStrider_OnesidedShield_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X6T0[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.deactivate shield
	 */
	struct ABuff_TekStrider_OnesidedShield_C_deactivateshield_Params
	{	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Trigger
	 */
	struct ABuff_TekStrider_OnesidedShield_C_Trigger_Params
	{	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.ReceiveAnyDamage
	 */
	struct ABuff_TekStrider_OnesidedShield_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_38N7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPDeactivated
	 */
	struct ABuff_TekStrider_OnesidedShield_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.BPSetupForInstigator
	 */
	struct ABuff_TekStrider_OnesidedShield_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.UserConstructionScript
	 */
	struct ABuff_TekStrider_OnesidedShield_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_0__FinishedFunc
	 */
	struct ABuff_TekStrider_OnesidedShield_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_0__UpdateFunc
	 */
	struct ABuff_TekStrider_OnesidedShield_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_1__FinishedFunc
	 */
	struct ABuff_TekStrider_OnesidedShield_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_1__UpdateFunc
	 */
	struct ABuff_TekStrider_OnesidedShield_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_2__FinishedFunc
	 */
	struct ABuff_TekStrider_OnesidedShield_C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Timeline_2__UpdateFunc
	 */
	struct ABuff_TekStrider_OnesidedShield_C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Multicast_ActivateShield
	 */
	struct ABuff_TekStrider_OnesidedShield_C_Multicast_ActivateShield_Params
	{
	public:
		float                                                      shielddurability;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Multicast_DeactivateShield
	 */
	struct ABuff_TekStrider_OnesidedShield_C_Multicast_DeactivateShield_Params
	{	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.SetShieldRotation
	 */
	struct ABuff_TekStrider_OnesidedShield_C_SetShieldRotation_Params
	{
	public:
		float                                                      Yaw;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Roll;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Activate Shield VFX
	 */
	struct ABuff_TekStrider_OnesidedShield_C_ActivateShieldVFX_Params
	{	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.deactivate shield vfx
	 */
	struct ABuff_TekStrider_OnesidedShield_C_deactivateshieldvfx_Params
	{	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.adjust shield color
	 */
	struct ABuff_TekStrider_OnesidedShield_C_adjustshieldcolor_Params
	{
	public:
		float                                                      durability;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.Spawn Particle At Hit Point
	 */
	struct ABuff_TekStrider_OnesidedShield_C_SpawnParticleAtHitPoint_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Hit;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_OnesidedShield.Buff_TekStrider_OnesidedShield_C.ExecuteUbergraph_Buff_TekStrider_OnesidedShield
	 */
	struct ABuff_TekStrider_OnesidedShield_C_ExecuteUbergraph_Buff_TekStrider_OnesidedShield_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
