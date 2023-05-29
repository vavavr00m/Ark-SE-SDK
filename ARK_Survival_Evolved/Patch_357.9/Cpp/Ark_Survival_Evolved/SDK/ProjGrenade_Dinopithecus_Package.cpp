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
	 * 		Name   -> Function ProjGrenade_Dinopithecus.ProjGrenade_Dinopithecus_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjGrenade_Dinopithecus_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjGrenade_Dinopithecus.ProjGrenade_Dinopithecus_C.UserConstructionScript");
		
		AProjGrenade_Dinopithecus_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjGrenade_Dinopithecus.ProjGrenade_Dinopithecus_C.ExecuteUbergraph_ProjGrenade_Dinopithecus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjGrenade_Dinopithecus_C::ExecuteUbergraph_ProjGrenade_Dinopithecus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjGrenade_Dinopithecus.ProjGrenade_Dinopithecus_C.ExecuteUbergraph_ProjGrenade_Dinopithecus");
		
		AProjGrenade_Dinopithecus_C_ExecuteUbergraph_ProjGrenade_Dinopithecus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjGrenade_Dinopithecus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjGrenade_Dinopithecus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjGrenade_Dinopithecus.ProjGrenade_Dinopithecus_C");
		return ptr;
	}

}


