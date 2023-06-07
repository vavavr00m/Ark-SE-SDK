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
	 * 		Name   -> Function ProjTekShoulderCannon_Sniper.ProjTekShoulderCannon_Sniper_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjTekShoulderCannon_Sniper_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekShoulderCannon_Sniper.ProjTekShoulderCannon_Sniper_C.UserConstructionScript");
		
		AProjTekShoulderCannon_Sniper_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjTekShoulderCannon_Sniper.ProjTekShoulderCannon_Sniper_C.ExecuteUbergraph_ProjTekShoulderCannon_Sniper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjTekShoulderCannon_Sniper_C::ExecuteUbergraph_ProjTekShoulderCannon_Sniper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekShoulderCannon_Sniper.ProjTekShoulderCannon_Sniper_C.ExecuteUbergraph_ProjTekShoulderCannon_Sniper");
		
		AProjTekShoulderCannon_Sniper_C_ExecuteUbergraph_ProjTekShoulderCannon_Sniper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjTekShoulderCannon_Sniper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjTekShoulderCannon_Sniper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjTekShoulderCannon_Sniper.ProjTekShoulderCannon_Sniper_C");
		return ptr;
	}

}


