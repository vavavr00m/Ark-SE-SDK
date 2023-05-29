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
	 * 		Name   -> Function CoreWorldBuffDefinitions.CoreWorldBuffDefinitions_C.ExecuteUbergraph_CoreWorldBuffDefinitions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCoreWorldBuffDefinitions_C::ExecuteUbergraph_CoreWorldBuffDefinitions(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreWorldBuffDefinitions.CoreWorldBuffDefinitions_C.ExecuteUbergraph_CoreWorldBuffDefinitions");
		
		UCoreWorldBuffDefinitions_C_ExecuteUbergraph_CoreWorldBuffDefinitions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreWorldBuffDefinitions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreWorldBuffDefinitions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CoreWorldBuffDefinitions.CoreWorldBuffDefinitions_C");
		return ptr;
	}

}


