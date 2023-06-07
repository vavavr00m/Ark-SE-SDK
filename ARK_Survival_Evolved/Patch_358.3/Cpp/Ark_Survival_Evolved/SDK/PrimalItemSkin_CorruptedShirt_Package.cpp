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
	 * 		Name   -> Function PrimalItemSkin_CorruptedShirt.PrimalItemSkin_CorruptedShirt_C.ExecuteUbergraph_PrimalItemSkin_CorruptedShirt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_CorruptedShirt_C::ExecuteUbergraph_PrimalItemSkin_CorruptedShirt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_CorruptedShirt.PrimalItemSkin_CorruptedShirt_C.ExecuteUbergraph_PrimalItemSkin_CorruptedShirt");
		
		UPrimalItemSkin_CorruptedShirt_C_ExecuteUbergraph_PrimalItemSkin_CorruptedShirt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_CorruptedShirt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_CorruptedShirt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_CorruptedShirt.PrimalItemSkin_CorruptedShirt_C");
		return ptr;
	}

}


