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
	 * 		Name   -> Function GiantTurtle_Piranha_AIController_BP.GiantTurtle_Piranha_AIController_BP_C.ChangedAITarget
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Piranha_AIController_BP_C::ChangedAITarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Piranha_AIController_BP.GiantTurtle_Piranha_AIController_BP_C.ChangedAITarget");
		
		AGiantTurtle_Piranha_AIController_BP_C_ChangedAITarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Piranha_AIController_BP.GiantTurtle_Piranha_AIController_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGiantTurtle_Piranha_AIController_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Piranha_AIController_BP.GiantTurtle_Piranha_AIController_BP_C.UserConstructionScript");
		
		AGiantTurtle_Piranha_AIController_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GiantTurtle_Piranha_AIController_BP.GiantTurtle_Piranha_AIController_BP_C.ExecuteUbergraph_GiantTurtle_Piranha_AIController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGiantTurtle_Piranha_AIController_BP_C::ExecuteUbergraph_GiantTurtle_Piranha_AIController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GiantTurtle_Piranha_AIController_BP.GiantTurtle_Piranha_AIController_BP_C.ExecuteUbergraph_GiantTurtle_Piranha_AIController_BP");
		
		AGiantTurtle_Piranha_AIController_BP_C_ExecuteUbergraph_GiantTurtle_Piranha_AIController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGiantTurtle_Piranha_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGiantTurtle_Piranha_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GiantTurtle_Piranha_AIController_BP.GiantTurtle_Piranha_AIController_BP_C");
		return ptr;
	}

}


