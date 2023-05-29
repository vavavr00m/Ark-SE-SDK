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
	 * 		Name   -> Function Buff_Dinopithecus_BattlecryHit.Buff_Dinopithecus_BattlecryHit_C.BPActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Dinopithecus_BattlecryHit_C::BPActivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Dinopithecus_BattlecryHit.Buff_Dinopithecus_BattlecryHit_C.BPActivated");
		
		ABuff_Dinopithecus_BattlecryHit_C_BPActivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Dinopithecus_BattlecryHit.Buff_Dinopithecus_BattlecryHit_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Dinopithecus_BattlecryHit_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Dinopithecus_BattlecryHit.Buff_Dinopithecus_BattlecryHit_C.UserConstructionScript");
		
		ABuff_Dinopithecus_BattlecryHit_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Dinopithecus_BattlecryHit.Buff_Dinopithecus_BattlecryHit_C.ExecuteUbergraph_Buff_Dinopithecus_BattlecryHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Dinopithecus_BattlecryHit_C::ExecuteUbergraph_Buff_Dinopithecus_BattlecryHit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Dinopithecus_BattlecryHit.Buff_Dinopithecus_BattlecryHit_C.ExecuteUbergraph_Buff_Dinopithecus_BattlecryHit");
		
		ABuff_Dinopithecus_BattlecryHit_C_ExecuteUbergraph_Buff_Dinopithecus_BattlecryHit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Dinopithecus_BattlecryHit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Dinopithecus_BattlecryHit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Dinopithecus_BattlecryHit.Buff_Dinopithecus_BattlecryHit_C");
		return ptr;
	}

}


