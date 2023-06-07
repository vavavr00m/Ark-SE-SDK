/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.IsPlayingExplorerNote
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_MiniHLNA_C::IsPlayingExplorerNote(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.IsPlayingExplorerNote");
		
		UPrimalItemSkin_MiniHLNA_C_IsPlayingExplorerNote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.hide skin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemSkin_MiniHLNA_C::hideskin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.hide skin");
		
		UPrimalItemSkin_MiniHLNA_C_hideskin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BPGetItemDescription
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InDescription                                              (Parm, ZeroConstructor)
	 * 		bool                                               bGetLongDescription                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString UPrimalItemSkin_MiniHLNA_C::BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BPGetItemDescription");
		
		UPrimalItemSkin_MiniHLNA_C_BPGetItemDescription_Params params {};
		params.InDescription = InDescription;
		params.bGetLongDescription = bGetLongDescription;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.SetVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_MiniHLNA_C::SetVisibility(bool Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.SetVisibility");
		
		UPrimalItemSkin_MiniHLNA_C_SetVisibility_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BPClientHandleItemNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_MiniHLNA_C::BPClientHandleItemNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BPClientHandleItemNetExecCommand");
		
		UPrimalItemSkin_MiniHLNA_C_BPClientHandleItemNetExecCommand_Params params {};
		params.CommandName = CommandName;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExecParams != nullptr)
			*ExecParams = params.ExecParams;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.TryRemoveBuffOnUnequip
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemSkin_MiniHLNA_C::TryRemoveBuffOnUnequip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.TryRemoveBuffOnUnequip");
		
		UPrimalItemSkin_MiniHLNA_C_TryRemoveBuffOnUnequip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.RemovedSkinFromItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 FromOwnerItem                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsFirstTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_MiniHLNA_C::RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.RemovedSkinFromItem");
		
		UPrimalItemSkin_MiniHLNA_C_RemovedSkinFromItem_Params params {};
		params.FromOwnerItem = FromOwnerItem;
		params.bIsFirstTime = bIsFirstTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.OnEquipDelayedFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemSkin_MiniHLNA_C::OnEquipDelayedFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.OnEquipDelayedFn");
		
		UPrimalItemSkin_MiniHLNA_C_OnEquipDelayedFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.Spawn Emitter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             Emitter                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AutoDestroy                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UParticleSystemComponent*                    ParticleComponent                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_MiniHLNA_C::SpawnEmitter(class UParticleSystem* Emitter, const class FName& Socket, bool AutoDestroy, class UParticleSystemComponent** ParticleComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.Spawn Emitter");
		
		UPrimalItemSkin_MiniHLNA_C_SpawnEmitter_Params params {};
		params.Emitter = Emitter;
		params.Socket = Socket;
		params.AutoDestroy = AutoDestroy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParticleComponent != nullptr)
			*ParticleComponent = params.ParticleComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.PlayRandomSoundFromSounds
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class USoundBase*>                          Sounds                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UPrimalItemSkin_MiniHLNA_C::PlayRandomSoundFromSounds(TArray<class USoundBase*>* Sounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.PlayRandomSoundFromSounds");
		
		UPrimalItemSkin_MiniHLNA_C_PlayRandomSoundFromSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sounds != nullptr)
			*Sounds = params.Sounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BlueprintUnequipped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemSkin_MiniHLNA_C::BlueprintUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BlueprintUnequipped");
		
		UPrimalItemSkin_MiniHLNA_C_BlueprintUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BPAddedAttachments
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemSkin_MiniHLNA_C::BPAddedAttachments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BPAddedAttachments");
		
		UPrimalItemSkin_MiniHLNA_C_BPAddedAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.ExecuteUbergraph_PrimalItemSkin_MiniHLNA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_MiniHLNA_C::ExecuteUbergraph_PrimalItemSkin_MiniHLNA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.ExecuteUbergraph_PrimalItemSkin_MiniHLNA");
		
		UPrimalItemSkin_MiniHLNA_C_ExecuteUbergraph_PrimalItemSkin_MiniHLNA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_MiniHLNA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_MiniHLNA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C");
		return ptr;
	}

}


