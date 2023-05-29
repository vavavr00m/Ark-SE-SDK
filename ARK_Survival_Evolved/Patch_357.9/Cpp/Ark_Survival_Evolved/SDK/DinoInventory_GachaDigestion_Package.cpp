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
	 * 		Name   -> Function DinoInventory_GachaDigestion.DinoInventory_GachaDigestion_C.ExecuteUbergraph_DinoInventory_GachaDigestion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoInventory_GachaDigestion_C::ExecuteUbergraph_DinoInventory_GachaDigestion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoInventory_GachaDigestion.DinoInventory_GachaDigestion_C.ExecuteUbergraph_DinoInventory_GachaDigestion");
		
		UDinoInventory_GachaDigestion_C_ExecuteUbergraph_DinoInventory_GachaDigestion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoInventory_GachaDigestion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoInventory_GachaDigestion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoInventory_GachaDigestion.DinoInventory_GachaDigestion_C");
		return ptr;
	}

}


