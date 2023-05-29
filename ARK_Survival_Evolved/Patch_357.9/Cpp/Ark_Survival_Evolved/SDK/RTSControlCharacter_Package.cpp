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
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.ToggleKeybindUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARTSControlCharacter_C::ToggleKeybindUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.ToggleKeybindUI");
		
		ARTSControlCharacter_C_ToggleKeybindUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.UpdateSelection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::UpdateSelection(class APrimalDinoCharacter* Dino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.UpdateSelection");
		
		ARTSControlCharacter_C_UpdateSelection_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.RemoveClassFromSelection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARTSControlCharacter_C::RemoveClassFromSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.RemoveClassFromSelection");
		
		ARTSControlCharacter_C_RemoveClassFromSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.RemoveGroupFromSelection
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            groupIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::RemoveGroupFromSelection(int32_t groupIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.RemoveGroupFromSelection");
		
		ARTSControlCharacter_C_RemoveGroupFromSelection_Params params {};
		params.groupIndex = groupIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.RemoveSelectionFromGroup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            groupIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::RemoveSelectionFromGroup(int32_t groupIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.RemoveSelectionFromGroup");
		
		ARTSControlCharacter_C_RemoveSelectionFromGroup_Params params {};
		params.groupIndex = groupIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.UpdateCursorLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsX                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::UpdateCursorLocation(float AxisValue, bool IsX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.UpdateCursorLocation");
		
		ARTSControlCharacter_C_UpdateCursorLocation_Params params {};
		params.AxisValue = AxisValue;
		params.IsX = IsX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.CalcCursorOffset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UseOffsets                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CursorRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              X_Offset                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Y_Offset                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::CalcCursorOffset(bool* UseOffsets, float* CursorRotation, float* X_Offset, float* Y_Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.CalcCursorOffset");
		
		ARTSControlCharacter_C_CalcCursorOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UseOffsets != nullptr)
			*UseOffsets = params.UseOffsets;
		if (CursorRotation != nullptr)
			*CursorRotation = params.CursorRotation;
		if (X_Offset != nullptr)
			*X_Offset = params.X_Offset;
		if (Y_Offset != nullptr)
			*Y_Offset = params.Y_Offset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.DrawCursor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 ShooterHUD                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::DrawCursor(class AShooterHUD* ShooterHUD, float X, float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.DrawCursor");
		
		ARTSControlCharacter_C_DrawCursor_Params params {};
		params.ShooterHUD = ShooterHUD;
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.BPHandleUseButtonPress
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    RiderController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARTSControlCharacter_C::BPHandleUseButtonPress(class AShooterPlayerController* RiderController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.BPHandleUseButtonPress");
		
		ARTSControlCharacter_C_BPHandleUseButtonPress_Params params {};
		params.RiderController = RiderController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideHeldItemSlot
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ItemSlot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::BPOverrideHeldItemSlot(int32_t ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideHeldItemSlot");
		
		ARTSControlCharacter_C_BPOverrideHeldItemSlot_Params params {};
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideReleaseItemSlot
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ItemSlot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::BPOverrideReleaseItemSlot(int32_t ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideReleaseItemSlot");
		
		ARTSControlCharacter_C_BPOverrideReleaseItemSlot_Params params {};
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideUseItemSlot
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ItemSlot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::BPOverrideUseItemSlot(int32_t ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideUseItemSlot");
		
		ARTSControlCharacter_C_BPOverrideUseItemSlot_Params params {};
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.TrimSelectedCharacters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARTSControlCharacter_C::TrimSelectedCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.TrimSelectedCharacters");
		
		ARTSControlCharacter_C_TrimSelectedCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.IsValidRTSControlLocatioon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWorld*                                      TheWorld                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     AtLoc                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterGameMode*                            TheGameMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    ShooterPC                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::IsValidRTSControlLocatioon(class UWorld* TheWorld, const struct FVector& AtLoc, class AShooterGameMode* TheGameMode, class AShooterPlayerController* ShooterPC, bool* bIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.IsValidRTSControlLocatioon");
		
		ARTSControlCharacter_C_IsValidRTSControlLocatioon_Params params {};
		params.TheWorld = TheWorld;
		params.AtLoc = AtLoc;
		params.TheGameMode = TheGameMode;
		params.ShooterPC = ShooterPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.Get ActorUnderCursor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::GetActorUnderCursor(class AActor** TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.Get ActorUnderCursor");
		
		ARTSControlCharacter_C_GetActorUnderCursor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetActor != nullptr)
			*TargetActor = params.TargetActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.BPLocalUnpossessed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARTSControlCharacter_C::BPLocalUnpossessed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.BPLocalUnpossessed");
		
		ARTSControlCharacter_C_BPLocalUnpossessed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.UnpossessThis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 ForController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::UnpossessThis(class AController* ForController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.UnpossessThis");
		
		ARTSControlCharacter_C_UnpossessThis_Params params {};
		params.ForController = ForController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.ReceivePossessed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.ReceivePossessed");
		
		ARTSControlCharacter_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARTSControlCharacter_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.BPTryMultiUse");
		
		ARTSControlCharacter_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.IsDinoOnScreen
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        dinoChar                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOnScreen                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::IsDinoOnScreen(class APrimalDinoCharacter* dinoChar, bool* bOnScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.IsDinoOnScreen");
		
		ARTSControlCharacter_C_IsDinoOnScreen_Params params {};
		params.dinoChar = dinoChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOnScreen != nullptr)
			*bOnScreen = params.bOnScreen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.SelectAllDinos
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARTSControlCharacter_C::SelectAllDinos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.SelectAllDinos");
		
		ARTSControlCharacter_C_SelectAllDinos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.CenterCameraOnSelection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARTSControlCharacter_C::CenterCameraOnSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.CenterCameraOnSelection");
		
		ARTSControlCharacter_C_CenterCameraOnSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARTSControlCharacter_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.ReceiveDestroyed");
		
		ARTSControlCharacter_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.ServerClearAllDinoSelections
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARTSControlCharacter_C::ServerClearAllDinoSelections()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.ServerClearAllDinoSelections");
		
		ARTSControlCharacter_C_ServerClearAllDinoSelections_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.ServerSetDinoSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        theDino                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSelected                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::ServerSetDinoSelected(class APrimalDinoCharacter* theDino, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.ServerSetDinoSelected");
		
		ARTSControlCharacter_C_ServerSetDinoSelected_Params params {};
		params.theDino = theDino;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.NetServerReceiveSelectedCharacters
	 * 		Flags  -> (Net, NetReliable, Public, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalDinoCharacter*>                SelectedChars                                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ARTSControlCharacter_C::NetServerReceiveSelectedCharacters(TArray<class APrimalDinoCharacter*>* SelectedChars)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.NetServerReceiveSelectedCharacters");
		
		ARTSControlCharacter_C_NetServerReceiveSelectedCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedChars != nullptr)
			*SelectedChars = params.SelectedChars;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.Draw Actor Selection Box
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           thePC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UCanvas*                                     thecanvas                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ACharacter*                                  TheTargetChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                DrawColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::DrawActorSelectionBox(class APlayerController* thePC, class UCanvas* thecanvas, class ACharacter* TheTargetChar, const struct FLinearColor& DrawColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.Draw Actor Selection Box");
		
		ARTSControlCharacter_C_DrawActorSelectionBox_Params params {};
		params.thePC = thePC;
		params.thecanvas = thecanvas;
		params.TheTargetChar = TheTargetChar;
		params.DrawColor = DrawColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.UseDinoSelectionGroup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            groupIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::UseDinoSelectionGroup(int32_t groupIndex, bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.UseDinoSelectionGroup");
		
		ARTSControlCharacter_C_UseDinoSelectionGroup_Params params {};
		params.groupIndex = groupIndex;
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.GetCurrentWorldPointUnderCursor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     OutPoint                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::GetCurrentWorldPointUnderCursor(struct FVector* OutPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.GetCurrentWorldPointUnderCursor");
		
		ARTSControlCharacter_C_GetCurrentWorldPointUnderCursor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPoint != nullptr)
			*OutPoint = params.OutPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.SelectionReleased
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARTSControlCharacter_C::SelectionReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.SelectionReleased");
		
		ARTSControlCharacter_C_SelectionReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.SelectionPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARTSControlCharacter_C::SelectionPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.SelectionPressed");
		
		ARTSControlCharacter_C_SelectionPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.OrderPressed
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ARTSControlCharacter_C::OrderPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.OrderPressed");
		
		ARTSControlCharacter_C_OrderPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.GetPointOrTargetUnderCursor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetPoint                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      TheTargetActor                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::GetPointOrTargetUnderCursor(struct FVector* TargetPoint, class AActor** TheTargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.GetPointOrTargetUnderCursor");
		
		ARTSControlCharacter_C_GetPointOrTargetUnderCursor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetPoint != nullptr)
			*TargetPoint = params.TargetPoint;
		if (TheTargetActor != nullptr)
			*TheTargetActor = params.TheTargetActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.BPLocalPossessedBy
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ByController                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::BPLocalPossessedBy(class APlayerController* ByController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.BPLocalPossessedBy");
		
		ARTSControlCharacter_C_BPLocalPossessedBy_Params params {};
		params.ByController = ByController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.UpdateLocalPlayer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ARTSControlCharacter_C::UpdateLocalPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.UpdateLocalPlayer");
		
		ARTSControlCharacter_C_UpdateLocalPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.IsDinoValidToPossess
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        DinoToPossess                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::IsDinoValidToPossess(class APrimalDinoCharacter* DinoToPossess, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.IsDinoValidToPossess");
		
		ARTSControlCharacter_C_IsDinoValidToPossess_Params params {};
		params.DinoToPossess = DinoToPossess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.GetDinoUnderCursor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        OutDino                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::GetDinoUnderCursor(class APrimalDinoCharacter** OutDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.GetDinoUnderCursor");
		
		ARTSControlCharacter_C_GetDinoUnderCursor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDino != nullptr)
			*OutDino = params.OutDino;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.ReceiveTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.ReceiveTick");
		
		ARTSControlCharacter_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.BlueprintDrawFloatingHUD
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.BlueprintDrawFloatingHUD");
		
		ARTSControlCharacter_C_BlueprintDrawFloatingHUD_Params params {};
		params.HUD = HUD;
		params.CenterX = CenterX;
		params.CenterY = CenterY;
		params.DrawScale = DrawScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideCameraViewTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CurrentCameraMode                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     DesiredCameraLocation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    DesiredCameraRotation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DesiredFOV                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraLocation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     CameraLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraRotation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    CameraRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraFOV                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CameraFOV                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.BPOverrideCameraViewTarget");
		
		ARTSControlCharacter_C_BPOverrideCameraViewTarget_Params params {};
		params.CurrentCameraMode = CurrentCameraMode;
		params.DesiredCameraLocation = DesiredCameraLocation;
		params.DesiredCameraRotation = DesiredCameraRotation;
		params.DesiredFOV = DesiredFOV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOverrideCameraLocation != nullptr)
			*bOverrideCameraLocation = params.bOverrideCameraLocation;
		if (CameraLocation != nullptr)
			*CameraLocation = params.CameraLocation;
		if (bOverrideCameraRotation != nullptr)
			*bOverrideCameraRotation = params.bOverrideCameraRotation;
		if (CameraRotation != nullptr)
			*CameraRotation = params.CameraRotation;
		if (bOverrideCameraFOV != nullptr)
			*bOverrideCameraFOV = params.bOverrideCameraFOV;
		if (CameraFOV != nullptr)
			*CameraFOV = params.CameraFOV;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARTSControlCharacter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.UserConstructionScript");
		
		ARTSControlCharacter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ZoomIn_K2Node_InputActionEvent_398
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_ZoomIn_K2Node_InputActionEvent_398()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ZoomIn_K2Node_InputActionEvent_398");
		
		ARTSControlCharacter_C_InpActEvt_ZoomIn_K2Node_InputActionEvent_398_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ZoomOut_K2Node_InputActionEvent_397
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_ZoomOut_K2Node_InputActionEvent_397()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ZoomOut_K2Node_InputActionEvent_397");
		
		ARTSControlCharacter_C_InpActEvt_ZoomOut_K2Node_InputActionEvent_397_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_84
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_LeftShift_K2Node_InputKeyEvent_84()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_84");
		
		ARTSControlCharacter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_84_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_83
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_LeftShift_K2Node_InputKeyEvent_83()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_83");
		
		ARTSControlCharacter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_83_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem1_K2Node_InputActionEvent_396
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem1_K2Node_InputActionEvent_396()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem1_K2Node_InputActionEvent_396");
		
		ARTSControlCharacter_C_InpActEvt_UseItem1_K2Node_InputActionEvent_396_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem1_K2Node_InputActionEvent_395
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem1_K2Node_InputActionEvent_395()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem1_K2Node_InputActionEvent_395");
		
		ARTSControlCharacter_C_InpActEvt_UseItem1_K2Node_InputActionEvent_395_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem2_K2Node_InputActionEvent_394
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem2_K2Node_InputActionEvent_394()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem2_K2Node_InputActionEvent_394");
		
		ARTSControlCharacter_C_InpActEvt_UseItem2_K2Node_InputActionEvent_394_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem2_K2Node_InputActionEvent_393
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem2_K2Node_InputActionEvent_393()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem2_K2Node_InputActionEvent_393");
		
		ARTSControlCharacter_C_InpActEvt_UseItem2_K2Node_InputActionEvent_393_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem3_K2Node_InputActionEvent_392
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem3_K2Node_InputActionEvent_392()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem3_K2Node_InputActionEvent_392");
		
		ARTSControlCharacter_C_InpActEvt_UseItem3_K2Node_InputActionEvent_392_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem3_K2Node_InputActionEvent_391
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem3_K2Node_InputActionEvent_391()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem3_K2Node_InputActionEvent_391");
		
		ARTSControlCharacter_C_InpActEvt_UseItem3_K2Node_InputActionEvent_391_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem4_K2Node_InputActionEvent_390
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem4_K2Node_InputActionEvent_390()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem4_K2Node_InputActionEvent_390");
		
		ARTSControlCharacter_C_InpActEvt_UseItem4_K2Node_InputActionEvent_390_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem4_K2Node_InputActionEvent_389
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem4_K2Node_InputActionEvent_389()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem4_K2Node_InputActionEvent_389");
		
		ARTSControlCharacter_C_InpActEvt_UseItem4_K2Node_InputActionEvent_389_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem5_K2Node_InputActionEvent_388
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem5_K2Node_InputActionEvent_388()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem5_K2Node_InputActionEvent_388");
		
		ARTSControlCharacter_C_InpActEvt_UseItem5_K2Node_InputActionEvent_388_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem5_K2Node_InputActionEvent_387
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem5_K2Node_InputActionEvent_387()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem5_K2Node_InputActionEvent_387");
		
		ARTSControlCharacter_C_InpActEvt_UseItem5_K2Node_InputActionEvent_387_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem6_K2Node_InputActionEvent_386
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem6_K2Node_InputActionEvent_386()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem6_K2Node_InputActionEvent_386");
		
		ARTSControlCharacter_C_InpActEvt_UseItem6_K2Node_InputActionEvent_386_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem6_K2Node_InputActionEvent_385
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem6_K2Node_InputActionEvent_385()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem6_K2Node_InputActionEvent_385");
		
		ARTSControlCharacter_C_InpActEvt_UseItem6_K2Node_InputActionEvent_385_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem7_K2Node_InputActionEvent_384
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem7_K2Node_InputActionEvent_384()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem7_K2Node_InputActionEvent_384");
		
		ARTSControlCharacter_C_InpActEvt_UseItem7_K2Node_InputActionEvent_384_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem7_K2Node_InputActionEvent_383
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem7_K2Node_InputActionEvent_383()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem7_K2Node_InputActionEvent_383");
		
		ARTSControlCharacter_C_InpActEvt_UseItem7_K2Node_InputActionEvent_383_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem8_K2Node_InputActionEvent_382
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem8_K2Node_InputActionEvent_382()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem8_K2Node_InputActionEvent_382");
		
		ARTSControlCharacter_C_InpActEvt_UseItem8_K2Node_InputActionEvent_382_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem8_K2Node_InputActionEvent_381
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem8_K2Node_InputActionEvent_381()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem8_K2Node_InputActionEvent_381");
		
		ARTSControlCharacter_C_InpActEvt_UseItem8_K2Node_InputActionEvent_381_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem9_K2Node_InputActionEvent_380
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem9_K2Node_InputActionEvent_380()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem9_K2Node_InputActionEvent_380");
		
		ARTSControlCharacter_C_InpActEvt_UseItem9_K2Node_InputActionEvent_380_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem9_K2Node_InputActionEvent_379
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem9_K2Node_InputActionEvent_379()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem9_K2Node_InputActionEvent_379");
		
		ARTSControlCharacter_C_InpActEvt_UseItem9_K2Node_InputActionEvent_379_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_378
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_378()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_378");
		
		ARTSControlCharacter_C_InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_378_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCancelOrder_K2Node_InputActionEvent_377
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsCancelOrder_K2Node_InputActionEvent_377()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCancelOrder_K2Node_InputActionEvent_377");
		
		ARTSControlCharacter_C_InpActEvt_RtsCancelOrder_K2Node_InputActionEvent_377_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsIssueOrder_K2Node_InputActionEvent_376
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsIssueOrder_K2Node_InputActionEvent_376()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsIssueOrder_K2Node_InputActionEvent_376");
		
		ARTSControlCharacter_C_InpActEvt_RtsIssueOrder_K2Node_InputActionEvent_376_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCenterOnPlayer_K2Node_InputActionEvent_375
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsCenterOnPlayer_K2Node_InputActionEvent_375()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCenterOnPlayer_K2Node_InputActionEvent_375");
		
		ARTSControlCharacter_C_InpActEvt_RtsCenterOnPlayer_K2Node_InputActionEvent_375_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCenterOnSelection_K2Node_InputActionEvent_374
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsCenterOnSelection_K2Node_InputActionEvent_374()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsCenterOnSelection_K2Node_InputActionEvent_374");
		
		ARTSControlCharacter_C_InpActEvt_RtsCenterOnSelection_K2Node_InputActionEvent_374_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_82
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_82()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_82");
		
		ARTSControlCharacter_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_82_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_81
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_81()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_81");
		
		ARTSControlCharacter_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_81_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_373
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_373()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_373");
		
		ARTSControlCharacter_C_InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_373_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_372
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_372()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_372");
		
		ARTSControlCharacter_C_InpActEvt_RtsSelectUnit_K2Node_InputActionEvent_372_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem10_K2Node_InputActionEvent_371
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem10_K2Node_InputActionEvent_371()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem10_K2Node_InputActionEvent_371");
		
		ARTSControlCharacter_C_InpActEvt_UseItem10_K2Node_InputActionEvent_371_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem10_K2Node_InputActionEvent_370
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_UseItem10_K2Node_InputActionEvent_370()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_UseItem10_K2Node_InputActionEvent_370");
		
		ARTSControlCharacter_C_InpActEvt_UseItem10_K2Node_InputActionEvent_370_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_369
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_369()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_369");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_369_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_368
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_368()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_368");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftTrigger_K2Node_InputActionEvent_368_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_367
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_367()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_367");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_367_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_366
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_366()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_366");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_366_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_365
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_365()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_365");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_365_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_364
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_364()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_364");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadRightShoulder_K2Node_InputActionEvent_364_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_363
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_363()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_363");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_363_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_362
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_362()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_362");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceLeft_K2Node_InputActionEvent_362_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_361
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_361()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_361");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_361_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_360
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_360()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_360");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceRight_K2Node_InputActionEvent_360_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_359
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_359()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_359");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_359_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_358
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_358()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_358");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadDown_K2Node_InputActionEvent_358_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_357
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_357()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_357");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_357_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_356
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_356()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_356");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_356_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_355
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_355()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_355");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_355_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_354
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_354()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_354");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceTop_K2Node_InputActionEvent_354_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_353
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_353()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_353");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_353_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_352
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_352()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_352");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadLeft_K2Node_InputActionEvent_352_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_351
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_351()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_351");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_351_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_350
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_350()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_350");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadDpadRight_K2Node_InputActionEvent_350_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_349
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_349()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_349");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_349_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_348
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_348()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_348");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadFaceBottom_K2Node_InputActionEvent_348_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftStick_K2Node_InputActionEvent_347
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadLeftStick_K2Node_InputActionEvent_347()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadLeftStick_K2Node_InputActionEvent_347");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadLeftStick_K2Node_InputActionEvent_347_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightStick_K2Node_InputActionEvent_346
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadRightStick_K2Node_InputActionEvent_346()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightStick_K2Node_InputActionEvent_346");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadRightStick_K2Node_InputActionEvent_346_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_345
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_345()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_345");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_345_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_344
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARTSControlCharacter_C::InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_344()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_344");
		
		ARTSControlCharacter_C_InpActEvt_RtsGamepadRightTrigger_K2Node_InputActionEvent_344_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_40
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_40(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_40");
		
		ARTSControlCharacter_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_40_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_52
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_52(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_52");
		
		ARTSControlCharacter_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_52_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_115
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::InpAxisEvt_MoveUp_K2Node_InputAxisEvent_115(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_115");
		
		ARTSControlCharacter_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_115_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.NetServerSetLoc
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     viewLoc                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::NetServerSetLoc(const struct FVector& viewLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.NetServerSetLoc");
		
		ARTSControlCharacter_C_NetServerSetLoc_Params params {};
		params.viewLoc = viewLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.NetServerRequestedDinoMoveTo
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     MoveToLoc                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::NetServerRequestedDinoMoveTo(class APrimalDinoCharacter* forCharacter, const struct FVector& MoveToLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.NetServerRequestedDinoMoveTo");
		
		ARTSControlCharacter_C_NetServerRequestedDinoMoveTo_Params params {};
		params.forCharacter = forCharacter;
		params.MoveToLoc = MoveToLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.NetServerRequestedDinoTarget
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      attackTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::NetServerRequestedDinoTarget(class APrimalDinoCharacter* forCharacter, class AActor* attackTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.NetServerRequestedDinoTarget");
		
		ARTSControlCharacter_C_NetServerRequestedDinoTarget_Params params {};
		params.forCharacter = forCharacter;
		params.attackTarget = attackTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.ServerDinosStopAndHold
	 * 		Flags  -> (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalDinoCharacter*>                Dinos                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::ServerDinosStopAndHold(TArray<class APrimalDinoCharacter*>* Dinos, bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.ServerDinosStopAndHold");
		
		ARTSControlCharacter_C_ServerDinosStopAndHold_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dinos != nullptr)
			*Dinos = params.Dinos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.SetDinoGroup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARTSControlCharacter_C::SetDinoGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.SetDinoGroup");
		
		ARTSControlCharacter_C_SetDinoGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.RequestExit
	 * 		Flags  -> (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FDinoSelectionGroup>                 Groups                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ARTSControlCharacter_C::RequestExit(TArray<struct FDinoSelectionGroup>* Groups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.RequestExit");
		
		ARTSControlCharacter_C_RequestExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Groups != nullptr)
			*Groups = params.Groups;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_111
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::InpAxisEvt_TurnRate_K2Node_InputAxisEvent_111(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_111");
		
		ARTSControlCharacter_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_111_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_118
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_118(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_118");
		
		ARTSControlCharacter_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_118_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_132
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_132(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_132");
		
		ARTSControlCharacter_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_132_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_163
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_163(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_163");
		
		ARTSControlCharacter_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_163_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.ClientSetSelectionsEvent
	 * 		Flags  -> (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FDinoSelectionGroup>                 Groups                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class APrimalDinoCharacter*>                Selected                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ARTSControlCharacter_C::ClientSetSelectionsEvent(TArray<struct FDinoSelectionGroup>* Groups, TArray<class APrimalDinoCharacter*>* Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.ClientSetSelectionsEvent");
		
		ARTSControlCharacter_C_ClientSetSelectionsEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Groups != nullptr)
			*Groups = params.Groups;
		if (Selected != nullptr)
			*Selected = params.Selected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.SetGroupsOnServerEvent
	 * 		Flags  -> (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FDinoSelectionGroup>                 Groups                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ARTSControlCharacter_C::SetGroupsOnServerEvent(TArray<struct FDinoSelectionGroup>* Groups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.SetGroupsOnServerEvent");
		
		ARTSControlCharacter_C_SetGroupsOnServerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Groups != nullptr)
			*Groups = params.Groups;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function RTSControlCharacter.RTSControlCharacter_C.ExecuteUbergraph_RTSControlCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARTSControlCharacter_C::ExecuteUbergraph_RTSControlCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTSControlCharacter.RTSControlCharacter_C.ExecuteUbergraph_RTSControlCharacter");
		
		ARTSControlCharacter_C_ExecuteUbergraph_RTSControlCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARTSControlCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARTSControlCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RTSControlCharacter.RTSControlCharacter_C");
		return ptr;
	}

}


