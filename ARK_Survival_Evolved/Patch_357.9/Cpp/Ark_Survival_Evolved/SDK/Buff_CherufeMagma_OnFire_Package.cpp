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
	 * 		Name   -> Function Buff_CherufeMagma_OnFire.Buff_CherufeMagma_OnFire_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CherufeMagma_OnFire_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CherufeMagma_OnFire.Buff_CherufeMagma_OnFire_C.ReceiveTick");
		
		ABuff_CherufeMagma_OnFire_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CherufeMagma_OnFire.Buff_CherufeMagma_OnFire_C.BPCustomAllowAddBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_CherufeMagma_OnFire_C::BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CherufeMagma_OnFire.Buff_CherufeMagma_OnFire_C.BPCustomAllowAddBuff");
		
		ABuff_CherufeMagma_OnFire_C_BPCustomAllowAddBuff_Params params {};
		params.forCharacter = forCharacter;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CherufeMagma_OnFire.Buff_CherufeMagma_OnFire_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_CherufeMagma_OnFire_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CherufeMagma_OnFire.Buff_CherufeMagma_OnFire_C.UserConstructionScript");
		
		ABuff_CherufeMagma_OnFire_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_CherufeMagma_OnFire.Buff_CherufeMagma_OnFire_C.ExecuteUbergraph_Buff_CherufeMagma_OnFire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_CherufeMagma_OnFire_C::ExecuteUbergraph_Buff_CherufeMagma_OnFire(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CherufeMagma_OnFire.Buff_CherufeMagma_OnFire_C.ExecuteUbergraph_Buff_CherufeMagma_OnFire");
		
		ABuff_CherufeMagma_OnFire_C_ExecuteUbergraph_Buff_CherufeMagma_OnFire_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_CherufeMagma_OnFire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_CherufeMagma_OnFire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_CherufeMagma_OnFire.Buff_CherufeMagma_OnFire_C");
		return ptr;
	}

}


