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
	 * 		Name   -> Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPReactivateWithDamageCauser
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      ForDamageCauser                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_Tracker_C::BPReactivateWithDamageCauser(class AActor* ForInstigator, class AActor* ForDamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPReactivateWithDamageCauser");
		
		ABuff_BrainSlug_Tracker_C_BPReactivateWithDamageCauser_Params params {};
		params.ForInstigator = ForInstigator;
		params.ForDamageCauser = ForDamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_Tracker_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPDeactivated");
		
		ABuff_BrainSlug_Tracker_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_Tracker_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPClientDoMultiUse");
		
		ABuff_BrainSlug_Tracker_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.DrawBuffFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BuffIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_Tracker_C::DrawBuffFloatingHUD(int32_t BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.DrawBuffFloatingHUD");
		
		ABuff_BrainSlug_Tracker_C_DrawBuffFloatingHUD_Params params {};
		params.BuffIndex = BuffIndex;
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
	 * 		Name   -> Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ABuff_BrainSlug_Tracker_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPGetMultiUseEntries");
		
		ABuff_BrainSlug_Tracker_C_BPGetMultiUseEntries_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_Tracker_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BuffTickServer");
		
		ABuff_BrainSlug_Tracker_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlug_Tracker_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.UserConstructionScript");
		
		ABuff_BrainSlug_Tracker_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.Server_Deactivate
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlug_Tracker_C::Server_Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.Server_Deactivate");
		
		ABuff_BrainSlug_Tracker_C_Server_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlug_Tracker_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.ReceiveBeginPlay");
		
		ABuff_BrainSlug_Tracker_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.ExecuteUbergraph_Buff_BrainSlug_Tracker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_Tracker_C::ExecuteUbergraph_Buff_BrainSlug_Tracker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.ExecuteUbergraph_Buff_BrainSlug_Tracker");
		
		ABuff_BrainSlug_Tracker_C_ExecuteUbergraph_Buff_BrainSlug_Tracker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_BrainSlug_Tracker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_BrainSlug_Tracker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C");
		return ptr;
	}

}


