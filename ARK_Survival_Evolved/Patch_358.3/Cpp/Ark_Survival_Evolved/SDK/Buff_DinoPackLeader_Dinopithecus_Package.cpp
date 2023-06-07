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
	 * 		Name   -> Function Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DinoPackLeader_Dinopithecus_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C.ReceiveDestroyed");
		
		ABuff_DinoPackLeader_Dinopithecus_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DinoPackLeader_Dinopithecus_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C.BPSetupForInstigator");
		
		ABuff_DinoPackLeader_Dinopithecus_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DinoPackLeader_Dinopithecus_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C.UserConstructionScript");
		
		ABuff_DinoPackLeader_Dinopithecus_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C.ExecuteUbergraph_Buff_DinoPackLeader_Dinopithecus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DinoPackLeader_Dinopithecus_C::ExecuteUbergraph_Buff_DinoPackLeader_Dinopithecus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C.ExecuteUbergraph_Buff_DinoPackLeader_Dinopithecus");
		
		ABuff_DinoPackLeader_Dinopithecus_C_ExecuteUbergraph_Buff_DinoPackLeader_Dinopithecus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_DinoPackLeader_Dinopithecus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_DinoPackLeader_Dinopithecus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C");
		return ptr;
	}

}


