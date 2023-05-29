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
	 * 		Name   -> Function BPFX_EXT_WL_TreeA.BPFX_EXT_WL_TreeA_C.ExecuteUbergraph_BPFX_EXT_WL_TreeA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFX_EXT_WL_TreeA_C::ExecuteUbergraph_BPFX_EXT_WL_TreeA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFX_EXT_WL_TreeA.BPFX_EXT_WL_TreeA_C.ExecuteUbergraph_BPFX_EXT_WL_TreeA");
		
		UBPFX_EXT_WL_TreeA_C_ExecuteUbergraph_BPFX_EXT_WL_TreeA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFX_EXT_WL_TreeA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFX_EXT_WL_TreeA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFX_EXT_WL_TreeA.BPFX_EXT_WL_TreeA_C");
		return ptr;
	}

}


