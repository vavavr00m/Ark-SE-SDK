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
	 * 		Name   -> Function ProjTekShoulderCannon_Rapid.ProjTekShoulderCannon_Rapid_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjTekShoulderCannon_Rapid_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekShoulderCannon_Rapid.ProjTekShoulderCannon_Rapid_C.UserConstructionScript");
		
		AProjTekShoulderCannon_Rapid_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjTekShoulderCannon_Rapid.ProjTekShoulderCannon_Rapid_C.ExecuteUbergraph_ProjTekShoulderCannon_Rapid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjTekShoulderCannon_Rapid_C::ExecuteUbergraph_ProjTekShoulderCannon_Rapid(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekShoulderCannon_Rapid.ProjTekShoulderCannon_Rapid_C.ExecuteUbergraph_ProjTekShoulderCannon_Rapid");
		
		AProjTekShoulderCannon_Rapid_C_ExecuteUbergraph_ProjTekShoulderCannon_Rapid_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjTekShoulderCannon_Rapid_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjTekShoulderCannon_Rapid_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjTekShoulderCannon_Rapid.ProjTekShoulderCannon_Rapid_C");
		return ptr;
	}

}


