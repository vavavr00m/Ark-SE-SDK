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
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.IsPlayingExplorerNote
	 */
	struct USKComponent_SkinAttachment_Interp_C_IsPlayingExplorerNote_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Clear Async Loaded Audio
	 */
	struct USKComponent_SkinAttachment_Interp_C_ClearAsyncLoadedAudio_Params
	{	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PrintDMICAnimTextureParams
	 */
	struct USKComponent_SkinAttachment_Interp_C_PrintDMICAnimTextureParams_Params
	{
	public:
		class UMaterialInstanceDynamic*                            DMIC;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    MatIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6392[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.GetAssociatedItem
	 */
	struct USKComponent_SkinAttachment_Interp_C_GetAssociatedItem_Params
	{
	public:
		class UPrimalItem*                                         Result;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.IsPlayingAnimTexture
	 */
	struct USKComponent_SkinAttachment_Interp_C_IsPlayingAnimTexture_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.UpdateAnimTextureStatus
	 */
	struct USKComponent_SkinAttachment_Interp_C_UpdateAnimTextureStatus_Params
	{	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.BPOnComponentDestroyed
	 */
	struct USKComponent_SkinAttachment_Interp_C_BPOnComponentDestroyed_Params
	{	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayLoaded Explorer Note
	 */
	struct USKComponent_SkinAttachment_Interp_C_PlayLoadedExplorerNote_Params
	{	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Set HLNA Visibility
	 */
	struct USKComponent_SkinAttachment_Interp_C_SetHLNAVisibility_Params
	{
	public:
		bool                                                       Visibility;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NGSX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayerIsLookingAtHLNA
	 */
	struct USKComponent_SkinAttachment_Interp_C_PlayerIsLookingAtHLNA_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Is Talking Public
	 */
	struct USKComponent_SkinAttachment_Interp_C_IsTalkingPublic_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.IsTalking
	 */
	struct USKComponent_SkinAttachment_Interp_C_IsTalking_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlaySound
	 */
	struct USKComponent_SkinAttachment_Interp_C_PlaySound_Params
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayEmote
	 */
	struct USKComponent_SkinAttachment_Interp_C_PlayEmote_Params
	{
	public:
		int32_t                                                    EmoteIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_58V9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.CheckEmotes
	 */
	struct USKComponent_SkinAttachment_Interp_C_CheckEmotes_Params
	{
	public:
		class AShooterCharacter*                                   Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.UpdateInterpolation
	 */
	struct USKComponent_SkinAttachment_Interp_C_UpdateInterpolation_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.AddedAsPrimalItemAttachment
	 */
	struct USKComponent_SkinAttachment_Interp_C_AddedAsPrimalItemAttachment_Params
	{	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.StopFacingPlayer
	 */
	struct USKComponent_SkinAttachment_Interp_C_StopFacingPlayer_Params
	{	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.BPOnComponentTick
	 */
	struct USKComponent_SkinAttachment_Interp_C_BPOnComponentTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.CompTick
	 */
	struct USKComponent_SkinAttachment_Interp_C_CompTick_Params
	{	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.AsyncLoadExplorerNote
	 */
	struct USKComponent_SkinAttachment_Interp_C_AsyncLoadExplorerNote_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.AsyncAssetLoadedDelegate__ExplorerNoteAudio
	 */
	struct USKComponent_SkinAttachment_Interp_C_AsyncAssetLoadedDelegate__ExplorerNoteAudio_Params
	{
	public:
		class FString                                              AssetPath;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class UObject*                                             LoadedAsset;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.StopPlayingLoadedExplorerNote
	 */
	struct USKComponent_SkinAttachment_Interp_C_StopPlayingLoadedExplorerNote_Params
	{	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayLoadedExplorerNoteEvent
	 */
	struct USKComponent_SkinAttachment_Interp_C_PlayLoadedExplorerNoteEvent_Params
	{	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.ProcessDynamicMaterialForDialogueIconDelegate__DelegateSignature_Event
	 */
	struct USKComponent_SkinAttachment_Interp_C_ProcessDynamicMaterialForDialogueIconDelegate__DelegateSignature_Event_Params
	{
	public:
		class FName                                                MaterialFName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UMaterialInstanceDynamic*                            LoadedMaterial;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.InitializeForPlayerController
	 */
	struct USKComponent_SkinAttachment_Interp_C_InitializeForPlayerController_Params
	{
	public:
		class AShooterPlayerController*                            Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.load sound cue anim texture
	 */
	struct USKComponent_SkinAttachment_Interp_C_loadsoundcueanimtexture_Params
	{	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Simple Load Async Sound Cue
	 */
	struct USKComponent_SkinAttachment_Interp_C_SimpleLoadAsyncSoundCue_Params
	{
	public:
		TArray<struct FLocalizedSoundCueEntry>                     LocalizedSoundCues;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.ExecuteUbergraph_SKComponent_SkinAttachment_Interp
	 */
	struct USKComponent_SkinAttachment_Interp_C_ExecuteUbergraph_SKComponent_SkinAttachment_Interp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Finished Loading Localized Sound Cue__DelegateSignature
	 */
	struct USKComponent_SkinAttachment_Interp_C_FinishedLoadingLocalizedSoundCue__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
