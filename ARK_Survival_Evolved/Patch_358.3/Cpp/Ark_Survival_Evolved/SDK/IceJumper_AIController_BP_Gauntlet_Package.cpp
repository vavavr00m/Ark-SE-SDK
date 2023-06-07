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
	 * 		Name   -> Function IceJumper_AIController_BP_Gauntlet.IceJumper_AIController_BP_Gauntlet_C.UpdateMelee
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_AIController_BP_Gauntlet_C::UpdateMelee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP_Gauntlet.IceJumper_AIController_BP_Gauntlet_C.UpdateMelee");
		
		AIceJumper_AIController_BP_Gauntlet_C_UpdateMelee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function IceJumper_AIController_BP_Gauntlet.IceJumper_AIController_BP_Gauntlet_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIceJumper_AIController_BP_Gauntlet_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP_Gauntlet.IceJumper_AIController_BP_Gauntlet_C.UserConstructionScript");
		
		AIceJumper_AIController_BP_Gauntlet_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function IceJumper_AIController_BP_Gauntlet.IceJumper_AIController_BP_Gauntlet_C.ExecuteUbergraph_IceJumper_AIController_BP_Gauntlet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIceJumper_AIController_BP_Gauntlet_C::ExecuteUbergraph_IceJumper_AIController_BP_Gauntlet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IceJumper_AIController_BP_Gauntlet.IceJumper_AIController_BP_Gauntlet_C.ExecuteUbergraph_IceJumper_AIController_BP_Gauntlet");
		
		AIceJumper_AIController_BP_Gauntlet_C_ExecuteUbergraph_IceJumper_AIController_BP_Gauntlet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIceJumper_AIController_BP_Gauntlet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIceJumper_AIController_BP_Gauntlet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IceJumper_AIController_BP_Gauntlet.IceJumper_AIController_BP_Gauntlet_C");
		return ptr;
	}

}


