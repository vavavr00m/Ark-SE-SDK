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
	 * 		Name   -> Function WyvPoisonGasCloud.WyvPoisonGasCloud_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWyvPoisonGasCloud_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WyvPoisonGasCloud.WyvPoisonGasCloud_C.UserConstructionScript");
		
		AWyvPoisonGasCloud_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function WyvPoisonGasCloud.WyvPoisonGasCloud_C.ExecuteUbergraph_WyvPoisonGasCloud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWyvPoisonGasCloud_C::ExecuteUbergraph_WyvPoisonGasCloud(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WyvPoisonGasCloud.WyvPoisonGasCloud_C.ExecuteUbergraph_WyvPoisonGasCloud");
		
		AWyvPoisonGasCloud_C_ExecuteUbergraph_WyvPoisonGasCloud_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWyvPoisonGasCloud_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWyvPoisonGasCloud_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WyvPoisonGasCloud.WyvPoisonGasCloud_C");
		return ptr;
	}

}


