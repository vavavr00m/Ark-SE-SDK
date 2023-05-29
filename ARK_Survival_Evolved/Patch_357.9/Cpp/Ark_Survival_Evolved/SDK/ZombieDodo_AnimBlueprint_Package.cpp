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
	 * 		Name   -> Function ZombieDodo_AnimBlueprint.ZombieDodo_AnimBlueprint_C.ExecuteUbergraph_ZombieDodo_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UZombieDodo_AnimBlueprint_C::ExecuteUbergraph_ZombieDodo_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ZombieDodo_AnimBlueprint.ZombieDodo_AnimBlueprint_C.ExecuteUbergraph_ZombieDodo_AnimBlueprint");
		
		UZombieDodo_AnimBlueprint_C_ExecuteUbergraph_ZombieDodo_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombieDodo_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieDodo_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ZombieDodo_AnimBlueprint.ZombieDodo_AnimBlueprint_C");
		return ptr;
	}

}


