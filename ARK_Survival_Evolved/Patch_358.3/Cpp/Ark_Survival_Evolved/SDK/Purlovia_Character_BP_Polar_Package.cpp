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
	 * 		Name   -> Function Purlovia_Character_BP_Polar.Purlovia_Character_BP_Polar_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APurlovia_Character_BP_Polar_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP_Polar.Purlovia_Character_BP_Polar_C.UserConstructionScript");
		
		APurlovia_Character_BP_Polar_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Purlovia_Character_BP_Polar.Purlovia_Character_BP_Polar_C.ExecuteUbergraph_Purlovia_Character_BP_Polar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APurlovia_Character_BP_Polar_C::ExecuteUbergraph_Purlovia_Character_BP_Polar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP_Polar.Purlovia_Character_BP_Polar_C.ExecuteUbergraph_Purlovia_Character_BP_Polar");
		
		APurlovia_Character_BP_Polar_C_ExecuteUbergraph_Purlovia_Character_BP_Polar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APurlovia_Character_BP_Polar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APurlovia_Character_BP_Polar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Purlovia_Character_BP_Polar.Purlovia_Character_BP_Polar_C");
		return ptr;
	}

}


