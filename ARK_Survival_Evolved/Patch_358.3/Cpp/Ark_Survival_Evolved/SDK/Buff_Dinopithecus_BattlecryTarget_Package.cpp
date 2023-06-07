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
	 * 		Name   -> Function Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Dinopithecus_BattlecryTarget_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C.BPSetupForInstigator");
		
		ABuff_Dinopithecus_BattlecryTarget_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Dinopithecus_BattlecryTarget_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C.ReceiveBeginPlay");
		
		ABuff_Dinopithecus_BattlecryTarget_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Dinopithecus_BattlecryTarget_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C.UserConstructionScript");
		
		ABuff_Dinopithecus_BattlecryTarget_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C.ExecuteUbergraph_Buff_Dinopithecus_BattlecryTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Dinopithecus_BattlecryTarget_C::ExecuteUbergraph_Buff_Dinopithecus_BattlecryTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C.ExecuteUbergraph_Buff_Dinopithecus_BattlecryTarget");
		
		ABuff_Dinopithecus_BattlecryTarget_C_ExecuteUbergraph_Buff_Dinopithecus_BattlecryTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Dinopithecus_BattlecryTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Dinopithecus_BattlecryTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C");
		return ptr;
	}

}


