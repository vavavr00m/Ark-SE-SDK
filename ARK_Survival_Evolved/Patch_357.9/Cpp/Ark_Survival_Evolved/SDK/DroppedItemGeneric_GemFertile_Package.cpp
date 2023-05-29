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
	 * 		Name   -> Function DroppedItemGeneric_GemFertile.DroppedItemGeneric_GemFertile_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItemGeneric_GemFertile_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_GemFertile.DroppedItemGeneric_GemFertile_C.UserConstructionScript");
		
		ADroppedItemGeneric_GemFertile_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DroppedItemGeneric_GemFertile.DroppedItemGeneric_GemFertile_C.ExecuteUbergraph_DroppedItemGeneric_GemFertile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItemGeneric_GemFertile_C::ExecuteUbergraph_DroppedItemGeneric_GemFertile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_GemFertile.DroppedItemGeneric_GemFertile_C.ExecuteUbergraph_DroppedItemGeneric_GemFertile");
		
		ADroppedItemGeneric_GemFertile_C_ExecuteUbergraph_DroppedItemGeneric_GemFertile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADroppedItemGeneric_GemFertile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADroppedItemGeneric_GemFertile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_GemFertile.DroppedItemGeneric_GemFertile_C");
		return ptr;
	}

}


