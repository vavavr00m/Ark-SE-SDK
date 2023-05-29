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
	 * 		Name   -> Function WyvAttackStateRangedPoison.WyvAttackStateRangedPoison_C.ExecuteUbergraph_WyvAttackStateRangedPoison
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWyvAttackStateRangedPoison_C::ExecuteUbergraph_WyvAttackStateRangedPoison(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WyvAttackStateRangedPoison.WyvAttackStateRangedPoison_C.ExecuteUbergraph_WyvAttackStateRangedPoison");
		
		UWyvAttackStateRangedPoison_C_ExecuteUbergraph_WyvAttackStateRangedPoison_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWyvAttackStateRangedPoison_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWyvAttackStateRangedPoison_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WyvAttackStateRangedPoison.WyvAttackStateRangedPoison_C");
		return ptr;
	}

}


