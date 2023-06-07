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
	 * 		Name   -> Function WeapSword_Scorched.WeapSword_Scorched_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapSword_Scorched_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSword_Scorched.WeapSword_Scorched_C.UserConstructionScript");
		
		AWeapSword_Scorched_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapSword_Scorched.WeapSword_Scorched_C.ExecuteUbergraph_WeapSword_Scorched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapSword_Scorched_C::ExecuteUbergraph_WeapSword_Scorched(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSword_Scorched.WeapSword_Scorched_C.ExecuteUbergraph_WeapSword_Scorched");
		
		AWeapSword_Scorched_C_ExecuteUbergraph_WeapSword_Scorched_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapSword_Scorched_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapSword_Scorched_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapSword_Scorched.WeapSword_Scorched_C");
		return ptr;
	}

}


