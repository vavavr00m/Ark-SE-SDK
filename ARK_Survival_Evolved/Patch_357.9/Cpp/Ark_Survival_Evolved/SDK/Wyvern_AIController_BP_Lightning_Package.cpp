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
	 * 		Name   -> Function Wyvern_AIController_BP_Lightning.Wyvern_AIController_BP_Lightning_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWyvern_AIController_BP_Lightning_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_AIController_BP_Lightning.Wyvern_AIController_BP_Lightning_C.UserConstructionScript");
		
		AWyvern_AIController_BP_Lightning_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Wyvern_AIController_BP_Lightning.Wyvern_AIController_BP_Lightning_C.ExecuteUbergraph_Wyvern_AIController_BP_Lightning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWyvern_AIController_BP_Lightning_C::ExecuteUbergraph_Wyvern_AIController_BP_Lightning(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Wyvern_AIController_BP_Lightning.Wyvern_AIController_BP_Lightning_C.ExecuteUbergraph_Wyvern_AIController_BP_Lightning");
		
		AWyvern_AIController_BP_Lightning_C_ExecuteUbergraph_Wyvern_AIController_BP_Lightning_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWyvern_AIController_BP_Lightning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWyvern_AIController_BP_Lightning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Wyvern_AIController_BP_Lightning.Wyvern_AIController_BP_Lightning_C");
		return ptr;
	}

}


