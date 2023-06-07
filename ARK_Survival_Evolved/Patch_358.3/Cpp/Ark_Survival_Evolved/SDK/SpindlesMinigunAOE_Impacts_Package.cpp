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
	 * 		Name   -> Function SpindlesMinigunAOE_Impacts.SpindlesMinigunAOE_Impacts_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindlesMinigunAOE_Impacts_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpindlesMinigunAOE_Impacts.SpindlesMinigunAOE_Impacts_C.UserConstructionScript");
		
		ASpindlesMinigunAOE_Impacts_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpindlesMinigunAOE_Impacts.SpindlesMinigunAOE_Impacts_C.ExecuteUbergraph_SpindlesMinigunAOE_Impacts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindlesMinigunAOE_Impacts_C::ExecuteUbergraph_SpindlesMinigunAOE_Impacts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpindlesMinigunAOE_Impacts.SpindlesMinigunAOE_Impacts_C.ExecuteUbergraph_SpindlesMinigunAOE_Impacts");
		
		ASpindlesMinigunAOE_Impacts_C_ExecuteUbergraph_SpindlesMinigunAOE_Impacts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpindlesMinigunAOE_Impacts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpindlesMinigunAOE_Impacts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpindlesMinigunAOE_Impacts.SpindlesMinigunAOE_Impacts_C");
		return ptr;
	}

}


