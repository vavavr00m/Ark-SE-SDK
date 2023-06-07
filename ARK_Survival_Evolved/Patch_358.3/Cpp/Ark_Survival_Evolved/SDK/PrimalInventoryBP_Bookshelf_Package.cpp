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
	 * 		Name   -> Function PrimalInventoryBP_Bookshelf.PrimalInventoryBP_Bookshelf_C.ExecuteUbergraph_PrimalInventoryBP_Bookshelf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_Bookshelf_C::ExecuteUbergraph_PrimalInventoryBP_Bookshelf(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_Bookshelf.PrimalInventoryBP_Bookshelf_C.ExecuteUbergraph_PrimalInventoryBP_Bookshelf");
		
		UPrimalInventoryBP_Bookshelf_C_ExecuteUbergraph_PrimalInventoryBP_Bookshelf_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventoryBP_Bookshelf_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryBP_Bookshelf_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_Bookshelf.PrimalInventoryBP_Bookshelf_C");
		return ptr;
	}

}


