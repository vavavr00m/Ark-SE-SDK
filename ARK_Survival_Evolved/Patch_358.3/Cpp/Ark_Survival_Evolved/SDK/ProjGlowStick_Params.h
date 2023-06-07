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
	 * Function ProjGlowStick.ProjGlowStick_C.GetGlowstickOwner
	 */
	struct AProjGlowStick_C_GetGlowstickOwner_Params
	{
	public:
		class AActor*                                              glowstickOwner;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.ReceiveHit
	 */
	struct AProjGlowStick_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IFBL[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.GetDefaultGlowStickRef
	 */
	struct AProjGlowStick_C_GetDefaultGlowStickRef_Params
	{
	public:
		class AWeapGlowStick_C*                                    Ref;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.HideAttachedComponents
	 */
	struct AProjGlowStick_C_HideAttachedComponents_Params
	{	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.Set Collision Response
	 */
	struct AProjGlowStick_C_SetCollisionResponse_Params
	{	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.IsAttachedToCharacter
	 */
	struct AProjGlowStick_C_IsAttachedToCharacter_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1D0Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.Get Average Normal Within Radius
	 */
	struct AProjGlowStick_C_GetAverageNormalWithinRadius_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Result;                                                  // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.Reset Scale
	 */
	struct AProjGlowStick_C_ResetScale_Params
	{	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.Create Dynamic Material
	 */
	struct AProjGlowStick_C_CreateDynamicMaterial_Params
	{	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.Update Emissiveness
	 */
	struct AProjGlowStick_C_UpdateEmissiveness_Params
	{	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.Check For Fade Out
	 */
	struct AProjGlowStick_C_CheckForFadeOut_Params
	{	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.Set Collision
	 */
	struct AProjGlowStick_C_SetCollision_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.InitGlowStickProjectile
	 */
	struct AProjGlowStick_C_InitGlowStickProjectile_Params
	{	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.Hide Weapon
	 */
	struct AProjGlowStick_C_HideWeapon_Params
	{	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.BPAttachedRootComponent
	 */
	struct AProjGlowStick_C_BPAttachedRootComponent_Params
	{	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.ReceiveBeginPlay
	 */
	struct AProjGlowStick_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.OnExplode
	 */
	struct AProjGlowStick_C_OnExplode_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.ReceiveTick
	 */
	struct AProjGlowStick_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.Fade Out Light
	 */
	struct AProjGlowStick_C_FadeOutLight_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDestroy;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.UserConstructionScript
	 */
	struct AProjGlowStick_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.ReceiveAnyDamage
	 */
	struct AProjGlowStick_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VHK4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjGlowStick.ProjGlowStick_C.ExecuteUbergraph_ProjGlowStick
	 */
	struct AProjGlowStick_C_ExecuteUbergraph_ProjGlowStick_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
