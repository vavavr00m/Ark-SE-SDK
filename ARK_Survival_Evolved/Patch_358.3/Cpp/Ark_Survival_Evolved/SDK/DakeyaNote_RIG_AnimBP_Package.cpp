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
	 * 		Name   -> Function DakeyaNote_RIG_AnimBP.DakeyaNote_RIG_AnimBP_C.ExecuteUbergraph_DakeyaNote_RIG_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDakeyaNote_RIG_AnimBP_C::ExecuteUbergraph_DakeyaNote_RIG_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DakeyaNote_RIG_AnimBP.DakeyaNote_RIG_AnimBP_C.ExecuteUbergraph_DakeyaNote_RIG_AnimBP");
		
		UDakeyaNote_RIG_AnimBP_C_ExecuteUbergraph_DakeyaNote_RIG_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDakeyaNote_RIG_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDakeyaNote_RIG_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DakeyaNote_RIG_AnimBP.DakeyaNote_RIG_AnimBP_C");
		return ptr;
	}

}


