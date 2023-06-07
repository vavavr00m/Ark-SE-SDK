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
	 * 		Name   -> Function AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargaSpike_Cold_TrailEmitter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C.ReceiveBeginPlay");
		
		AAmargaSpike_Cold_TrailEmitter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C.InWaterCheck
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargaSpike_Cold_TrailEmitter_C::InWaterCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C.InWaterCheck");
		
		AAmargaSpike_Cold_TrailEmitter_C_InWaterCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargaSpike_Cold_TrailEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C.UserConstructionScript");
		
		AAmargaSpike_Cold_TrailEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C.ExecuteUbergraph_AmargaSpike_Cold_TrailEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargaSpike_Cold_TrailEmitter_C::ExecuteUbergraph_AmargaSpike_Cold_TrailEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C.ExecuteUbergraph_AmargaSpike_Cold_TrailEmitter");
		
		AAmargaSpike_Cold_TrailEmitter_C_ExecuteUbergraph_AmargaSpike_Cold_TrailEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAmargaSpike_Cold_TrailEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmargaSpike_Cold_TrailEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C");
		return ptr;
	}

}


