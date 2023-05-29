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
	 * 		Name   -> Function CI_DinoColorSet_CrystalWyvern_WS_M.CI_DinoColorSet_CrystalWyvern_WS_M_C.ExecuteUbergraph_CI_DinoColorSet_CrystalWyvern_WS_M
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCI_DinoColorSet_CrystalWyvern_WS_M_C::ExecuteUbergraph_CI_DinoColorSet_CrystalWyvern_WS_M(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CI_DinoColorSet_CrystalWyvern_WS_M.CI_DinoColorSet_CrystalWyvern_WS_M_C.ExecuteUbergraph_CI_DinoColorSet_CrystalWyvern_WS_M");
		
		UCI_DinoColorSet_CrystalWyvern_WS_M_C_ExecuteUbergraph_CI_DinoColorSet_CrystalWyvern_WS_M_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCI_DinoColorSet_CrystalWyvern_WS_M_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCI_DinoColorSet_CrystalWyvern_WS_M_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CI_DinoColorSet_CrystalWyvern_WS_M.CI_DinoColorSet_CrystalWyvern_WS_M_C");
		return ptr;
	}

}


