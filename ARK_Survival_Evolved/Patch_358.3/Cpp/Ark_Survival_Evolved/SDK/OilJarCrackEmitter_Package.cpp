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
	 * 		Name   -> Function OilJarCrackEmitter.OilJarCrackEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOilJarCrackEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OilJarCrackEmitter.OilJarCrackEmitter_C.UserConstructionScript");
		
		AOilJarCrackEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function OilJarCrackEmitter.OilJarCrackEmitter_C.ExecuteUbergraph_OilJarCrackEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOilJarCrackEmitter_C::ExecuteUbergraph_OilJarCrackEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OilJarCrackEmitter.OilJarCrackEmitter_C.ExecuteUbergraph_OilJarCrackEmitter");
		
		AOilJarCrackEmitter_C_ExecuteUbergraph_OilJarCrackEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOilJarCrackEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOilJarCrackEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OilJarCrackEmitter.OilJarCrackEmitter_C");
		return ptr;
	}

}


