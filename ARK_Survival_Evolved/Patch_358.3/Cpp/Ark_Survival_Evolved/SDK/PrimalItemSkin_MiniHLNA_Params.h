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
	 * Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.IsPlayingExplorerNote
	 */
	struct UPrimalItemSkin_MiniHLNA_C_IsPlayingExplorerNote_Params
	{
	public:
		bool                                                       ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9DRQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.hide skin
	 */
	struct UPrimalItemSkin_MiniHLNA_C_hideskin_Params
	{	};

	/**
	 * Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BPGetItemDescription
	 */
	struct UPrimalItemSkin_MiniHLNA_C_BPGetItemDescription_Params
	{
	public:
		class FString                                              InDescription;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor)
		bool                                                       bGetLongDescription;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_34N4[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            ForPC;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.SetVisibility
	 */
	struct UPrimalItemSkin_MiniHLNA_C_SetVisibility_Params
	{
	public:
		bool                                                       Visibility;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BPClientHandleItemNetExecCommand
	 */
	struct UPrimalItemSkin_MiniHLNA_C_BPClientHandleItemNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class AShooterPlayerController*                            ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.TryRemoveBuffOnUnequip
	 */
	struct UPrimalItemSkin_MiniHLNA_C_TryRemoveBuffOnUnequip_Params
	{	};

	/**
	 * Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.RemovedSkinFromItem
	 */
	struct UPrimalItemSkin_MiniHLNA_C_RemovedSkinFromItem_Params
	{
	public:
		class UPrimalItem*                                         FromOwnerItem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsFirstTime;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.OnEquipDelayedFn
	 */
	struct UPrimalItemSkin_MiniHLNA_C_OnEquipDelayedFn_Params
	{	};

	/**
	 * Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.Spawn Emitter
	 */
	struct UPrimalItemSkin_MiniHLNA_C_SpawnEmitter_Params
	{
	public:
		class UParticleSystem*                                     Emitter;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                Socket;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AutoDestroy;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U0D7[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UParticleSystemComponent*                            ParticleComponent;                                       // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.PlayRandomSoundFromSounds
	 */
	struct UPrimalItemSkin_MiniHLNA_C_PlayRandomSoundFromSounds_Params
	{
	public:
		TArray<class USoundBase*>                                  Sounds;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BlueprintUnequipped
	 */
	struct UPrimalItemSkin_MiniHLNA_C_BlueprintUnequipped_Params
	{	};

	/**
	 * Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BPAddedAttachments
	 */
	struct UPrimalItemSkin_MiniHLNA_C_BPAddedAttachments_Params
	{	};

	/**
	 * Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.ExecuteUbergraph_PrimalItemSkin_MiniHLNA
	 */
	struct UPrimalItemSkin_MiniHLNA_C_ExecuteUbergraph_PrimalItemSkin_MiniHLNA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
