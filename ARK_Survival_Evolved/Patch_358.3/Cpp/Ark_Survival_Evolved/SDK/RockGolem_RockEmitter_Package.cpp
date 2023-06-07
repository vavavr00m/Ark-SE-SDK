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
	 * 		Name   -> Function RockGolem_RockEmitter.RockGolem_RockEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockGolem_RockEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_RockEmitter.RockGolem_RockEmitter_C.UserConstructionScript");
		
		ARockGolem_RockEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_RockEmitter.RockGolem_RockEmitter_C.ExecuteUbergraph_RockGolem_RockEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockGolem_RockEmitter_C::ExecuteUbergraph_RockGolem_RockEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_RockEmitter.RockGolem_RockEmitter_C.ExecuteUbergraph_RockGolem_RockEmitter");
		
		ARockGolem_RockEmitter_C_ExecuteUbergraph_RockGolem_RockEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARockGolem_RockEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARockGolem_RockEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RockGolem_RockEmitter.RockGolem_RockEmitter_C");
		return ptr;
	}

}


