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
	 * 		Name   -> Function ParaEnemyWarning_Emitter.ParaEnemyWarning_Emitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AParaEnemyWarning_Emitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParaEnemyWarning_Emitter.ParaEnemyWarning_Emitter_C.UserConstructionScript");
		
		AParaEnemyWarning_Emitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ParaEnemyWarning_Emitter.ParaEnemyWarning_Emitter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AParaEnemyWarning_Emitter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParaEnemyWarning_Emitter.ParaEnemyWarning_Emitter_C.ReceiveBeginPlay");
		
		AParaEnemyWarning_Emitter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ParaEnemyWarning_Emitter.ParaEnemyWarning_Emitter_C.ExecuteUbergraph_ParaEnemyWarning_Emitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AParaEnemyWarning_Emitter_C::ExecuteUbergraph_ParaEnemyWarning_Emitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParaEnemyWarning_Emitter.ParaEnemyWarning_Emitter_C.ExecuteUbergraph_ParaEnemyWarning_Emitter");
		
		AParaEnemyWarning_Emitter_C_ExecuteUbergraph_ParaEnemyWarning_Emitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AParaEnemyWarning_Emitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AParaEnemyWarning_Emitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ParaEnemyWarning_Emitter.ParaEnemyWarning_Emitter_C");
		return ptr;
	}

}


