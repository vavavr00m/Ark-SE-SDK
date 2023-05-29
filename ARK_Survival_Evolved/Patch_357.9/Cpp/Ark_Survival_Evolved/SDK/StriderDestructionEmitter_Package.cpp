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
	 * 		Name   -> Function StriderDestructionEmitter.StriderDestructionEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStriderDestructionEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderDestructionEmitter.StriderDestructionEmitter_C.UserConstructionScript");
		
		AStriderDestructionEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function StriderDestructionEmitter.StriderDestructionEmitter_C.ExecuteUbergraph_StriderDestructionEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStriderDestructionEmitter_C::ExecuteUbergraph_StriderDestructionEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StriderDestructionEmitter.StriderDestructionEmitter_C.ExecuteUbergraph_StriderDestructionEmitter");
		
		AStriderDestructionEmitter_C_ExecuteUbergraph_StriderDestructionEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStriderDestructionEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStriderDestructionEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StriderDestructionEmitter.StriderDestructionEmitter_C");
		return ptr;
	}

}


