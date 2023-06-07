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
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPClientDoMultiUse");
		
		ABuff_TekGrenadeLauncherHelper_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.Generate Slot Wheel Entries
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FCustomWheelEntry>                   Entries                                                    (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::GenerateSlotWheelEntries(TArray<struct FCustomWheelEntry>* Entries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.Generate Slot Wheel Entries");
		
		ABuff_TekGrenadeLauncherHelper_C_GenerateSlotWheelEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Entries != nullptr)
			*Entries = params.Entries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ABuff_TekGrenadeLauncherHelper_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPGetMultiUseEntries");
		
		ABuff_TekGrenadeLauncherHelper_C_BPGetMultiUseEntries_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiUseEntries != nullptr)
			*MultiUseEntries = params.MultiUseEntries;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ReceiveDestroyed");
		
		ABuff_TekGrenadeLauncherHelper_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPInstigatorDied
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::BPInstigatorDied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPInstigatorDied");
		
		ABuff_TekGrenadeLauncherHelper_C_BPInstigatorDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPHandleOnStartFire
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromGamepad                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::BPHandleOnStartFire(bool bFromGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPHandleOnStartFire");
		
		ABuff_TekGrenadeLauncherHelper_C_BPHandleOnStartFire_Params params {};
		params.bFromGamepad = bFromGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ShouldUpdateAmmoCount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForShooterChar                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bShouldUpdate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::ShouldUpdateAmmoCount(class APrimalCharacter* ForShooterChar, bool* bShouldUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ShouldUpdateAmmoCount");
		
		ABuff_TekGrenadeLauncherHelper_C_ShouldUpdateAmmoCount_Params params {};
		params.ForShooterChar = ForShooterChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldUpdate != nullptr)
			*bShouldUpdate = params.bShouldUpdate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.InitWeapon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::InitWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.InitWeapon");
		
		ABuff_TekGrenadeLauncherHelper_C_InitWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.AmmoNameToType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        AmmoTypeName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      AmmoType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::AmmoNameToType(const class FName& AmmoTypeName, class UClass** AmmoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.AmmoNameToType");
		
		ABuff_TekGrenadeLauncherHelper_C_AmmoNameToType_Params params {};
		params.AmmoTypeName = AmmoTypeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoType != nullptr)
			*AmmoType = params.AmmoType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GenerateAmmoWheelEntries
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FCustomWheelEntry>                   AmmoEntries                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::GenerateAmmoWheelEntries(TArray<struct FCustomWheelEntry>* AmmoEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GenerateAmmoWheelEntries");
		
		ABuff_TekGrenadeLauncherHelper_C_GenerateAmmoWheelEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoEntries != nullptr)
			*AmmoEntries = params.AmmoEntries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.Generate Slot Wheel EntriesMU
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMultiUseEntry>                      MuEntries                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::GenerateSlotWheelEntriesMU(TArray<struct FMultiUseEntry>* MuEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.Generate Slot Wheel EntriesMU");
		
		ABuff_TekGrenadeLauncherHelper_C_GenerateSlotWheelEntriesMU_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MuEntries != nullptr)
			*MuEntries = params.MuEntries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.CalcAmmoWidgetLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            InInt                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector2D ABuff_TekGrenadeLauncherHelper_C::CalcAmmoWidgetLocation(int32_t InInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.CalcAmmoWidgetLocation");
		
		ABuff_TekGrenadeLauncherHelper_C_CalcAmmoWidgetLocation_Params params {};
		params.InInt = InInt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GetItemShortName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      FromClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString ABuff_TekGrenadeLauncherHelper_C::GetItemShortName(class UClass* FromClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GetItemShortName");
		
		ABuff_TekGrenadeLauncherHelper_C_GetItemShortName_Params params {};
		params.FromClass = FromClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GetValidAmmoTypes
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              TypesInInventory                                           (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::GetValidAmmoTypes(TArray<class UClass*>* TypesInInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GetValidAmmoTypes");
		
		ABuff_TekGrenadeLauncherHelper_C_GetValidAmmoTypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TypesInInventory != nullptr)
			*TypesInInventory = params.TypesInInventory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.SyncHUDElementSlots
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::SyncHUDElementSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.SyncHUDElementSlots");
		
		ABuff_TekGrenadeLauncherHelper_C_SyncHUDElementSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ReceiveBeginPlay");
		
		ABuff_TekGrenadeLauncherHelper_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPGetHUDElements");
		
		ABuff_TekGrenadeLauncherHelper_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.UserConstructionScript");
		
		ABuff_TekGrenadeLauncherHelper_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.OnSlotSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::OnSlotSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.OnSlotSelected");
		
		ABuff_TekGrenadeLauncherHelper_C_OnSlotSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.OnAmmoTypeSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::OnAmmoTypeSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.OnAmmoTypeSelected");
		
		ABuff_TekGrenadeLauncherHelper_C_OnAmmoTypeSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ShowSlotSelectWheel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::ShowSlotSelectWheel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ShowSlotSelectWheel");
		
		ABuff_TekGrenadeLauncherHelper_C_ShowSlotSelectWheel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.HideSlotSelectWheel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::HideSlotSelectWheel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.HideSlotSelectWheel");
		
		ABuff_TekGrenadeLauncherHelper_C_HideSlotSelectWheel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.OnAmmoTypeUnloaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::OnAmmoTypeUnloaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.OnAmmoTypeUnloaded");
		
		ABuff_TekGrenadeLauncherHelper_C_OnAmmoTypeUnloaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ExecuteUbergraph_Buff_TekGrenadeLauncherHelper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekGrenadeLauncherHelper_C::ExecuteUbergraph_Buff_TekGrenadeLauncherHelper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ExecuteUbergraph_Buff_TekGrenadeLauncherHelper");
		
		ABuff_TekGrenadeLauncherHelper_C_ExecuteUbergraph_Buff_TekGrenadeLauncherHelper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekGrenadeLauncherHelper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekGrenadeLauncherHelper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C");
		return ptr;
	}

}


