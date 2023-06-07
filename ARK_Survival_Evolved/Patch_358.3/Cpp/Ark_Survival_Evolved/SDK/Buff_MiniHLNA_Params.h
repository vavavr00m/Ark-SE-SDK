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
	 * Function Buff_MiniHLNA.Buff_MiniHLNA_C.Clear Async Loaded Audio
	 */
	struct ABuff_MiniHLNA_C_ClearAsyncLoadedAudio_Params
	{	};

	/**
	 * Function Buff_MiniHLNA.Buff_MiniHLNA_C.VerifySeasonPassFn
	 */
	struct ABuff_MiniHLNA_C_VerifySeasonPassFn_Params
	{	};

	/**
	 * Function Buff_MiniHLNA.Buff_MiniHLNA_C.RemoveSkin
	 */
	struct ABuff_MiniHLNA_C_RemoveSkin_Params
	{	};

	/**
	 * Function Buff_MiniHLNA.Buff_MiniHLNA_C.BPServerHandleNetExecCommand
	 */
	struct ABuff_MiniHLNA_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MiniHLNA.Buff_MiniHLNA_C.BPClientHandleNetExecCommand
	 */
	struct ABuff_MiniHLNA_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MiniHLNA.Buff_MiniHLNA_C.Play Random UniqueSound
	 */
	struct ABuff_MiniHLNA_C_PlayRandomUniqueSound_Params
	{
	public:
		TArray<class USoundBase*>                                  Sounds;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    PrevSoundIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PlayedIndex;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MiniHLNA.Buff_MiniHLNA_C.OnUnequip
	 */
	struct ABuff_MiniHLNA_C_OnUnequip_Params
	{	};

	/**
	 * Function Buff_MiniHLNA.Buff_MiniHLNA_C.Get Random UniqueInt
	 */
	struct ABuff_MiniHLNA_C_GetRandomUniqueInt_Params
	{
	public:
		int32_t                                                    Max;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    exclude;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Result;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MiniHLNA.Buff_MiniHLNA_C.ReceiveBeginPlay
	 */
	struct ABuff_MiniHLNA_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_MiniHLNA.Buff_MiniHLNA_C.BuffPostAdjustDamage
	 */
	struct ABuff_MiniHLNA_C_BuffPostAdjustDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GM9Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              TheDamgeType;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MiniHLNA.Buff_MiniHLNA_C.UserConstructionScript
	 */
	struct ABuff_MiniHLNA_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_MiniHLNA.Buff_MiniHLNA_C.MultiPlaySound
	 */
	struct ABuff_MiniHLNA_C_MultiPlaySound_Params
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MiniHLNA.Buff_MiniHLNA_C.VerifySeasonPass
	 */
	struct ABuff_MiniHLNA_C_VerifySeasonPass_Params
	{	};

	/**
	 * Function Buff_MiniHLNA.Buff_MiniHLNA_C.Simple Load Async Sound Cue
	 */
	struct ABuff_MiniHLNA_C_SimpleLoadAsyncSoundCue_Params
	{
	public:
		TArray<struct FLocalizedSoundCueEntry>                     Localized;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Buff_MiniHLNA.Buff_MiniHLNA_C.AsyncAssetLoadedDelegate__ExplorerNoteAudio
	 */
	struct ABuff_MiniHLNA_C_AsyncAssetLoadedDelegate__ExplorerNoteAudio_Params
	{
	public:
		class FString                                              AssetPath;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class UObject*                                             LoadedAsset;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MiniHLNA.Buff_MiniHLNA_C.play hurt sfx
	 */
	struct ABuff_MiniHLNA_C_playhurtsfx_Params
	{	};

	/**
	 * Function Buff_MiniHLNA.Buff_MiniHLNA_C.ExecuteUbergraph_Buff_MiniHLNA
	 */
	struct ABuff_MiniHLNA_C_ExecuteUbergraph_Buff_MiniHLNA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
