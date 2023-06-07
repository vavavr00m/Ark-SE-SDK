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
	 * 		Name   -> Function NPCZoneManagerBlueprint_Water.NPCZoneManagerBlueprint_Water_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ANPCZoneManagerBlueprint_Water_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCZoneManagerBlueprint_Water.NPCZoneManagerBlueprint_Water_C.UserConstructionScript");
		
		ANPCZoneManagerBlueprint_Water_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function NPCZoneManagerBlueprint_Water.NPCZoneManagerBlueprint_Water_C.ExecuteUbergraph_NPCZoneManagerBlueprint_Water
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ANPCZoneManagerBlueprint_Water_C::ExecuteUbergraph_NPCZoneManagerBlueprint_Water(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPCZoneManagerBlueprint_Water.NPCZoneManagerBlueprint_Water_C.ExecuteUbergraph_NPCZoneManagerBlueprint_Water");
		
		ANPCZoneManagerBlueprint_Water_C_ExecuteUbergraph_NPCZoneManagerBlueprint_Water_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANPCZoneManagerBlueprint_Water_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANPCZoneManagerBlueprint_Water_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NPCZoneManagerBlueprint_Water.NPCZoneManagerBlueprint_Water_C");
		return ptr;
	}

}


