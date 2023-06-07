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
	 * Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeFindNewAggroTarget
	 */
	struct UService_FKaijuEvalTargets_C_MaybeFindNewAggroTarget_Params
	{
	public:
		bool                                                       ShouldRunSecondaryAttackLogic;                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.IsTamedAndPassive
	 */
	struct UService_FKaijuEvalTargets_C_IsTamedAndPassive_Params
	{
	public:
		bool                                                       IsPassive;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ClearTargets
	 */
	struct UService_FKaijuEvalTargets_C_ClearTargets_Params
	{	};

	/**
	 * Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeShakePlayersOff
	 */
	struct UService_FKaijuEvalTargets_C_MaybeShakePlayersOff_Params
	{	};

	/**
	 * Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeFlyerAttack
	 */
	struct UService_FKaijuEvalTargets_C_MaybeFlyerAttack_Params
	{	};

	/**
	 * Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeAttackGrab
	 */
	struct UService_FKaijuEvalTargets_C_MaybeAttackGrab_Params
	{	};

	/**
	 * Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.MaybeAttackRoot
	 */
	struct UService_FKaijuEvalTargets_C_MaybeAttackRoot_Params
	{	};

	/**
	 * Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ChooseQuadWithMostEnemies
	 */
	struct UService_FKaijuEvalTargets_C_ChooseQuadWithMostEnemies_Params
	{	};

	/**
	 * Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ClearArrays
	 */
	struct UService_FKaijuEvalTargets_C_ClearArrays_Params
	{	};

	/**
	 * Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.SetQuadrants
	 */
	struct UService_FKaijuEvalTargets_C_SetQuadrants_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.TargetAcquire
	 */
	struct UService_FKaijuEvalTargets_C_TargetAcquire_Params
	{
	public:
		class AActor*                                              Enemy;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ReceiveActivation
	 */
	struct UService_FKaijuEvalTargets_C_ReceiveActivation_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ReceiveTick
	 */
	struct UService_FKaijuEvalTargets_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Service_FKaijuEvalTargets.Service_FKaijuEvalTargets_C.ExecuteUbergraph_Service_FKaijuEvalTargets
	 */
	struct UService_FKaijuEvalTargets_C_ExecuteUbergraph_Service_FKaijuEvalTargets_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
