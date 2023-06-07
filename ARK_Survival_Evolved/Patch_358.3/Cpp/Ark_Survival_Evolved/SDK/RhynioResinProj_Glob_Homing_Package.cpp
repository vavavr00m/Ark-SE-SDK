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
	 * 		Name   -> Function RhynioResinProj_Glob_Homing.RhynioResinProj_Glob_Homing_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynioResinProj_Glob_Homing_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RhynioResinProj_Glob_Homing.RhynioResinProj_Glob_Homing_C.ReceiveDestroyed");
		
		ARhynioResinProj_Glob_Homing_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RhynioResinProj_Glob_Homing.RhynioResinProj_Glob_Homing_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynioResinProj_Glob_Homing_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RhynioResinProj_Glob_Homing.RhynioResinProj_Glob_Homing_C.ReceiveBeginPlay");
		
		ARhynioResinProj_Glob_Homing_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RhynioResinProj_Glob_Homing.RhynioResinProj_Glob_Homing_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynioResinProj_Glob_Homing_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RhynioResinProj_Glob_Homing.RhynioResinProj_Glob_Homing_C.UserConstructionScript");
		
		ARhynioResinProj_Glob_Homing_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RhynioResinProj_Glob_Homing.RhynioResinProj_Glob_Homing_C.ExecuteUbergraph_RhynioResinProj_Glob_Homing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynioResinProj_Glob_Homing_C::ExecuteUbergraph_RhynioResinProj_Glob_Homing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RhynioResinProj_Glob_Homing.RhynioResinProj_Glob_Homing_C.ExecuteUbergraph_RhynioResinProj_Glob_Homing");
		
		ARhynioResinProj_Glob_Homing_C_ExecuteUbergraph_RhynioResinProj_Glob_Homing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARhynioResinProj_Glob_Homing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARhynioResinProj_Glob_Homing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RhynioResinProj_Glob_Homing.RhynioResinProj_Glob_Homing_C");
		return ptr;
	}

}


