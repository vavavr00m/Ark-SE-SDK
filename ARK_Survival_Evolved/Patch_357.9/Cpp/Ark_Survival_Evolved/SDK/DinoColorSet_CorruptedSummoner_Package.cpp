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
	 * 		Name   -> Function DinoColorSet_CorruptedSummoner.DinoColorSet_CorruptedSummoner_C.ExecuteUbergraph_DinoColorSet_CorruptedSummoner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoColorSet_CorruptedSummoner_C::ExecuteUbergraph_DinoColorSet_CorruptedSummoner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoColorSet_CorruptedSummoner.DinoColorSet_CorruptedSummoner_C.ExecuteUbergraph_DinoColorSet_CorruptedSummoner");
		
		UDinoColorSet_CorruptedSummoner_C_ExecuteUbergraph_DinoColorSet_CorruptedSummoner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoColorSet_CorruptedSummoner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoColorSet_CorruptedSummoner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_CorruptedSummoner.DinoColorSet_CorruptedSummoner_C");
		return ptr;
	}

}


