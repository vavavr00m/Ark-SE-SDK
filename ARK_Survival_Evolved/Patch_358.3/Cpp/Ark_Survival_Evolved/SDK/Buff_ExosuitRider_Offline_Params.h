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
	 * Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.BuffTickServer
	 */
	struct ABuff_ExosuitRider_Offline_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HIKP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.BPAdjustStatusValueModification
	 */
	struct ABuff_ExosuitRider_Offline_C_BPAdjustStatusValueModification_Params
	{
	public:
		class UPrimalCharacterStatusComponent*                     ForComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPrimalCharacterStatusValue                                ValueType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0M5W[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InAmount;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              DamageTypeClass;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bManualModification;                                     // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_35WL[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.BPSetupForInstigator
	 */
	struct ABuff_ExosuitRider_Offline_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.PreventActorTargeting
	 */
	struct ABuff_ExosuitRider_Offline_C_PreventActorTargeting_Params
	{
	public:
		class AActor*                                              ByActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KS52[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.BuffAdjustDamage
	 */
	struct ABuff_ExosuitRider_Offline_C_BuffAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D58F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x00A8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.InitBuff
	 */
	struct ABuff_ExosuitRider_Offline_C_InitBuff_Params
	{	};

	/**
	 * Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.BPDeactivated
	 */
	struct ABuff_ExosuitRider_Offline_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.OnOwningSuitDied
	 */
	struct ABuff_ExosuitRider_Offline_C_OnOwningSuitDied_Params
	{
	public:
		class APrimalCharacter*                                    DiedChar;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.BPInstigatorPossessed
	 */
	struct ABuff_ExosuitRider_Offline_C_BPInstigatorPossessed_Params
	{
	public:
		class AController*                                         ByController;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.UserConstructionScript
	 */
	struct ABuff_ExosuitRider_Offline_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.WaitForClient
	 */
	struct ABuff_ExosuitRider_Offline_C_WaitForClient_Params
	{	};

	/**
	 * Function Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C.ExecuteUbergraph_Buff_ExosuitRider_Offline
	 */
	struct ABuff_ExosuitRider_Offline_C_ExecuteUbergraph_Buff_ExosuitRider_Offline_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
