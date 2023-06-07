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
	 * 		Name   -> Function PrimalItemArmor_TekGloves_Gen2.PrimalItemArmor_TekGloves_Gen2_C.ExecuteUbergraph_PrimalItemArmor_TekGloves_Gen2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemArmor_TekGloves_Gen2_C::ExecuteUbergraph_PrimalItemArmor_TekGloves_Gen2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekGloves_Gen2.PrimalItemArmor_TekGloves_Gen2_C.ExecuteUbergraph_PrimalItemArmor_TekGloves_Gen2");
		
		UPrimalItemArmor_TekGloves_Gen2_C_ExecuteUbergraph_PrimalItemArmor_TekGloves_Gen2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_TekGloves_Gen2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_TekGloves_Gen2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TekGloves_Gen2.PrimalItemArmor_TekGloves_Gen2_C");
		return ptr;
	}

}


