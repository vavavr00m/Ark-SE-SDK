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
	 * Function FK_PoisonTree.FK_PoisonTree_C.ReceiveDestroyed
	 */
	struct AFK_PoisonTree_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function FK_PoisonTree.FK_PoisonTree_C.GetScale
	 */
	struct AFK_PoisonTree_C_GetScale_Params
	{
	public:
		struct FVector                                             Scale;                                                   // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FK_PoisonTree.FK_PoisonTree_C.BPAdjustDamage
	 */
	struct AFK_PoisonTree_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UCAT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YKXL[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HYW6[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FK_PoisonTree.FK_PoisonTree_C.UserConstructionScript
	 */
	struct AFK_PoisonTree_C_UserConstructionScript_Params
	{	};

	/**
	 * Function FK_PoisonTree.FK_PoisonTree_C.ReceiveBeginPlay
	 */
	struct AFK_PoisonTree_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FK_PoisonTree.FK_PoisonTree_C.TickGrowth
	 */
	struct AFK_PoisonTree_C_TickGrowth_Params
	{	};

	/**
	 * Function FK_PoisonTree.FK_PoisonTree_C.BndEvt__HitCapsule_K2Node_ComponentBoundEvent_354_ComponentHitSignature__DelegateSignature
	 */
	struct AFK_PoisonTree_C_BndEvt__HitCapsule_K2Node_ComponentBoundEvent_354_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_44UU[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0020(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function FK_PoisonTree.FK_PoisonTree_C.DestroyTree
	 */
	struct AFK_PoisonTree_C_DestroyTree_Params
	{	};

	/**
	 * Function FK_PoisonTree.FK_PoisonTree_C.ExecuteUbergraph_FK_PoisonTree
	 */
	struct AFK_PoisonTree_C_ExecuteUbergraph_FK_PoisonTree_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
