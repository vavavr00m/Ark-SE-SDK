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
	 * 		Name   -> Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Gardens_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.UserConstructionScript");
		
		AGen2_AreaBuff_Gardens_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGen2_AreaBuff_Gardens_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.ReceiveBeginPlay");
		
		AGen2_AreaBuff_Gardens_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Gardens_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.BPDeactivated");
		
		AGen2_AreaBuff_Gardens_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.ExecuteUbergraph_Gen2_AreaBuff_Gardens
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGen2_AreaBuff_Gardens_C::ExecuteUbergraph_Gen2_AreaBuff_Gardens(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C.ExecuteUbergraph_Gen2_AreaBuff_Gardens");
		
		AGen2_AreaBuff_Gardens_C_ExecuteUbergraph_Gen2_AreaBuff_Gardens_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGen2_AreaBuff_Gardens_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGen2_AreaBuff_Gardens_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Gen2_AreaBuff_Gardens.Gen2_AreaBuff_Gardens_C");
		return ptr;
	}

}


