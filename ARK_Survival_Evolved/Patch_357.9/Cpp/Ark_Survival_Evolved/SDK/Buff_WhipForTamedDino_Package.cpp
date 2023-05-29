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
	 * 		Name   -> Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPResetBuffStart
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_WhipForTamedDino_C::BPResetBuffStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPResetBuffStart");
		
		ABuff_WhipForTamedDino_C_BPResetBuffStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.SetBuffCauser
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      CausedBy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_WhipForTamedDino_C::SetBuffCauser(class AActor* CausedBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.SetBuffCauser");
		
		ABuff_WhipForTamedDino_C_SetBuffCauser_Params params {};
		params.CausedBy = CausedBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BuffTickServer
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_WhipForTamedDino_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BuffTickServer");
		
		ABuff_WhipForTamedDino_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.PlayStartledAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_WhipForTamedDino_C::PlayStartledAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.PlayStartledAnim");
		
		ABuff_WhipForTamedDino_C_PlayStartledAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_WhipForTamedDino_C::BPActivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPActivated");
		
		ABuff_WhipForTamedDino_C_BPActivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPCustomAllowAddBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_WhipForTamedDino_C::BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPCustomAllowAddBuff");
		
		ABuff_WhipForTamedDino_C_BPCustomAllowAddBuff_Params params {};
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
	 * 		Name   -> Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_WhipForTamedDino_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.UserConstructionScript");
		
		ABuff_WhipForTamedDino_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_WhipForTamedDino_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.BPSetupForInstigator");
		
		ABuff_WhipForTamedDino_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.ExecuteUbergraph_Buff_WhipForTamedDino
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_WhipForTamedDino_C::ExecuteUbergraph_Buff_WhipForTamedDino(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WhipForTamedDino.Buff_WhipForTamedDino_C.ExecuteUbergraph_Buff_WhipForTamedDino");
		
		ABuff_WhipForTamedDino_C_ExecuteUbergraph_Buff_WhipForTamedDino_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_WhipForTamedDino_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_WhipForTamedDino_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_WhipForTamedDino.Buff_WhipForTamedDino_C");
		return ptr;
	}

}


