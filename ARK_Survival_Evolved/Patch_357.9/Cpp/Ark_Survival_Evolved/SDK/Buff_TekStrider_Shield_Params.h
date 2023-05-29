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
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Restrict Doubletap Deactivate
	 */
	struct ABuff_TekStrider_Shield_C_RestrictDoubletapDeactivate_Params
	{	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Restrict Doubletap Activate
	 */
	struct ABuff_TekStrider_Shield_C_RestrictDoubletapActivate_Params
	{	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.is ai controlled
	 */
	struct ABuff_TekStrider_Shield_C_isaicontrolled_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XADO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Toggle Active On Ai
	 */
	struct ABuff_TekStrider_Shield_C_ToggleActiveOnAi_Params
	{
	public:
		bool                                                       Activate;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_05CO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BuffTickServer
	 */
	struct ABuff_TekStrider_Shield_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BPGetHUDElements
	 */
	struct ABuff_TekStrider_Shield_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.can activate
	 */
	struct ABuff_TekStrider_Shield_C_canactivate_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Get Dynamic Mat
	 */
	struct ABuff_TekStrider_Shield_C_GetDynamicMat_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ReceivePointDamage
	 */
	struct ABuff_TekStrider_Shield_C_ReceivePointDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MR9T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                BoneName;                                                // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ShotFromDirection;                                       // 0x0038(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_11HJ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         InstigatedBy;                                            // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.deactivate shield
	 */
	struct ABuff_TekStrider_Shield_C_deactivateshield_Params
	{	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Trigger
	 */
	struct ABuff_TekStrider_Shield_C_Trigger_Params
	{	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ReceiveAnyDamage
	 */
	struct ABuff_TekStrider_Shield_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WM1D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BPDeactivated
	 */
	struct ABuff_TekStrider_Shield_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.UpdateShieldedCharacters
	 */
	struct ABuff_TekStrider_Shield_C_UpdateShieldedCharacters_Params
	{	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.BPSetupForInstigator
	 */
	struct ABuff_TekStrider_Shield_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.UserConstructionScript
	 */
	struct ABuff_TekStrider_Shield_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.forward activate shield vfx__FinishedFunc
	 */
	struct ABuff_TekStrider_Shield_C_forwardactivateshieldvfx__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.forward activate shield vfx__UpdateFunc
	 */
	struct ABuff_TekStrider_Shield_C_forwardactivateshieldvfx__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.reverse activate shield vfx__FinishedFunc
	 */
	struct ABuff_TekStrider_Shield_C_reverseactivateshieldvfx__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.reverse activate shield vfx__UpdateFunc
	 */
	struct ABuff_TekStrider_Shield_C_reverseactivateshieldvfx__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Multicast_ActivateShield
	 */
	struct ABuff_TekStrider_Shield_C_Multicast_ActivateShield_Params
	{
	public:
		float                                                      durability;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Multicast_DeactivateShield
	 */
	struct ABuff_TekStrider_Shield_C_Multicast_DeactivateShield_Params
	{
	public:
		bool                                                       ForceDeactivate;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Activate Shield VFX
	 */
	struct ABuff_TekStrider_Shield_C_ActivateShieldVFX_Params
	{	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.deactivate shield vfx
	 */
	struct ABuff_TekStrider_Shield_C_deactivateshieldvfx_Params
	{	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.Spawn Particle At Hit Point
	 */
	struct ABuff_TekStrider_Shield_C_SpawnParticleAtHitPoint_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             hitnormal;                                               // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.adjust shield color
	 */
	struct ABuff_TekStrider_Shield_C_adjustshieldcolor_Params
	{
	public:
		float                                                      durability;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ReceiveBeginPlay
	 */
	struct ABuff_TekStrider_Shield_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_TekStrider_Shield.Buff_TekStrider_Shield_C.ExecuteUbergraph_Buff_TekStrider_Shield
	 */
	struct ABuff_TekStrider_Shield_C_ExecuteUbergraph_Buff_TekStrider_Shield_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
