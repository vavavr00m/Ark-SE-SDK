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
	 * 		Name   -> Function Buff_Zipline_Dino_Dinopithecus.Buff_Zipline_Dino_Dinopithecus_C.BuffTickServer
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_Dino_Dinopithecus_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Dino_Dinopithecus.Buff_Zipline_Dino_Dinopithecus_C.BuffTickServer");
		
		ABuff_Zipline_Dino_Dinopithecus_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Zipline_Dino_Dinopithecus.Buff_Zipline_Dino_Dinopithecus_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Zipline_Dino_Dinopithecus_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Dino_Dinopithecus.Buff_Zipline_Dino_Dinopithecus_C.UserConstructionScript");
		
		ABuff_Zipline_Dino_Dinopithecus_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Zipline_Dino_Dinopithecus.Buff_Zipline_Dino_Dinopithecus_C.ExecuteUbergraph_Buff_Zipline_Dino_Dinopithecus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Zipline_Dino_Dinopithecus_C::ExecuteUbergraph_Buff_Zipline_Dino_Dinopithecus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Dino_Dinopithecus.Buff_Zipline_Dino_Dinopithecus_C.ExecuteUbergraph_Buff_Zipline_Dino_Dinopithecus");
		
		ABuff_Zipline_Dino_Dinopithecus_C_ExecuteUbergraph_Buff_Zipline_Dino_Dinopithecus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Zipline_Dino_Dinopithecus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Zipline_Dino_Dinopithecus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Zipline_Dino_Dinopithecus.Buff_Zipline_Dino_Dinopithecus_C");
		return ptr;
	}

}


