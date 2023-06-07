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
	 * 		Name   -> Function CrystalWyvAttackStateBlood.CrystalWyvAttackStateBlood_C.ExecuteUbergraph_CrystalWyvAttackStateBlood
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCrystalWyvAttackStateBlood_C::ExecuteUbergraph_CrystalWyvAttackStateBlood(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvAttackStateBlood.CrystalWyvAttackStateBlood_C.ExecuteUbergraph_CrystalWyvAttackStateBlood");
		
		UCrystalWyvAttackStateBlood_C_ExecuteUbergraph_CrystalWyvAttackStateBlood_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrystalWyvAttackStateBlood_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrystalWyvAttackStateBlood_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvAttackStateBlood.CrystalWyvAttackStateBlood_C");
		return ptr;
	}

}


