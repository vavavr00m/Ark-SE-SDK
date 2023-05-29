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
	 * 		Name   -> Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FenrirDirewolfBoost_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.BuffTickServer");
		
		ABuff_FenrirDirewolfBoost_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.UpdateParticleColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FenrirDirewolfBoost_C::UpdateParticleColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.UpdateParticleColor");
		
		ABuff_FenrirDirewolfBoost_C_UpdateParticleColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FenrirDirewolfBoost_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.UserConstructionScript");
		
		ABuff_FenrirDirewolfBoost_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_FenrirDirewolfBoost_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.ReceiveBeginPlay");
		
		ABuff_FenrirDirewolfBoost_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.ExecuteUbergraph_Buff_FenrirDirewolfBoost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_FenrirDirewolfBoost_C::ExecuteUbergraph_Buff_FenrirDirewolfBoost(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C.ExecuteUbergraph_Buff_FenrirDirewolfBoost");
		
		ABuff_FenrirDirewolfBoost_C_ExecuteUbergraph_Buff_FenrirDirewolfBoost_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_FenrirDirewolfBoost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_FenrirDirewolfBoost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C");
		return ptr;
	}

}


