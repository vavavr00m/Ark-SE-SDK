﻿#pragma once

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
	 * Function FK_BuffingTree.FK_BuffingTree_C.ReceiveDestroyed
	 */
	struct AFK_BuffingTree_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function FK_BuffingTree.FK_BuffingTree_C.GetScale
	 */
	struct AFK_BuffingTree_C_GetScale_Params
	{
	public:
		struct FVector                                             Scale;                                                   // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FK_BuffingTree.FK_BuffingTree_C.BPAdjustDamage
	 */
	struct AFK_BuffingTree_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SBJQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U67W[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FK_BuffingTree.FK_BuffingTree_C.UserConstructionScript
	 */
	struct AFK_BuffingTree_C_UserConstructionScript_Params
	{	};

	/**
	 * Function FK_BuffingTree.FK_BuffingTree_C.ReceiveBeginPlay
	 */
	struct AFK_BuffingTree_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FK_BuffingTree.FK_BuffingTree_C.TickGrowth
	 */
	struct AFK_BuffingTree_C_TickGrowth_Params
	{	};

	/**
	 * Function FK_BuffingTree.FK_BuffingTree_C.Multi_SetScale
	 */
	struct AFK_BuffingTree_C_Multi_SetScale_Params
	{
	public:
		struct FVector                                             Scale;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FK_BuffingTree.FK_BuffingTree_C.ExecuteUbergraph_FK_BuffingTree
	 */
	struct AFK_BuffingTree_C_ExecuteUbergraph_FK_BuffingTree_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif