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
	 * 		Name   -> Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusLifeStealingFromCarriedCharacter_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BPDeactivated");
		
		ABuff_DesmodusLifeStealingFromCarriedCharacter_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.TickLifeStealing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusLifeStealingFromCarriedCharacter_C::TickLifeStealing(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.TickLifeStealing");
		
		ABuff_DesmodusLifeStealingFromCarriedCharacter_C_TickLifeStealing_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusLifeStealingFromCarriedCharacter_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BPSetupForInstigator");
		
		ABuff_DesmodusLifeStealingFromCarriedCharacter_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesmodusLifeStealingFromCarriedCharacter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.UserConstructionScript");
		
		ABuff_DesmodusLifeStealingFromCarriedCharacter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusLifeStealingFromCarriedCharacter_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BuffTickClient");
		
		ABuff_DesmodusLifeStealingFromCarriedCharacter_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusLifeStealingFromCarriedCharacter_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.BuffTickServer");
		
		ABuff_DesmodusLifeStealingFromCarriedCharacter_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.ExecuteUbergraph_Buff_DesmodusLifeStealingFromCarriedCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesmodusLifeStealingFromCarriedCharacter_C::ExecuteUbergraph_Buff_DesmodusLifeStealingFromCarriedCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C.ExecuteUbergraph_Buff_DesmodusLifeStealingFromCarriedCharacter");
		
		ABuff_DesmodusLifeStealingFromCarriedCharacter_C_ExecuteUbergraph_Buff_DesmodusLifeStealingFromCarriedCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_DesmodusLifeStealingFromCarriedCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_DesmodusLifeStealingFromCarriedCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DesmodusLifeStealingFromCarriedCharacter.Buff_DesmodusLifeStealingFromCarriedCharacter_C");
		return ptr;
	}

}


