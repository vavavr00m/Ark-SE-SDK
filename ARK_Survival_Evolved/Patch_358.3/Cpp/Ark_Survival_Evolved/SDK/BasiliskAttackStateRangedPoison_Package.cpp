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
	 * 		Name   -> Function BasiliskAttackStateRangedPoison.BasiliskAttackStateRangedPoison_C.ExecuteUbergraph_BasiliskAttackStateRangedPoison
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBasiliskAttackStateRangedPoison_C::ExecuteUbergraph_BasiliskAttackStateRangedPoison(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BasiliskAttackStateRangedPoison.BasiliskAttackStateRangedPoison_C.ExecuteUbergraph_BasiliskAttackStateRangedPoison");
		
		UBasiliskAttackStateRangedPoison_C_ExecuteUbergraph_BasiliskAttackStateRangedPoison_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasiliskAttackStateRangedPoison_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasiliskAttackStateRangedPoison_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BasiliskAttackStateRangedPoison.BasiliskAttackStateRangedPoison_C");
		return ptr;
	}

}


