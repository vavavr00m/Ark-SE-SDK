/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.IsPlayingExplorerNote
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_Interp_C::IsPlayingExplorerNote(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.IsPlayingExplorerNote");
		
		USKComponent_SkinAttachment_Interp_C_IsPlayingExplorerNote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Clear Async Loaded Audio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USKComponent_SkinAttachment_Interp_C::ClearAsyncLoadedAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Clear Async Loaded Audio");
		
		USKComponent_SkinAttachment_Interp_C_ClearAsyncLoadedAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PrintDMICAnimTextureParams
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    DMIC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MatIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_Interp_C::PrintDMICAnimTextureParams(class UMaterialInstanceDynamic* DMIC, int32_t MatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PrintDMICAnimTextureParams");
		
		USKComponent_SkinAttachment_Interp_C_PrintDMICAnimTextureParams_Params params {};
		params.DMIC = DMIC;
		params.MatIndex = MatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.GetAssociatedItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_Interp_C::GetAssociatedItem(class UPrimalItem** Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.GetAssociatedItem");
		
		USKComponent_SkinAttachment_Interp_C_GetAssociatedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.IsPlayingAnimTexture
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_Interp_C::IsPlayingAnimTexture(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.IsPlayingAnimTexture");
		
		USKComponent_SkinAttachment_Interp_C_IsPlayingAnimTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.UpdateAnimTextureStatus
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USKComponent_SkinAttachment_Interp_C::UpdateAnimTextureStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.UpdateAnimTextureStatus");
		
		USKComponent_SkinAttachment_Interp_C_UpdateAnimTextureStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.BPOnComponentDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USKComponent_SkinAttachment_Interp_C::BPOnComponentDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.BPOnComponentDestroyed");
		
		USKComponent_SkinAttachment_Interp_C_BPOnComponentDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayLoaded Explorer Note
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USKComponent_SkinAttachment_Interp_C::PlayLoadedExplorerNote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayLoaded Explorer Note");
		
		USKComponent_SkinAttachment_Interp_C_PlayLoadedExplorerNote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Set HLNA Visibility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_Interp_C::SetHLNAVisibility(bool Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Set HLNA Visibility");
		
		USKComponent_SkinAttachment_Interp_C_SetHLNAVisibility_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayerIsLookingAtHLNA
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_Interp_C::PlayerIsLookingAtHLNA(class APrimalCharacter* Character, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayerIsLookingAtHLNA");
		
		USKComponent_SkinAttachment_Interp_C_PlayerIsLookingAtHLNA_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Is Talking Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_Interp_C::IsTalkingPublic(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Is Talking Public");
		
		USKComponent_SkinAttachment_Interp_C_IsTalkingPublic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.IsTalking
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_Interp_C::IsTalking(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.IsTalking");
		
		USKComponent_SkinAttachment_Interp_C_IsTalking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlaySound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_Interp_C::PlaySound(class USoundBase* Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlaySound");
		
		USKComponent_SkinAttachment_Interp_C_PlaySound_Params params {};
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayEmote
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            EmoteIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_Interp_C::PlayEmote(int32_t EmoteIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayEmote");
		
		USKComponent_SkinAttachment_Interp_C_PlayEmote_Params params {};
		params.EmoteIndex = EmoteIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.CheckEmotes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_Interp_C::CheckEmotes(class AShooterCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.CheckEmotes");
		
		USKComponent_SkinAttachment_Interp_C_CheckEmotes_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.UpdateInterpolation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_Interp_C::UpdateInterpolation(class ACharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.UpdateInterpolation");
		
		USKComponent_SkinAttachment_Interp_C_UpdateInterpolation_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.AddedAsPrimalItemAttachment
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USKComponent_SkinAttachment_Interp_C::AddedAsPrimalItemAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.AddedAsPrimalItemAttachment");
		
		USKComponent_SkinAttachment_Interp_C_AddedAsPrimalItemAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.StopFacingPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USKComponent_SkinAttachment_Interp_C::StopFacingPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.StopFacingPlayer");
		
		USKComponent_SkinAttachment_Interp_C_StopFacingPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.BPOnComponentTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_Interp_C::BPOnComponentTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.BPOnComponentTick");
		
		USKComponent_SkinAttachment_Interp_C_BPOnComponentTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.CompTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USKComponent_SkinAttachment_Interp_C::CompTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.CompTick");
		
		USKComponent_SkinAttachment_Interp_C_CompTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.AsyncLoadExplorerNote
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_Interp_C::AsyncLoadExplorerNote(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.AsyncLoadExplorerNote");
		
		USKComponent_SkinAttachment_Interp_C_AsyncLoadExplorerNote_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.AsyncAssetLoadedDelegate__ExplorerNoteAudio
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      AssetPath                                                  (Parm, ZeroConstructor)
	 * 		class UObject*                                     LoadedAsset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_Interp_C::AsyncAssetLoadedDelegate__ExplorerNoteAudio(const class FString& AssetPath, class UObject* LoadedAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.AsyncAssetLoadedDelegate__ExplorerNoteAudio");
		
		USKComponent_SkinAttachment_Interp_C_AsyncAssetLoadedDelegate__ExplorerNoteAudio_Params params {};
		params.AssetPath = AssetPath;
		params.LoadedAsset = LoadedAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.StopPlayingLoadedExplorerNote
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USKComponent_SkinAttachment_Interp_C::StopPlayingLoadedExplorerNote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.StopPlayingLoadedExplorerNote");
		
		USKComponent_SkinAttachment_Interp_C_StopPlayingLoadedExplorerNote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayLoadedExplorerNoteEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USKComponent_SkinAttachment_Interp_C::PlayLoadedExplorerNoteEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayLoadedExplorerNoteEvent");
		
		USKComponent_SkinAttachment_Interp_C_PlayLoadedExplorerNoteEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.ProcessDynamicMaterialForDialogueIconDelegate__DelegateSignature_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        MaterialFName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UMaterialInstanceDynamic*                    LoadedMaterial                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_Interp_C::ProcessDynamicMaterialForDialogueIconDelegate__DelegateSignature_Event(const class FName& MaterialFName, class UMaterialInstanceDynamic* LoadedMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.ProcessDynamicMaterialForDialogueIconDelegate__DelegateSignature_Event");
		
		USKComponent_SkinAttachment_Interp_C_ProcessDynamicMaterialForDialogueIconDelegate__DelegateSignature_Event_Params params {};
		params.MaterialFName = MaterialFName;
		params.LoadedMaterial = LoadedMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.InitializeForPlayerController
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_Interp_C::InitializeForPlayerController(class AShooterPlayerController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.InitializeForPlayerController");
		
		USKComponent_SkinAttachment_Interp_C_InitializeForPlayerController_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.load sound cue anim texture
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USKComponent_SkinAttachment_Interp_C::loadsoundcueanimtexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.load sound cue anim texture");
		
		USKComponent_SkinAttachment_Interp_C_loadsoundcueanimtexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Simple Load Async Sound Cue
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLocalizedSoundCueEntry>             LocalizedSoundCues                                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void USKComponent_SkinAttachment_Interp_C::SimpleLoadAsyncSoundCue(TArray<struct FLocalizedSoundCueEntry>* LocalizedSoundCues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Simple Load Async Sound Cue");
		
		USKComponent_SkinAttachment_Interp_C_SimpleLoadAsyncSoundCue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocalizedSoundCues != nullptr)
			*LocalizedSoundCues = params.LocalizedSoundCues;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.ExecuteUbergraph_SKComponent_SkinAttachment_Interp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USKComponent_SkinAttachment_Interp_C::ExecuteUbergraph_SKComponent_SkinAttachment_Interp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.ExecuteUbergraph_SKComponent_SkinAttachment_Interp");
		
		USKComponent_SkinAttachment_Interp_C_ExecuteUbergraph_SKComponent_SkinAttachment_Interp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Finished Loading Localized Sound Cue__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void USKComponent_SkinAttachment_Interp_C::FinishedLoadingLocalizedSoundCue__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Finished Loading Localized Sound Cue__DelegateSignature");
		
		USKComponent_SkinAttachment_Interp_C_FinishedLoadingLocalizedSoundCue__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USKComponent_SkinAttachment_Interp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USKComponent_SkinAttachment_Interp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C");
		return ptr;
	}

}


