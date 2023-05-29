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
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.BuffAdjustDamage
	 */
	struct ABuff_TamedLeaderOfWildPack_C_BuffAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IQEA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x00A8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T2W5[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.BPServerHandleNetExecCommand
	 */
	struct ABuff_TamedLeaderOfWildPack_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.IsFollower
	 */
	struct ABuff_TamedLeaderOfWildPack_C_IsFollower_Params
	{
	public:
		class APrimalDinoCharacter*                                DinoCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       characterIsFollower;                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L4MF[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OrderFollowersAttack Target
	 */
	struct ABuff_TamedLeaderOfWildPack_C_OrderFollowersAttackTarget_Params
	{
	public:
		class AActor*                                              characterToAttack;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canOverrideTarget;                                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       showArrowEffect;                                         // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BG1T[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.ReceiveDestroyed
	 */
	struct ABuff_TamedLeaderOfWildPack_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OnBuffDeactivated
	 */
	struct ABuff_TamedLeaderOfWildPack_C_OnBuffDeactivated_Params
	{	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.BPDeactivated
	 */
	struct ABuff_TamedLeaderOfWildPack_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OnAddedFollower
	 */
	struct ABuff_TamedLeaderOfWildPack_C_OnAddedFollower_Params
	{
	public:
		class APrimalDinoCharacter*                                newFollower;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.InitializeBuff
	 */
	struct ABuff_TamedLeaderOfWildPack_C_InitializeBuff_Params
	{
	public:
		TArray<class UClass*>                                      classesCanFollow;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    maxNumFollowers;                                         // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.TryAdd Follower
	 */
	struct ABuff_TamedLeaderOfWildPack_C_TryAddFollower_Params
	{
	public:
		class APrimalDinoCharacter*                                newFollower;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       followerAdded;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.PreventActorTargeting
	 */
	struct ABuff_TamedLeaderOfWildPack_C_PreventActorTargeting_Params
	{
	public:
		class AActor*                                              ByActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.UserConstructionScript
	 */
	struct ABuff_TamedLeaderOfWildPack_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.LinkDamage
	 */
	struct ABuff_TamedLeaderOfWildPack_C_LinkDamage_Params
	{
	public:
		class APrimalDinoCharacter*                                follower;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OnTakeAnyDamage_Event
	 */
	struct ABuff_TamedLeaderOfWildPack_C_OnTakeAnyDamage_Event_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_36GZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.SpawnParticlesForFollowers_Multicast
	 */
	struct ABuff_TamedLeaderOfWildPack_C_SpawnParticlesForFollowers_Multicast_Params
	{
	public:
		class APrimalDinoCharacter*                                follower;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.SpawnParticlesForFollowers
	 */
	struct ABuff_TamedLeaderOfWildPack_C_SpawnParticlesForFollowers_Params
	{
	public:
		class APrimalDinoCharacter*                                follower;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.SpawnInitialParticles
	 */
	struct ABuff_TamedLeaderOfWildPack_C_SpawnInitialParticles_Params
	{
	public:
		int32_t                                                    numParticlesAlreadySpawned;                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.ReceiveBeginPlay
	 */
	struct ABuff_TamedLeaderOfWildPack_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.LinkDamageTaken
	 */
	struct ABuff_TamedLeaderOfWildPack_C_LinkDamageTaken_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.TakePointDamageSignature__DelegateSignature_Event
	 */
	struct ABuff_TamedLeaderOfWildPack_C_TakePointDamageSignature__DelegateSignature_Event_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JC1H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         InstigatedBy;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TVUD[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 FHitComponent;                                           // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                BoneName;                                                // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ShotFromDirection;                                       // 0x0030(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UK8X[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.ExecuteUbergraph_Buff_TamedLeaderOfWildPack
	 */
	struct ABuff_TamedLeaderOfWildPack_C_ExecuteUbergraph_Buff_TamedLeaderOfWildPack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
