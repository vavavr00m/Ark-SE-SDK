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
	 * 		Name   -> Function PrimalItemSkin_CorruptedPants.PrimalItemSkin_CorruptedPants_C.ExecuteUbergraph_PrimalItemSkin_CorruptedPants
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_CorruptedPants_C::ExecuteUbergraph_PrimalItemSkin_CorruptedPants(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_CorruptedPants.PrimalItemSkin_CorruptedPants_C.ExecuteUbergraph_PrimalItemSkin_CorruptedPants");
		
		UPrimalItemSkin_CorruptedPants_C_ExecuteUbergraph_PrimalItemSkin_CorruptedPants_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_CorruptedPants_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_CorruptedPants_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_CorruptedPants.PrimalItemSkin_CorruptedPants_C");
		return ptr;
	}

}


