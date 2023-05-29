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
	 * 		Name   -> Function DinoSettings_Pescavore_Small_Pela.DinoSettings_Pescavore_Small_Pela_C.ExecuteUbergraph_DinoSettings_Pescavore_Small_Pela
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSettings_Pescavore_Small_Pela_C::ExecuteUbergraph_DinoSettings_Pescavore_Small_Pela(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSettings_Pescavore_Small_Pela.DinoSettings_Pescavore_Small_Pela_C.ExecuteUbergraph_DinoSettings_Pescavore_Small_Pela");
		
		UDinoSettings_Pescavore_Small_Pela_C_ExecuteUbergraph_DinoSettings_Pescavore_Small_Pela_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSettings_Pescavore_Small_Pela_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSettings_Pescavore_Small_Pela_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Pescavore_Small_Pela.DinoSettings_Pescavore_Small_Pela_C");
		return ptr;
	}

}


