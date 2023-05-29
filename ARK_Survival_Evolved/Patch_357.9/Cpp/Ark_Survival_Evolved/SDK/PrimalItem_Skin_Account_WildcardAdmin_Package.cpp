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
	 * 		Name   -> Function PrimalItem_Skin_Account_WildcardAdmin.PrimalItem_Skin_Account_WildcardAdmin_C.ExecuteUbergraph_PrimalItem_Skin_Account_WildcardAdmin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_Skin_Account_WildcardAdmin_C::ExecuteUbergraph_PrimalItem_Skin_Account_WildcardAdmin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_Skin_Account_WildcardAdmin.PrimalItem_Skin_Account_WildcardAdmin_C.ExecuteUbergraph_PrimalItem_Skin_Account_WildcardAdmin");
		
		UPrimalItem_Skin_Account_WildcardAdmin_C_ExecuteUbergraph_PrimalItem_Skin_Account_WildcardAdmin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_Skin_Account_WildcardAdmin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_Skin_Account_WildcardAdmin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_Skin_Account_WildcardAdmin.PrimalItem_Skin_Account_WildcardAdmin_C");
		return ptr;
	}

}


