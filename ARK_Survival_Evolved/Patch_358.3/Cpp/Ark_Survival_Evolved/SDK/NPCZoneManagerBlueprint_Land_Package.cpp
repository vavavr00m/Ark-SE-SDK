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
	 * 		Name   -> Function NPCZoneManagerBlueprint_Land.NPCZoneManagerBlueprint_Land_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ANPCZoneManagerBlueprint_Land_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCZoneManagerBlueprint_Land.NPCZoneManagerBlueprint_Land_C.UserConstructionScript");
		
		ANPCZoneManagerBlueprint_Land_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function NPCZoneManagerBlueprint_Land.NPCZoneManagerBlueprint_Land_C.ExecuteUbergraph_NPCZoneManagerBlueprint_Land
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ANPCZoneManagerBlueprint_Land_C::ExecuteUbergraph_NPCZoneManagerBlueprint_Land(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCZoneManagerBlueprint_Land.NPCZoneManagerBlueprint_Land_C.ExecuteUbergraph_NPCZoneManagerBlueprint_Land");
		
		ANPCZoneManagerBlueprint_Land_C_ExecuteUbergraph_NPCZoneManagerBlueprint_Land_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANPCZoneManagerBlueprint_Land_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANPCZoneManagerBlueprint_Land_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NPCZoneManagerBlueprint_Land.NPCZoneManagerBlueprint_Land_C");
		return ptr;
	}

}


