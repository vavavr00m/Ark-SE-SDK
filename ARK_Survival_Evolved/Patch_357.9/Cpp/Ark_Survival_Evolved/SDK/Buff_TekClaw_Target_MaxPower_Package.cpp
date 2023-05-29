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
	 * 		Name   -> Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekClaw_Target_MaxPower_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.ReceiveDestroyed");
		
		ABuff_TekClaw_Target_MaxPower_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekClaw_Target_MaxPower_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.BPSetupForInstigator");
		
		ABuff_TekClaw_Target_MaxPower_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekClaw_Target_MaxPower_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.UserConstructionScript");
		
		ABuff_TekClaw_Target_MaxPower_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.HideMesh
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hide                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekClaw_Target_MaxPower_C::HideMesh(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.HideMesh");
		
		ABuff_TekClaw_Target_MaxPower_C_HideMesh_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.ExecuteUbergraph_Buff_TekClaw_Target_MaxPower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekClaw_Target_MaxPower_C::ExecuteUbergraph_Buff_TekClaw_Target_MaxPower(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C.ExecuteUbergraph_Buff_TekClaw_Target_MaxPower");
		
		ABuff_TekClaw_Target_MaxPower_C_ExecuteUbergraph_Buff_TekClaw_Target_MaxPower_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekClaw_Target_MaxPower_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekClaw_Target_MaxPower_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekClaw_Target_MaxPower.Buff_TekClaw_Target_MaxPower_C");
		return ptr;
	}

}


