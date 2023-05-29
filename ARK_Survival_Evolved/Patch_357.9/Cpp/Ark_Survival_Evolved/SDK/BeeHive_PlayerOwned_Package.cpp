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
	 * 		Name   -> Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABeeHive_PlayerOwned_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPTryMultiUse");
		
		ABeeHive_PlayerOwned_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPGetInfoFromConsumedItemForPlacedStructure
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 ItemToConsumed                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABeeHive_PlayerOwned_C::BPGetInfoFromConsumedItemForPlacedStructure(class UPrimalItem* ItemToConsumed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPGetInfoFromConsumedItemForPlacedStructure");
		
		ABeeHive_PlayerOwned_C_BPGetInfoFromConsumedItemForPlacedStructure_Params params {};
		params.ItemToConsumed = ItemToConsumed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPUpdateItemVisuals
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABeeHive_PlayerOwned_C::BPUpdateItemVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPUpdateItemVisuals");
		
		ABeeHive_PlayerOwned_C_BPUpdateItemVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABeeHive_PlayerOwned_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.BPUnstasis");
		
		ABeeHive_PlayerOwned_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABeeHive_PlayerOwned_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.UserConstructionScript");
		
		ABeeHive_PlayerOwned_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABeeHive_PlayerOwned_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.ReceiveBeginPlay");
		
		ABeeHive_PlayerOwned_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABeeHive_PlayerOwned_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.ReceiveDestroyed");
		
		ABeeHive_PlayerOwned_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.ExecuteUbergraph_BeeHive_PlayerOwned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABeeHive_PlayerOwned_C::ExecuteUbergraph_BeeHive_PlayerOwned(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BeeHive_PlayerOwned.BeeHive_PlayerOwned_C.ExecuteUbergraph_BeeHive_PlayerOwned");
		
		ABeeHive_PlayerOwned_C_ExecuteUbergraph_BeeHive_PlayerOwned_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABeeHive_PlayerOwned_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABeeHive_PlayerOwned_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BeeHive_PlayerOwned.BeeHive_PlayerOwned_C");
		return ptr;
	}

}


