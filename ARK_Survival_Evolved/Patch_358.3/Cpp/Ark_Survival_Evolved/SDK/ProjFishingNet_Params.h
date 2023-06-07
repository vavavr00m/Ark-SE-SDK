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
	 * Function ProjFishingNet.ProjFishingNet_C.Trace For Fish and Add Them
	 */
	struct AProjFishingNet_C_TraceForFishandAddThem_Params
	{	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.Check For Fish Incrementally
	 */
	struct AProjFishingNet_C_CheckForFishIncrementally_Params
	{	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.BPProjectileBounced
	 */
	struct AProjFishingNet_C_BPProjectileBounced_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.ReceiveActorEndOverlap
	 */
	struct AProjFishingNet_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.ReceiveBeginPlay
	 */
	struct AProjFishingNet_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.ReceiveHit
	 */
	struct AProjFishingNet_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VKMC[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.ReceiveTick
	 */
	struct AProjFishingNet_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.ReceiveActorBeginOverlap
	 */
	struct AProjFishingNet_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.UserConstructionScript
	 */
	struct AProjFishingNet_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.Timeline_0__FinishedFunc
	 */
	struct AProjFishingNet_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.Timeline_0__UpdateFunc
	 */
	struct AProjFishingNet_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.Timeline_1__FinishedFunc
	 */
	struct AProjFishingNet_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.Timeline_1__UpdateFunc
	 */
	struct AProjFishingNet_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.Timeline_2__FinishedFunc
	 */
	struct AProjFishingNet_C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.Timeline_2__UpdateFunc
	 */
	struct AProjFishingNet_C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.Rotate to 0
	 */
	struct AProjFishingNet_C_Rotateto0_Params
	{	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.destroy on clients
	 */
	struct AProjFishingNet_C_destroyonclients_Params
	{	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.BndEvt__StaticMesh2_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AProjFishingNet_C_BndEvt__StaticMesh2_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K8JV[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.scale net on toss
	 */
	struct AProjFishingNet_C_scalenetontoss_Params
	{	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.BndEvt__StaticMesh3_K2Node_ComponentBoundEvent_458_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AProjFishingNet_C_BndEvt__StaticMesh3_K2Node_ComponentBoundEvent_458_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3EOF[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.try catch fish
	 */
	struct AProjFishingNet_C_trycatchfish_Params
	{
	public:
		class AActor*                                              fish;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.Stop Projectile on Clients
	 */
	struct AProjFishingNet_C_StopProjectileonClients_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x0088)  (Parm)
	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.try add fish to net
	 */
	struct AProjFishingNet_C_tryaddfishtonet_Params
	{
	public:
		class AActor*                                              fish;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.Launch a little faster initially
	 */
	struct AProjFishingNet_C_Launchalittlefasterinitially_Params
	{	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.initial fish trace
	 */
	struct AProjFishingNet_C_initialfishtrace_Params
	{	};

	/**
	 * Function ProjFishingNet.ProjFishingNet_C.ExecuteUbergraph_ProjFishingNet
	 */
	struct AProjFishingNet_C_ExecuteUbergraph_ProjFishingNet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
