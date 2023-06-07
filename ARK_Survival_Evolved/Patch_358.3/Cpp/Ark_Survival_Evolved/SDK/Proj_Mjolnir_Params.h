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
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.TimedExpandingAudio
	 */
	struct AProj_Mjolnir_C_TimedExpandingAudio_Params
	{	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.MulticastSpawnHitEmitter
	 */
	struct AProj_Mjolnir_C_MulticastSpawnHitEmitter_Params
	{
	public:
		struct UObject_FTransform                                  SpawnTransform;                                          // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
		class APawn*                                               Instigator;                                              // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.HasLosFromPosition
	 */
	struct AProj_Mjolnir_C_HasLosFromPosition_Params
	{
	public:
		struct FVector                                             FromPosition;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S0LH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    ToActor;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasLOS;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X8WC[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.BP_IgnoreProjectileImpact
	 */
	struct AProj_Mjolnir_C_BP_IgnoreProjectileImpact_Params
	{
	public:
		struct FHitResult                                          ImpactHit;                                               // 0x0000(0x0088)  (Parm)
		bool                                                       ReturnValue;                                             // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.CheckForHit
	 */
	struct AProj_Mjolnir_C_CheckForHit_Params
	{
	public:
		struct FHitResult                                          HitInfo;                                                 // 0x0000(0x0088)  (Parm)
	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.GetLosOffsetCheckPosition
	 */
	struct AProj_Mjolnir_C_GetLosOffsetCheckPosition_Params
	{
	public:
		struct FVector                                             CheckPOS;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.SetColors
	 */
	struct AProj_Mjolnir_C_SetColors_Params
	{	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.ClientSetLightningPulse
	 */
	struct AProj_Mjolnir_C_ClientSetLightningPulse_Params
	{
	public:
		bool                                                       IsPulsing;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_96HF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.TickLightningPulse
	 */
	struct AProj_Mjolnir_C_TickLightningPulse_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.DoLightningPulse
	 */
	struct AProj_Mjolnir_C_DoLightningPulse_Params
	{	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.GetSquaredDistance
	 */
	struct AProj_Mjolnir_C_GetSquaredDistance_Params
	{
	public:
		struct FVector                                             A;                                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             B;                                                       // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      SqDistance;                                              // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.PickedUp
	 */
	struct AProj_Mjolnir_C_PickedUp_Params
	{
	public:
		class AShooterCharacter*                                   ByCharacter;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.PickUpCheck
	 */
	struct AProj_Mjolnir_C_PickUpCheck_Params
	{	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.Explode
	 */
	struct AProj_Mjolnir_C_Explode_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.OnImpact
	 */
	struct AProj_Mjolnir_C_OnImpact_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		bool                                                       bFromReplication;                                        // 0x0088(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.ReturnToOwner
	 */
	struct AProj_Mjolnir_C_ReturnToOwner_Params
	{	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.ReceiveBeginPlay
	 */
	struct AProj_Mjolnir_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.Init_Projectile
	 */
	struct AProj_Mjolnir_C_Init_Projectile_Params
	{
	public:
		class AShooterCharacter*                                   forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterWeapon*                                      ForWeapon;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalBuff*                                         ForControllingBuff;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.ReceiveTick
	 */
	struct AProj_Mjolnir_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.UserConstructionScript
	 */
	struct AProj_Mjolnir_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_535_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AProj_Mjolnir_C_BndEvt__CollisionComp_K2Node_ComponentBoundEvent_535_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_098K[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.ExecuteUbergraph_Proj_Mjolnir
	 */
	struct AProj_Mjolnir_C_ExecuteUbergraph_Proj_Mjolnir_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.OnHitForEmitter__DelegateSignature
	 */
	struct AProj_Mjolnir_C_OnHitForEmitter__DelegateSignature_Params
	{
	public:
		struct UObject_FTransform                                  HitTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.OnRequestSyncProjectile__DelegateSignature
	 */
	struct AProj_Mjolnir_C_OnRequestSyncProjectile__DelegateSignature_Params
	{	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.OnShieldReflected__DelegateSignature
	 */
	struct AProj_Mjolnir_C_OnShieldReflected__DelegateSignature_Params
	{	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.OnStartReturnToPlayer__DelegateSignature
	 */
	struct AProj_Mjolnir_C_OnStartReturnToPlayer__DelegateSignature_Params
	{	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.OnPulseEnded__DelegateSignature
	 */
	struct AProj_Mjolnir_C_OnPulseEnded__DelegateSignature_Params
	{	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.OnClientMjolnirSpawned__DelegateSignature
	 */
	struct AProj_Mjolnir_C_OnClientMjolnirSpawned__DelegateSignature_Params
	{
	public:
		class AProj_Mjolnir_C*                                     NewMjolnir;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_Mjolnir.Proj_Mjolnir_C.OnReturnedToPlayer__DelegateSignature
	 */
	struct AProj_Mjolnir_C_OnReturnedToPlayer__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
