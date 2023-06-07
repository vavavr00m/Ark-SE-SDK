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
	 * 		Name   -> Function RhynioResinProj_Ball.RhynioResinProj_Ball_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynioResinProj_Ball_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RhynioResinProj_Ball.RhynioResinProj_Ball_C.UserConstructionScript");
		
		ARhynioResinProj_Ball_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RhynioResinProj_Ball.RhynioResinProj_Ball_C.ExecuteUbergraph_RhynioResinProj_Ball
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynioResinProj_Ball_C::ExecuteUbergraph_RhynioResinProj_Ball(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RhynioResinProj_Ball.RhynioResinProj_Ball_C.ExecuteUbergraph_RhynioResinProj_Ball");
		
		ARhynioResinProj_Ball_C_ExecuteUbergraph_RhynioResinProj_Ball_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARhynioResinProj_Ball_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARhynioResinProj_Ball_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RhynioResinProj_Ball.RhynioResinProj_Ball_C");
		return ptr;
	}

}


