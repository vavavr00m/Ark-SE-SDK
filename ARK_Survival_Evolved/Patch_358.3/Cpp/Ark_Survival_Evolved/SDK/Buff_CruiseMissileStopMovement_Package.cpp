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
	 * 		Name   -> Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_CruiseMissileStopMovement_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.ReceiveBeginPlay");
		
		ABuff_CruiseMissileStopMovement_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.BPPreventInstigatorMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_CruiseMissileStopMovement_C::BPPreventInstigatorMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.BPPreventInstigatorMovementMode");
		
		ABuff_CruiseMissileStopMovement_C_BPPreventInstigatorMovementMode_Params params {};
		params.NewMovementMode = NewMovementMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CruiseMissileStopMovement_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.BuffTickServer");
		
		ABuff_CruiseMissileStopMovement_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.BPHandleOnStartFire
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromGamepad                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CruiseMissileStopMovement_C::BPHandleOnStartFire(bool bFromGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.BPHandleOnStartFire");
		
		ABuff_CruiseMissileStopMovement_C_BPHandleOnStartFire_Params params {};
		params.bFromGamepad = bFromGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_CruiseMissileStopMovement_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.UserConstructionScript");
		
		ABuff_CruiseMissileStopMovement_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.ExecuteUbergraph_Buff_CruiseMissileStopMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CruiseMissileStopMovement_C::ExecuteUbergraph_Buff_CruiseMissileStopMovement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C.ExecuteUbergraph_Buff_CruiseMissileStopMovement");
		
		ABuff_CruiseMissileStopMovement_C_ExecuteUbergraph_Buff_CruiseMissileStopMovement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_CruiseMissileStopMovement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_CruiseMissileStopMovement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_CruiseMissileStopMovement.Buff_CruiseMissileStopMovement_C");
		return ptr;
	}

}


