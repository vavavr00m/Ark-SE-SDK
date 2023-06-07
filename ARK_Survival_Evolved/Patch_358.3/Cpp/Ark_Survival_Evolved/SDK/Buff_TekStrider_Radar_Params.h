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
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Clear Local Shared Target
	 */
	struct ABuff_TekStrider_Radar_C_ClearLocalSharedTarget_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.add shared target
	 */
	struct ABuff_TekStrider_Radar_C_addsharedtarget_Params
	{
	public:
		class APrimalCharacter*                                    NewTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Interval Share Server Target to Rider
	 */
	struct ABuff_TekStrider_Radar_C_IntervalShareServerTargettoRider_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Trigger Held
	 */
	struct ABuff_TekStrider_Radar_C_TriggerHeld_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.TriggerReleased
	 */
	struct ABuff_TekStrider_Radar_C_TriggerReleased_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Quicktap
	 */
	struct ABuff_TekStrider_Radar_C_Quicktap_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Radar Change Filter to Only Dinos
	 */
	struct ABuff_TekStrider_Radar_C_RadarChangeFiltertoOnlyDinos_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Radar Change Filter to Only Humans
	 */
	struct ABuff_TekStrider_Radar_C_RadarChangeFiltertoOnlyHumans_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Radar Change Filter to Both Dinos And Humans
	 */
	struct ABuff_TekStrider_Radar_C_RadarChangeFiltertoBothDinosAndHumans_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.find targets
	 */
	struct ABuff_TekStrider_Radar_C_findtargets_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Flash Target
	 */
	struct ABuff_TekStrider_Radar_C_FlashTarget_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BPClientHandleNetExecCommand
	 */
	struct ABuff_TekStrider_Radar_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FFT7[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.clear rider
	 */
	struct ABuff_TekStrider_Radar_C_clearrider_Params
	{
	public:
		class AShooterCharacter*                                   prevrider;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Highlight latest shared target
	 */
	struct ABuff_TekStrider_Radar_C_Highlightlatestsharedtarget_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.set rider
	 */
	struct ABuff_TekStrider_Radar_C_setrider_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Restrict Sharing Target Info
	 */
	struct ABuff_TekStrider_Radar_C_RestrictSharingTargetInfo_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Update Shared Target Location
	 */
	struct ABuff_TekStrider_Radar_C_UpdateSharedTargetLocation_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Keep Shared Target Visible
	 */
	struct ABuff_TekStrider_Radar_C_KeepSharedTargetVisible_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Restrict Updating Nearby Teammates
	 */
	struct ABuff_TekStrider_Radar_C_RestrictUpdatingNearbyTeammates_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BPServerHandleNetExecCommand
	 */
	struct ABuff_TekStrider_Radar_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Get Dino Info HUDElement Desired Location
	 */
	struct ABuff_TekStrider_Radar_C_GetDinoInfoHUDElementDesiredLocation_Params
	{
	public:
		int32_t                                                    ListPositionIndex;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           Location;                                                // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Set Container HUDElement Size
	 */
	struct ABuff_TekStrider_Radar_C_SetContainerHUDElementSize_Params
	{
	public:
		int32_t                                                    DinoInfoListItemQuantity;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZMVJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.SetActorStencilValue
	 */
	struct ABuff_TekStrider_Radar_C_SetActorStencilValue_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Visible;                                                 // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TOKE[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Lowered Rate Of Updating Screenspace Loc Of Radar Hud Elems
	 */
	struct ABuff_TekStrider_Radar_C_LoweredRateOfUpdatingScreenspaceLocOfRadarHudElems_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.update radar
	 */
	struct ABuff_TekStrider_Radar_C_updateradar_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Can Fire
	 */
	struct ABuff_TekStrider_Radar_C_CanFire_Params
	{
	public:
		bool                                                       fromanimbp;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BuffTickClient
	 */
	struct ABuff_TekStrider_Radar_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Clear Radar Characters
	 */
	struct ABuff_TekStrider_Radar_C_ClearRadarCharacters_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Delay Before Fadeout
	 */
	struct ABuff_TekStrider_Radar_C_DelayBeforeFadeout_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.OnRep_IsAlertActive
	 */
	struct ABuff_TekStrider_Radar_C_OnRep_IsAlertActive_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Is Small Creature
	 */
	struct ABuff_TekStrider_Radar_C_IsSmallCreature_Params
	{
	public:
		class APrimalDinoCharacter*                                creature;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSmall;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V2L8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Is Dino Hostile
	 */
	struct ABuff_TekStrider_Radar_C_IsDinoHostile_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FleeingCountsAsHostile;                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsHostile;                                               // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Classify Scanning Target
	 */
	struct ABuff_TekStrider_Radar_C_ClassifyScanningTarget_Params
	{
	public:
		class AActor*                                              ScanTarget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPara_WarningMode                                          WarningMode;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FleeingCountsAsHostile;                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsEnemy;                                                 // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSmallCreature;                                         // 0x000B(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Get Nearby Enemies
	 */
	struct ABuff_TekStrider_Radar_C_GetNearbyEnemies_Params
	{
	public:
		TArray<struct FVector>                                     Locations;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Notify Player About Alert
	 */
	struct ABuff_TekStrider_Radar_C_NotifyPlayerAboutAlert_Params
	{
	public:
		class AShooterCharacter*                                   Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BPGetHUDElements
	 */
	struct ABuff_TekStrider_Radar_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Is Dino in Cone?
	 */
	struct ABuff_TekStrider_Radar_C_IsDinoinCone_Params
	{
	public:
		class APrimalCharacter*                                    Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHitResult>                                  Hits;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       IsInCone;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_29Q8[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Get Cone Forward
	 */
	struct ABuff_TekStrider_Radar_C_GetConeForward_Params
	{
	public:
		struct FVector                                             Forward;                                                 // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MKCG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Get Cone Origin
	 */
	struct ABuff_TekStrider_Radar_C_GetConeOrigin_Params
	{
	public:
		struct FVector                                             ConeOrigin;                                              // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Deactivate Attachment
	 */
	struct ABuff_TekStrider_Radar_C_DeactivateAttachment_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Trigger
	 */
	struct ABuff_TekStrider_Radar_C_Trigger_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.BPSetupForInstigator
	 */
	struct ABuff_TekStrider_Radar_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.UserConstructionScript
	 */
	struct ABuff_TekStrider_Radar_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Timeline_0__FinishedFunc
	 */
	struct ABuff_TekStrider_Radar_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Timeline_0__UpdateFunc
	 */
	struct ABuff_TekStrider_Radar_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Multicast_Activate
	 */
	struct ABuff_TekStrider_Radar_C_Multicast_Activate_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Multicast_Deactivate
	 */
	struct ABuff_TekStrider_Radar_C_Multicast_Deactivate_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.StopAlertTick
	 */
	struct ABuff_TekStrider_Radar_C_StopAlertTick_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.Fadeout Hud Elem
	 */
	struct ABuff_TekStrider_Radar_C_FadeoutHudElem_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.multicast toggle shared target
	 */
	struct ABuff_TekStrider_Radar_C_multicasttogglesharedtarget_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.MulticastSetHasScannerListSorted
	 */
	struct ABuff_TekStrider_Radar_C_MulticastSetHasScannerListSorted_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.MulticastSetSortedFoundCharacters
	 */
	struct ABuff_TekStrider_Radar_C_MulticastSetSortedFoundCharacters_Params
	{	};

	/**
	 * Function Buff_TekStrider_Radar.Buff_TekStrider_Radar_C.ExecuteUbergraph_Buff_TekStrider_Radar
	 */
	struct ABuff_TekStrider_Radar_C_ExecuteUbergraph_Buff_TekStrider_Radar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
