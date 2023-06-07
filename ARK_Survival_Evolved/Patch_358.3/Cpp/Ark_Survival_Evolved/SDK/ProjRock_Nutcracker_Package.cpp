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
	 * 		Name   -> Function ProjRock_Nutcracker.ProjRock_Nutcracker_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjRock_Nutcracker_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjRock_Nutcracker.ProjRock_Nutcracker_C.UserConstructionScript");
		
		AProjRock_Nutcracker_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjRock_Nutcracker.ProjRock_Nutcracker_C.ExecuteUbergraph_ProjRock_Nutcracker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjRock_Nutcracker_C::ExecuteUbergraph_ProjRock_Nutcracker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjRock_Nutcracker.ProjRock_Nutcracker_C.ExecuteUbergraph_ProjRock_Nutcracker");
		
		AProjRock_Nutcracker_C_ExecuteUbergraph_ProjRock_Nutcracker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjRock_Nutcracker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjRock_Nutcracker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjRock_Nutcracker.ProjRock_Nutcracker_C");
		return ptr;
	}

}


