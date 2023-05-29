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
	 * 		Name   -> Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Strider_BodyVFX_Parent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.ReceiveBeginPlay");
		
		ABuff_Strider_BodyVFX_Parent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.deactivate cloak mat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Strider_BodyVFX_Parent_C::deactivatecloakmat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.deactivate cloak mat");
		
		ABuff_Strider_BodyVFX_Parent_C_deactivatecloakmat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.activate cloak mat
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Strider_BodyVFX_Parent_C::activatecloakmat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.activate cloak mat");
		
		ABuff_Strider_BodyVFX_Parent_C_activatecloakmat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Strider_BodyVFX_Parent_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.BuffTickClient");
		
		ABuff_Strider_BodyVFX_Parent_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.OnRep_is camo active
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Strider_BodyVFX_Parent_C::OnRep_iscamoactive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.OnRep_is camo active");
		
		ABuff_Strider_BodyVFX_Parent_C_OnRep_iscamoactive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Strider_BodyVFX_Parent_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.BPDeactivated");
		
		ABuff_Strider_BodyVFX_Parent_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Strider_BodyVFX_Parent_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.UserConstructionScript");
		
		ABuff_Strider_BodyVFX_Parent_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Strider_BodyVFX_Parent_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.Timeline_0__FinishedFunc");
		
		ABuff_Strider_BodyVFX_Parent_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_Strider_BodyVFX_Parent_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.Timeline_0__UpdateFunc");
		
		ABuff_Strider_BodyVFX_Parent_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.Play_FadeCamo_LFL
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Strider_BodyVFX_Parent_C::Play_FadeCamo_LFL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.Play_FadeCamo_LFL");
		
		ABuff_Strider_BodyVFX_Parent_C_Play_FadeCamo_LFL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.Reverse_FadeCamo_LFL
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Strider_BodyVFX_Parent_C::Reverse_FadeCamo_LFL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.Reverse_FadeCamo_LFL");
		
		ABuff_Strider_BodyVFX_Parent_C_Reverse_FadeCamo_LFL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.Multi_PlayFade
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Strider_BodyVFX_Parent_C::Multi_PlayFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.Multi_PlayFade");
		
		ABuff_Strider_BodyVFX_Parent_C_Multi_PlayFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.Multi_PlayFade_reverse
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Strider_BodyVFX_Parent_C::Multi_PlayFade_reverse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.Multi_PlayFade_reverse");
		
		ABuff_Strider_BodyVFX_Parent_C_Multi_PlayFade_reverse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.ExecuteUbergraph_Buff_Strider_BodyVFX_Parent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Strider_BodyVFX_Parent_C::ExecuteUbergraph_Buff_Strider_BodyVFX_Parent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C.ExecuteUbergraph_Buff_Strider_BodyVFX_Parent");
		
		ABuff_Strider_BodyVFX_Parent_C_ExecuteUbergraph_Buff_Strider_BodyVFX_Parent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Strider_BodyVFX_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Strider_BodyVFX_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Strider_BodyVFX_Parent.Buff_Strider_BodyVFX_Parent_C");
		return ptr;
	}

}


