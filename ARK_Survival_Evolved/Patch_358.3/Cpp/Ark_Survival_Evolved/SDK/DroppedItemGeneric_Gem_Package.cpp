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
	 * 		Name   -> Function DroppedItemGeneric_Gem.DroppedItemGeneric_Gem_C.BPPostInitializeComponents
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItemGeneric_Gem_C::BPPostInitializeComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_Gem.DroppedItemGeneric_Gem_C.BPPostInitializeComponents");
		
		ADroppedItemGeneric_Gem_C_BPPostInitializeComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DroppedItemGeneric_Gem.DroppedItemGeneric_Gem_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItemGeneric_Gem_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_Gem.DroppedItemGeneric_Gem_C.UserConstructionScript");
		
		ADroppedItemGeneric_Gem_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DroppedItemGeneric_Gem.DroppedItemGeneric_Gem_C.ExecuteUbergraph_DroppedItemGeneric_Gem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItemGeneric_Gem_C::ExecuteUbergraph_DroppedItemGeneric_Gem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_Gem.DroppedItemGeneric_Gem_C.ExecuteUbergraph_DroppedItemGeneric_Gem");
		
		ADroppedItemGeneric_Gem_C_ExecuteUbergraph_DroppedItemGeneric_Gem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADroppedItemGeneric_Gem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADroppedItemGeneric_Gem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_Gem.DroppedItemGeneric_Gem_C");
		return ptr;
	}

}


