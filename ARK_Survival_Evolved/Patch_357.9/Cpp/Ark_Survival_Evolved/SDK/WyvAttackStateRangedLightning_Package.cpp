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
	 * 		Name   -> Function WyvAttackStateRangedLightning.WyvAttackStateRangedLightning_C.ExecuteUbergraph_WyvAttackStateRangedLightning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWyvAttackStateRangedLightning_C::ExecuteUbergraph_WyvAttackStateRangedLightning(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WyvAttackStateRangedLightning.WyvAttackStateRangedLightning_C.ExecuteUbergraph_WyvAttackStateRangedLightning");
		
		UWyvAttackStateRangedLightning_C_ExecuteUbergraph_WyvAttackStateRangedLightning_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWyvAttackStateRangedLightning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWyvAttackStateRangedLightning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WyvAttackStateRangedLightning.WyvAttackStateRangedLightning_C");
		return ptr;
	}

}


