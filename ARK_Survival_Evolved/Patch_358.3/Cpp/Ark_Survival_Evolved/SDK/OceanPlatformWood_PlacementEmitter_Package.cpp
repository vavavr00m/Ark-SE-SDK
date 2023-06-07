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
	 * 		Name   -> Function OceanPlatformWood_PlacementEmitter.OceanPlatformWood_PlacementEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOceanPlatformWood_PlacementEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatformWood_PlacementEmitter.OceanPlatformWood_PlacementEmitter_C.UserConstructionScript");
		
		AOceanPlatformWood_PlacementEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function OceanPlatformWood_PlacementEmitter.OceanPlatformWood_PlacementEmitter_C.ExecuteUbergraph_OceanPlatformWood_PlacementEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOceanPlatformWood_PlacementEmitter_C::ExecuteUbergraph_OceanPlatformWood_PlacementEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatformWood_PlacementEmitter.OceanPlatformWood_PlacementEmitter_C.ExecuteUbergraph_OceanPlatformWood_PlacementEmitter");
		
		AOceanPlatformWood_PlacementEmitter_C_ExecuteUbergraph_OceanPlatformWood_PlacementEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOceanPlatformWood_PlacementEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOceanPlatformWood_PlacementEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OceanPlatformWood_PlacementEmitter.OceanPlatformWood_PlacementEmitter_C");
		return ptr;
	}

}


