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
	 * 		Name   -> Function Fenrir_ChibiAnimBP.Fenrir_ChibiAnimBP_C.ExecuteUbergraph_Fenrir_ChibiAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFenrir_ChibiAnimBP_C::ExecuteUbergraph_Fenrir_ChibiAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_ChibiAnimBP.Fenrir_ChibiAnimBP_C.ExecuteUbergraph_Fenrir_ChibiAnimBP");
		
		UFenrir_ChibiAnimBP_C_ExecuteUbergraph_Fenrir_ChibiAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFenrir_ChibiAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFenrir_ChibiAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Fenrir_ChibiAnimBP.Fenrir_ChibiAnimBP_C");
		return ptr;
	}

}


