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
	 * 		Name   -> Function Gen2_AreaBuff_Space_NormalG.Gen2_AreaBuff_Space_NormalG_C.UpdateDayCycleManager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Space_NormalG_C::UpdateDayCycleManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space_NormalG.Gen2_AreaBuff_Space_NormalG_C.UpdateDayCycleManager");
		
		AGen2_AreaBuff_Space_NormalG_C_UpdateDayCycleManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gen2_AreaBuff_Space_NormalG.Gen2_AreaBuff_Space_NormalG_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Space_NormalG_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space_NormalG.Gen2_AreaBuff_Space_NormalG_C.BPDeactivated");
		
		AGen2_AreaBuff_Space_NormalG_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gen2_AreaBuff_Space_NormalG.Gen2_AreaBuff_Space_NormalG_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Space_NormalG_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space_NormalG.Gen2_AreaBuff_Space_NormalG_C.BPSetupForInstigator");
		
		AGen2_AreaBuff_Space_NormalG_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gen2_AreaBuff_Space_NormalG.Gen2_AreaBuff_Space_NormalG_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Space_NormalG_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space_NormalG.Gen2_AreaBuff_Space_NormalG_C.UserConstructionScript");
		
		AGen2_AreaBuff_Space_NormalG_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Gen2_AreaBuff_Space_NormalG.Gen2_AreaBuff_Space_NormalG_C.ExecuteUbergraph_Gen2_AreaBuff_Space_NormalG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Space_NormalG_C::ExecuteUbergraph_Gen2_AreaBuff_Space_NormalG(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Space_NormalG.Gen2_AreaBuff_Space_NormalG_C.ExecuteUbergraph_Gen2_AreaBuff_Space_NormalG");
		
		AGen2_AreaBuff_Space_NormalG_C_ExecuteUbergraph_Gen2_AreaBuff_Space_NormalG_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGen2_AreaBuff_Space_NormalG_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGen2_AreaBuff_Space_NormalG_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Gen2_AreaBuff_Space_NormalG.Gen2_AreaBuff_Space_NormalG_C");
		return ptr;
	}

}


