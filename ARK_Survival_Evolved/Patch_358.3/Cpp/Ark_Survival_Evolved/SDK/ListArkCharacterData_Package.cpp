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
	 * 		Name   -> Function ListArkCharacterData.ListArkCharacterData_C.ExecuteUbergraph_ListArkCharacterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UListArkCharacterData_C::ExecuteUbergraph_ListArkCharacterData(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ListArkCharacterData.ListArkCharacterData_C.ExecuteUbergraph_ListArkCharacterData");
		
		UListArkCharacterData_C_ExecuteUbergraph_ListArkCharacterData_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UListArkCharacterData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UListArkCharacterData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ListArkCharacterData.ListArkCharacterData_C");
		return ptr;
	}

}


