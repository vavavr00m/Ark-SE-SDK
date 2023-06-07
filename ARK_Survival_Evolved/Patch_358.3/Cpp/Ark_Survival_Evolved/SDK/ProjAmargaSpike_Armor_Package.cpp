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
	 * 		Name   -> Function ProjAmargaSpike_Armor.ProjAmargaSpike_Armor_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjAmargaSpike_Armor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike_Armor.ProjAmargaSpike_Armor_C.UserConstructionScript");
		
		AProjAmargaSpike_Armor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjAmargaSpike_Armor.ProjAmargaSpike_Armor_C.ExecuteUbergraph_ProjAmargaSpike_Armor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjAmargaSpike_Armor_C::ExecuteUbergraph_ProjAmargaSpike_Armor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjAmargaSpike_Armor.ProjAmargaSpike_Armor_C.ExecuteUbergraph_ProjAmargaSpike_Armor");
		
		AProjAmargaSpike_Armor_C_ExecuteUbergraph_ProjAmargaSpike_Armor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjAmargaSpike_Armor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjAmargaSpike_Armor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjAmargaSpike_Armor.ProjAmargaSpike_Armor_C");
		return ptr;
	}

}


