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
	 * Function TestGameMode.TestGameMode_C.SetNewYearLocation
	 */
	struct ATestGameMode_C_SetNewYearLocation_Params
	{	};

	/**
	 * Function TestGameMode.TestGameMode_C.TickPreNewYear
	 */
	struct ATestGameMode_C_TickPreNewYear_Params
	{
	public:
		float                                                      TimeTillNewYear;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TestGameMode.TestGameMode_C.StartNewYear
	 */
	struct ATestGameMode_C_StartNewYear_Params
	{	};

	/**
	 * Function TestGameMode.TestGameMode_C.SpawnNewYearGift
	 */
	struct ATestGameMode_C_SpawnNewYearGift_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TestGameMode.TestGameMode_C.BPPreSpawnedDino
	 */
	struct ATestGameMode_C_BPPreSpawnedDino_Params
	{
	public:
		class APrimalDinoCharacter*                                theDino;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TestGameMode.TestGameMode_C.UserConstructionScript
	 */
	struct ATestGameMode_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TestGameMode.TestGameMode_C.ReceiveBeginPlay
	 */
	struct ATestGameMode_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TestGameMode.TestGameMode_C.OnShooterCharacterSpawned_Event
	 */
	struct ATestGameMode_C_OnShooterCharacterSpawned_Event_Params
	{
	public:
		class AShooterCharacter*                                   TheShooterCharacter;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TestGameMode.TestGameMode_C.ReceiveTick
	 */
	struct ATestGameMode_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TestGameMode.TestGameMode_C.ExecuteUbergraph_TestGameMode
	 */
	struct ATestGameMode_C_ExecuteUbergraph_TestGameMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
