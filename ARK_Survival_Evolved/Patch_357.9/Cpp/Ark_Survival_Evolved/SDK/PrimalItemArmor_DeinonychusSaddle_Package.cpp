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
	 * 		Name   -> Function PrimalItemArmor_DeinonychusSaddle.PrimalItemArmor_DeinonychusSaddle_C.ExecuteUbergraph_PrimalItemArmor_DeinonychusSaddle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemArmor_DeinonychusSaddle_C::ExecuteUbergraph_PrimalItemArmor_DeinonychusSaddle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_DeinonychusSaddle.PrimalItemArmor_DeinonychusSaddle_C.ExecuteUbergraph_PrimalItemArmor_DeinonychusSaddle");
		
		UPrimalItemArmor_DeinonychusSaddle_C_ExecuteUbergraph_PrimalItemArmor_DeinonychusSaddle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_DeinonychusSaddle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_DeinonychusSaddle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_DeinonychusSaddle.PrimalItemArmor_DeinonychusSaddle_C");
		return ptr;
	}

}


