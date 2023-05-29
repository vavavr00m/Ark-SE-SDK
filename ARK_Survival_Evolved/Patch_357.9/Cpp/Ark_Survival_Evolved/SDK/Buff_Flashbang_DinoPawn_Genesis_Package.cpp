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
	 * 		Name   -> Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.IsDotProductValid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Flashbang_DinoPawn_Genesis_C::IsDotProductValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.IsDotProductValid");
		
		ABuff_Flashbang_DinoPawn_Genesis_C_IsDotProductValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.BPPreSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Flashbang_DinoPawn_Genesis_C::BPPreSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.BPPreSetupForInstigator");
		
		ABuff_Flashbang_DinoPawn_Genesis_C_BPPreSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Flashbang_DinoPawn_Genesis_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.BPSetupForInstigator");
		
		ABuff_Flashbang_DinoPawn_Genesis_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.PlayStartledAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Flashbang_DinoPawn_Genesis_C::PlayStartledAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.PlayStartledAnim");
		
		ABuff_Flashbang_DinoPawn_Genesis_C_PlayStartledAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.BPCheckPreventInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Flashbang_DinoPawn_Genesis_C::BPCheckPreventInput(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.BPCheckPreventInput");
		
		ABuff_Flashbang_DinoPawn_Genesis_C_BPCheckPreventInput_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Flashbang_DinoPawn_Genesis_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.UserConstructionScript");
		
		ABuff_Flashbang_DinoPawn_Genesis_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.BPActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Flashbang_DinoPawn_Genesis_C::BPActivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.BPActivated");
		
		ABuff_Flashbang_DinoPawn_Genesis_C_BPActivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.ExecuteUbergraph_Buff_Flashbang_DinoPawn_Genesis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Flashbang_DinoPawn_Genesis_C::ExecuteUbergraph_Buff_Flashbang_DinoPawn_Genesis(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C.ExecuteUbergraph_Buff_Flashbang_DinoPawn_Genesis");
		
		ABuff_Flashbang_DinoPawn_Genesis_C_ExecuteUbergraph_Buff_Flashbang_DinoPawn_Genesis_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Flashbang_DinoPawn_Genesis_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Flashbang_DinoPawn_Genesis_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Flashbang_DinoPawn_Genesis.Buff_Flashbang_DinoPawn_Genesis_C");
		return ptr;
	}

}


