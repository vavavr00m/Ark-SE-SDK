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
	 * Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ABasilosaurus_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GVUU[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.OverrideRandomWanderLocation
	 */
	struct ABasilosaurus_Character_BP_C_OverrideRandomWanderLocation_Params
	{
	public:
		struct FVector                                             originalDestination;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             inVec;                                                   // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.IsOfFollowTypeClass
	 */
	struct ABasilosaurus_Character_BP_C_IsOfFollowTypeClass_Params
	{
	public:
		class APrimalDinoCharacter*                                DinoToCheck;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ValidClass;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C6RU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.GetValidFollowingTargets
	 */
	struct ABasilosaurus_Character_BP_C_GetValidFollowingTargets_Params
	{
	public:
		TArray<class APrimalDinoCharacter*>                        ValidDinos;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.BPFedWakingTameEvent
	 */
	struct ABasilosaurus_Character_BP_C_BPFedWakingTameEvent_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.ReceiveAnyDamage
	 */
	struct ABasilosaurus_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WRQY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.BPTimerServer
	 */
	struct ABasilosaurus_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.UserConstructionScript
	 */
	struct ABasilosaurus_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.ReceiveBeginPlay
	 */
	struct ABasilosaurus_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.AnimNotify_StopMove
	 */
	struct ABasilosaurus_Character_BP_C_AnimNotify_StopMove_Params
	{	};

	/**
	 * Function Basilosaurus_Character_BP.Basilosaurus_Character_BP_C.ExecuteUbergraph_Basilosaurus_Character_BP
	 */
	struct ABasilosaurus_Character_BP_C_ExecuteUbergraph_Basilosaurus_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
