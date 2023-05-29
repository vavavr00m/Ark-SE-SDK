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
	 * 		Name   -> Function DinoInventory_GachaClausDigestion.DinoInventory_GachaClausDigestion_C.ExecuteUbergraph_DinoInventory_GachaClausDigestion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoInventory_GachaClausDigestion_C::ExecuteUbergraph_DinoInventory_GachaClausDigestion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoInventory_GachaClausDigestion.DinoInventory_GachaClausDigestion_C.ExecuteUbergraph_DinoInventory_GachaClausDigestion");
		
		UDinoInventory_GachaClausDigestion_C_ExecuteUbergraph_DinoInventory_GachaClausDigestion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoInventory_GachaClausDigestion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoInventory_GachaClausDigestion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoInventory_GachaClausDigestion.DinoInventory_GachaClausDigestion_C");
		return ptr;
	}

}


