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
	 * 		Name   -> Function Dilo_Chibi_AminBP.Dilo_Chibi_AminBP_C.ExecuteUbergraph_Dilo_Chibi_AminBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDilo_Chibi_AminBP_C::ExecuteUbergraph_Dilo_Chibi_AminBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dilo_Chibi_AminBP.Dilo_Chibi_AminBP_C.ExecuteUbergraph_Dilo_Chibi_AminBP");
		
		UDilo_Chibi_AminBP_C_ExecuteUbergraph_Dilo_Chibi_AminBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDilo_Chibi_AminBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDilo_Chibi_AminBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Dilo_Chibi_AminBP.Dilo_Chibi_AminBP_C");
		return ptr;
	}

}


