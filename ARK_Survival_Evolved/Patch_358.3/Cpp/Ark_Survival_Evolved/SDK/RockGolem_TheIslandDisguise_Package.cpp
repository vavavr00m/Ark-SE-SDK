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
	 * 		Name   -> Function RockGolem_TheIslandDisguise.RockGolem_TheIslandDisguise_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockGolem_TheIslandDisguise_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_TheIslandDisguise.RockGolem_TheIslandDisguise_C.UserConstructionScript");
		
		ARockGolem_TheIslandDisguise_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_TheIslandDisguise.RockGolem_TheIslandDisguise_C.ExecuteUbergraph_RockGolem_TheIslandDisguise
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockGolem_TheIslandDisguise_C::ExecuteUbergraph_RockGolem_TheIslandDisguise(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_TheIslandDisguise.RockGolem_TheIslandDisguise_C.ExecuteUbergraph_RockGolem_TheIslandDisguise");
		
		ARockGolem_TheIslandDisguise_C_ExecuteUbergraph_RockGolem_TheIslandDisguise_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARockGolem_TheIslandDisguise_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARockGolem_TheIslandDisguise_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RockGolem_TheIslandDisguise.RockGolem_TheIslandDisguise_C");
		return ptr;
	}

}


