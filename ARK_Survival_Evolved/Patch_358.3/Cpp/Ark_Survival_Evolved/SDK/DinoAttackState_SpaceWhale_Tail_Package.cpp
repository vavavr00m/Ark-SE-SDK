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
	 * 		Name   -> Function DinoAttackState_SpaceWhale_Tail.DinoAttackState_SpaceWhale_Tail_C.ExecuteUbergraph_DinoAttackState_SpaceWhale_Tail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_SpaceWhale_Tail_C::ExecuteUbergraph_DinoAttackState_SpaceWhale_Tail(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_SpaceWhale_Tail.DinoAttackState_SpaceWhale_Tail_C.ExecuteUbergraph_DinoAttackState_SpaceWhale_Tail");
		
		UDinoAttackState_SpaceWhale_Tail_C_ExecuteUbergraph_DinoAttackState_SpaceWhale_Tail_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackState_SpaceWhale_Tail_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackState_SpaceWhale_Tail_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_SpaceWhale_Tail.DinoAttackState_SpaceWhale_Tail_C");
		return ptr;
	}

}


