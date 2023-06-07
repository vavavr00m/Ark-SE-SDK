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
	 * 		Name   -> Function WeapRocketLauncher_Firework.WeapRocketLauncher_Firework_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapRocketLauncher_Firework_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapRocketLauncher_Firework.WeapRocketLauncher_Firework_C.UserConstructionScript");
		
		AWeapRocketLauncher_Firework_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WeapRocketLauncher_Firework.WeapRocketLauncher_Firework_C.ExecuteUbergraph_WeapRocketLauncher_Firework
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapRocketLauncher_Firework_C::ExecuteUbergraph_WeapRocketLauncher_Firework(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapRocketLauncher_Firework.WeapRocketLauncher_Firework_C.ExecuteUbergraph_WeapRocketLauncher_Firework");
		
		AWeapRocketLauncher_Firework_C_ExecuteUbergraph_WeapRocketLauncher_Firework_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapRocketLauncher_Firework_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapRocketLauncher_Firework_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapRocketLauncher_Firework.WeapRocketLauncher_Firework_C");
		return ptr;
	}

}


