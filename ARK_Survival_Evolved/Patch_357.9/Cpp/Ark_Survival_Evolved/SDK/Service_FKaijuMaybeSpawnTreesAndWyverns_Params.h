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
	 * Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.SpawnBuffingTree
	 */
	struct UService_FKaijuMaybeSpawnTreesAndWyverns_C_SpawnBuffingTree_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ShouldSpawnBuffingTrees
	 */
	struct UService_FKaijuMaybeSpawnTreesAndWyverns_C_ShouldSpawnBuffingTrees_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NFZO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.MaybeSpawn Tree on Enemy
	 */
	struct UService_FKaijuMaybeSpawnTreesAndWyverns_C_MaybeSpawnTreeonEnemy_Params
	{	};

	/**
	 * Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.SpawnWyvern
	 */
	struct UService_FKaijuMaybeSpawnTreesAndWyverns_C_SpawnWyvern_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2Y8A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ShouldSpawnWyverns
	 */
	struct UService_FKaijuMaybeSpawnTreesAndWyverns_C_ShouldSpawnWyverns_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K9PT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ShouldSpawnPoisonTrees
	 */
	struct UService_FKaijuMaybeSpawnTreesAndWyverns_C_ShouldSpawnPoisonTrees_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_598L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ReceiveTick
	 */
	struct UService_FKaijuMaybeSpawnTreesAndWyverns_C_ReceiveTick_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ReceiveActivation
	 */
	struct UService_FKaijuMaybeSpawnTreesAndWyverns_C_ReceiveActivation_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Service_FKaijuMaybeSpawnTreesAndWyverns.Service_FKaijuMaybeSpawnTreesAndWyverns_C.ExecuteUbergraph_Service_FKaijuMaybeSpawnTreesAndWyverns
	 */
	struct UService_FKaijuMaybeSpawnTreesAndWyverns_C_ExecuteUbergraph_Service_FKaijuMaybeSpawnTreesAndWyverns_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
