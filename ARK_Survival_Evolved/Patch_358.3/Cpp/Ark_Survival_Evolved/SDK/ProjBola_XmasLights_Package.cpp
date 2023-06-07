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
	 * 		Name   -> Function ProjBola_XmasLights.ProjBola_XmasLights_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjBola_XmasLights_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjBola_XmasLights.ProjBola_XmasLights_C.UserConstructionScript");
		
		AProjBola_XmasLights_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjBola_XmasLights.ProjBola_XmasLights_C.ExecuteUbergraph_ProjBola_XmasLights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjBola_XmasLights_C::ExecuteUbergraph_ProjBola_XmasLights(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjBola_XmasLights.ProjBola_XmasLights_C.ExecuteUbergraph_ProjBola_XmasLights");
		
		AProjBola_XmasLights_C_ExecuteUbergraph_ProjBola_XmasLights_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjBola_XmasLights_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjBola_XmasLights_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjBola_XmasLights.ProjBola_XmasLights_C");
		return ptr;
	}

}


