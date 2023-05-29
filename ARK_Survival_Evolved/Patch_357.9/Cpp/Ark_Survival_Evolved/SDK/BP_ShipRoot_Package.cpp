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
	 * 		Name   -> Function BP_ShipRoot.BP_ShipRoot_C.GetMatineeLengthsAndPlayRates
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   WarmUp                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   Loop                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   Cooldown                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ShipRoot_C::GetMatineeLengthsAndPlayRates(struct FVector2D* WarmUp, struct FVector2D* Loop, struct FVector2D* Cooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShipRoot.BP_ShipRoot_C.GetMatineeLengthsAndPlayRates");
		
		ABP_ShipRoot_C_GetMatineeLengthsAndPlayRates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WarmUp != nullptr)
			*WarmUp = params.WarmUp;
		if (Loop != nullptr)
			*Loop = params.Loop;
		if (Cooldown != nullptr)
			*Cooldown = params.Cooldown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BP_ShipRoot.BP_ShipRoot_C.BindDCM
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ShipRoot_C::BindDCM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShipRoot.BP_ShipRoot_C.BindDCM");
		
		ABP_ShipRoot_C_BindDCM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BP_ShipRoot.BP_ShipRoot_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ShipRoot_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShipRoot.BP_ShipRoot_C.UserConstructionScript");
		
		ABP_ShipRoot_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BP_ShipRoot.BP_ShipRoot_C.BindMatineeUpdateFromDCM
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ShipRoot_C::BindMatineeUpdateFromDCM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShipRoot.BP_ShipRoot_C.BindMatineeUpdateFromDCM");
		
		ABP_ShipRoot_C_BindMatineeUpdateFromDCM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BP_ShipRoot.BP_ShipRoot_C.OnDCMUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ShipRoot_C::OnDCMUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShipRoot.BP_ShipRoot_C.OnDCMUpdated");
		
		ABP_ShipRoot_C_OnDCMUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BP_ShipRoot.BP_ShipRoot_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ShipRoot_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShipRoot.BP_ShipRoot_C.ReceiveBeginPlay");
		
		ABP_ShipRoot_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BP_ShipRoot.BP_ShipRoot_C.RecieveMatineeUpdated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ShipRoot_C::RecieveMatineeUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShipRoot.BP_ShipRoot_C.RecieveMatineeUpdated");
		
		ABP_ShipRoot_C_RecieveMatineeUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BP_ShipRoot.BP_ShipRoot_C.ExecuteUbergraph_BP_ShipRoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ShipRoot_C::ExecuteUbergraph_BP_ShipRoot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShipRoot.BP_ShipRoot_C.ExecuteUbergraph_BP_ShipRoot");
		
		ABP_ShipRoot_C_ExecuteUbergraph_BP_ShipRoot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ShipRoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ShipRoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShipRoot.BP_ShipRoot_C");
		return ptr;
	}

}


