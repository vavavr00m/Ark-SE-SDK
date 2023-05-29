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
	 * 		Name   -> Function CrystalWyvern_AIController_BP_Aggressive.CrystalWyvern_AIController_BP_Aggressive_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_AIController_BP_Aggressive_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_AIController_BP_Aggressive.CrystalWyvern_AIController_BP_Aggressive_C.UserConstructionScript");
		
		ACrystalWyvern_AIController_BP_Aggressive_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function CrystalWyvern_AIController_BP_Aggressive.CrystalWyvern_AIController_BP_Aggressive_C.ExecuteUbergraph_CrystalWyvern_AIController_BP_Aggressive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvern_AIController_BP_Aggressive_C::ExecuteUbergraph_CrystalWyvern_AIController_BP_Aggressive(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_AIController_BP_Aggressive.CrystalWyvern_AIController_BP_Aggressive_C.ExecuteUbergraph_CrystalWyvern_AIController_BP_Aggressive");
		
		ACrystalWyvern_AIController_BP_Aggressive_C_ExecuteUbergraph_CrystalWyvern_AIController_BP_Aggressive_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACrystalWyvern_AIController_BP_Aggressive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACrystalWyvern_AIController_BP_Aggressive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvern_AIController_BP_Aggressive.CrystalWyvern_AIController_BP_Aggressive_C");
		return ptr;
	}

}


