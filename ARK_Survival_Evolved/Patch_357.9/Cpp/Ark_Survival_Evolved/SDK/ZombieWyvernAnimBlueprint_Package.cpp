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
	 * 		Name   -> Function ZombieWyvernAnimBlueprint.ZombieWyvernAnimBlueprint_C.ExecuteUbergraph_ZombieWyvernAnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZombieWyvernAnimBlueprint_C::ExecuteUbergraph_ZombieWyvernAnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZombieWyvernAnimBlueprint.ZombieWyvernAnimBlueprint_C.ExecuteUbergraph_ZombieWyvernAnimBlueprint");
		
		UZombieWyvernAnimBlueprint_C_ExecuteUbergraph_ZombieWyvernAnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombieWyvernAnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieWyvernAnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ZombieWyvernAnimBlueprint.ZombieWyvernAnimBlueprint_C");
		return ptr;
	}

}


