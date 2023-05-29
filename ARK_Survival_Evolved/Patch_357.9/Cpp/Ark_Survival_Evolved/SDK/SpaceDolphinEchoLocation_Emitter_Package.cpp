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
	 * 		Name   -> Function SpaceDolphinEchoLocation_Emitter.SpaceDolphinEchoLocation_Emitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphinEchoLocation_Emitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphinEchoLocation_Emitter.SpaceDolphinEchoLocation_Emitter_C.UserConstructionScript");
		
		ASpaceDolphinEchoLocation_Emitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphinEchoLocation_Emitter.SpaceDolphinEchoLocation_Emitter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphinEchoLocation_Emitter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphinEchoLocation_Emitter.SpaceDolphinEchoLocation_Emitter_C.ReceiveBeginPlay");
		
		ASpaceDolphinEchoLocation_Emitter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphinEchoLocation_Emitter.SpaceDolphinEchoLocation_Emitter_C.ExecuteUbergraph_SpaceDolphinEchoLocation_Emitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphinEchoLocation_Emitter_C::ExecuteUbergraph_SpaceDolphinEchoLocation_Emitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphinEchoLocation_Emitter.SpaceDolphinEchoLocation_Emitter_C.ExecuteUbergraph_SpaceDolphinEchoLocation_Emitter");
		
		ASpaceDolphinEchoLocation_Emitter_C_ExecuteUbergraph_SpaceDolphinEchoLocation_Emitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpaceDolphinEchoLocation_Emitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpaceDolphinEchoLocation_Emitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpaceDolphinEchoLocation_Emitter.SpaceDolphinEchoLocation_Emitter_C");
		return ptr;
	}

}


