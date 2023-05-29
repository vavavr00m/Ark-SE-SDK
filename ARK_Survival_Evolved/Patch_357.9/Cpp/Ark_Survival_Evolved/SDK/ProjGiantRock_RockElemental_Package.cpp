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
	 * 		Name   -> Function ProjGiantRock_RockElemental.ProjGiantRock_RockElemental_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjGiantRock_RockElemental_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjGiantRock_RockElemental.ProjGiantRock_RockElemental_C.UserConstructionScript");
		
		AProjGiantRock_RockElemental_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjGiantRock_RockElemental.ProjGiantRock_RockElemental_C.ExecuteUbergraph_ProjGiantRock_RockElemental
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjGiantRock_RockElemental_C::ExecuteUbergraph_ProjGiantRock_RockElemental(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjGiantRock_RockElemental.ProjGiantRock_RockElemental_C.ExecuteUbergraph_ProjGiantRock_RockElemental");
		
		AProjGiantRock_RockElemental_C_ExecuteUbergraph_ProjGiantRock_RockElemental_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjGiantRock_RockElemental_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjGiantRock_RockElemental_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjGiantRock_RockElemental.ProjGiantRock_RockElemental_C");
		return ptr;
	}

}


