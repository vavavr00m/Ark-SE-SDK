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
	 * 		Name   -> Function DinoWildInventoryComponent_LionfishLion.DinoWildInventoryComponent_LionfishLion_C.ExecuteUbergraph_DinoWildInventoryComponent_LionfishLion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoWildInventoryComponent_LionfishLion_C::ExecuteUbergraph_DinoWildInventoryComponent_LionfishLion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoWildInventoryComponent_LionfishLion.DinoWildInventoryComponent_LionfishLion_C.ExecuteUbergraph_DinoWildInventoryComponent_LionfishLion");
		
		UDinoWildInventoryComponent_LionfishLion_C_ExecuteUbergraph_DinoWildInventoryComponent_LionfishLion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoWildInventoryComponent_LionfishLion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoWildInventoryComponent_LionfishLion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoWildInventoryComponent_LionfishLion.DinoWildInventoryComponent_LionfishLion_C");
		return ptr;
	}

}


