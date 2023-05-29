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
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.BPAllowSpawningCrate
	 */
	struct ADayCycleManager_Gen2_C_BPAllowSpawningCrate_Params
	{
	public:
		class UClass*                                              CrateType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F6GZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SetupBackdropWarpMesh
	 */
	struct ADayCycleManager_Gen2_C_SetupBackdropWarpMesh_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.OnRep_WarpState
	 */
	struct ADayCycleManager_Gen2_C_OnRep_WarpState_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.DebugPrintWarpState
	 */
	struct ADayCycleManager_Gen2_C_DebugPrintWarpState_Params
	{
	public:
		class FString                                              WarpState;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SaveSkyboxInfo
	 */
	struct ADayCycleManager_Gen2_C_SaveSkyboxInfo_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.PlayWarpMatinee
	 */
	struct ADayCycleManager_Gen2_C_PlayWarpMatinee_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TimeLeft;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.LoadWarpBackdrop
	 */
	struct ADayCycleManager_Gen2_C_LoadWarpBackdrop_Params
	{
	public:
		bool                                                       Load;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KEJS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.LoadAsteroids
	 */
	struct ADayCycleManager_Gen2_C_LoadAsteroids_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UnloadAsteroids
	 */
	struct ADayCycleManager_Gen2_C_UnloadAsteroids_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.GetShipRootFromBackdropLevel
	 */
	struct ADayCycleManager_Gen2_C_GetShipRootFromBackdropLevel_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateSublevels
	 */
	struct ADayCycleManager_Gen2_C_UpdateSublevels_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ShouldLoadSublevels
	 */
	struct ADayCycleManager_Gen2_C_ShouldLoadSublevels_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0HMU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ClearSpaceCrates
	 */
	struct ADayCycleManager_Gen2_C_ClearSpaceCrates_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.RandomizeSkybox
	 */
	struct ADayCycleManager_Gen2_C_RandomizeSkybox_Params
	{
	public:
		int32_t                                                    newIndex;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SetupSkyboxTables
	 */
	struct ADayCycleManager_Gen2_C_SetupSkyboxTables_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.BPOnDCMCheat
	 */
	struct ADayCycleManager_Gen2_C_BPOnDCMCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ClientInitializeHazards
	 */
	struct ADayCycleManager_Gen2_C_ClientInitializeHazards_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.SetupSpaceHazards
	 */
	struct ADayCycleManager_Gen2_C_SetupSpaceHazards_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.GetRockwellStormLocations
	 */
	struct ADayCycleManager_Gen2_C_GetRockwellStormLocations_Params
	{
	public:
		TArray<struct FVector>                                     Locations;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.GetEdenStormLocations
	 */
	struct ADayCycleManager_Gen2_C_GetEdenStormLocations_Params
	{
	public:
		TArray<struct FVector>                                     Locations;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.CompareWeatherLocation
	 */
	struct ADayCycleManager_Gen2_C_CompareWeatherLocation_Params
	{
	public:
		struct FVector                                             StormLocaiton;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             LocationToCompare;                                       // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      StormBaseRadius;                                         // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InStormRadius;                                           // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IYGI[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.IsLocationInWeatherEvent
	 */
	struct ADayCycleManager_Gen2_C_IsLocationInWeatherEvent_Params
	{
	public:
		bool                                                       Location;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.IsRainingAtLocation
	 */
	struct ADayCycleManager_Gen2_C_IsRainingAtLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HUNB[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.Earth Quake Drop Item at Location
	 */
	struct ADayCycleManager_Gen2_C_EarthQuakeDropItematLocation_Params
	{
	public:
		struct FVector                                             AtLoc;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    BiomeArea;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            AtRot;                                                   // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ManageStormVectors
	 */
	struct ADayCycleManager_Gen2_C_ManageStormVectors_Params
	{
	public:
		TArray<struct FVector>                                     BiomeVectorArray;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		float                                                      ChanceToAddStorm;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    MaxNumStorms;                                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BiomeXMin;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BiomeXMax;                                               // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BiomeYMin;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BiomeYMax;                                               // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      StormRateOfTravel;                                       // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MIHN[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<double>                                             StormTimeArray;                                          // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		float                                                      StormLifetime;                                           // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BiomeHasActiveStorm;                                     // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UserConstructionScript
	 */
	struct ADayCycleManager_Gen2_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateAreaBuff
	 */
	struct ADayCycleManager_Gen2_C_UpdateAreaBuff_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ReceiveBeginPlay
	 */
	struct ADayCycleManager_Gen2_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.InitializeSpaceHazards
	 */
	struct ADayCycleManager_Gen2_C_InitializeSpaceHazards_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.EnsureSublevelsAreLoaded
	 */
	struct ADayCycleManager_Gen2_C_EnsureSublevelsAreLoaded_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.TriggerWarp
	 */
	struct ADayCycleManager_Gen2_C_TriggerWarp_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.EndWarp
	 */
	struct ADayCycleManager_Gen2_C_EndWarp_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.DebugEndWarp
	 */
	struct ADayCycleManager_Gen2_C_DebugEndWarp_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.NetEndWarp
	 */
	struct ADayCycleManager_Gen2_C_NetEndWarp_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateSkybox
	 */
	struct ADayCycleManager_Gen2_C_UpdateSkybox_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.CheckForShipRoot
	 */
	struct ADayCycleManager_Gen2_C_CheckForShipRoot_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ServerWarpWarmUpComplete
	 */
	struct ADayCycleManager_Gen2_C_ServerWarpWarmUpComplete_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ServerWarpCooldownComplete
	 */
	struct ADayCycleManager_Gen2_C_ServerWarpCooldownComplete_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.NetWarpLoopStarted
	 */
	struct ADayCycleManager_Gen2_C_NetWarpLoopStarted_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.RecieveMatineeUpdated
	 */
	struct ADayCycleManager_Gen2_C_RecieveMatineeUpdated_Params
	{	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.ExecuteUbergraph_DayCycleManager_Gen2
	 */
	struct ADayCycleManager_Gen2_C_ExecuteUbergraph_DayCycleManager_Gen2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateSkyboxIndex__DelegateSignature
	 */
	struct ADayCycleManager_Gen2_C_UpdateSkyboxIndex__DelegateSignature_Params
	{
	public:
		int32_t                                                    CurrentIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DayCycleManager_Gen2.DayCycleManager_Gen2_C.UpdateAreaBuffPlayerStatus__DelegateSignature
	 */
	struct ADayCycleManager_Gen2_C_UpdateAreaBuffPlayerStatus__DelegateSignature_Params
	{
	public:
		bool                                                       IsInCave;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsUnderwater;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
