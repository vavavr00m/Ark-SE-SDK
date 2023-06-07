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
	 * 		Name   -> Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeap_MammothDrumSticks_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.ReceiveDestroyed");
		
		AWeap_MammothDrumSticks_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.ClearDrumSticks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeap_MammothDrumSticks_C::ClearDrumSticks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.ClearDrumSticks");
		
		AWeap_MammothDrumSticks_C_ClearDrumSticks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.BPStartEquippedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeap_MammothDrumSticks_C::BPStartEquippedNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.BPStartEquippedNotify");
		
		AWeap_MammothDrumSticks_C_BPStartEquippedNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.StartUnequipEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeap_MammothDrumSticks_C::StartUnequipEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.StartUnequipEvent");
		
		AWeap_MammothDrumSticks_C_StartUnequipEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeap_MammothDrumSticks_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.UserConstructionScript");
		
		AWeap_MammothDrumSticks_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.ExecuteUbergraph_Weap_MammothDrumSticks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeap_MammothDrumSticks_C::ExecuteUbergraph_Weap_MammothDrumSticks(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.ExecuteUbergraph_Weap_MammothDrumSticks");
		
		AWeap_MammothDrumSticks_C_ExecuteUbergraph_Weap_MammothDrumSticks_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeap_MammothDrumSticks_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeap_MammothDrumSticks_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weap_MammothDrumSticks.Weap_MammothDrumSticks_C");
		return ptr;
	}

}


