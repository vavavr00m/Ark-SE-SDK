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
	 * 		Name   -> Function BeginFly_TK_Archa.BeginFly_TK_Archa_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBeginFly_TK_Archa_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BeginFly_TK_Archa.BeginFly_TK_Archa_C.ReceiveExecute");
		
		UBeginFly_TK_Archa_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BeginFly_TK_Archa.BeginFly_TK_Archa_C.ExecuteUbergraph_BeginFly_TK_Archa
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBeginFly_TK_Archa_C::ExecuteUbergraph_BeginFly_TK_Archa(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BeginFly_TK_Archa.BeginFly_TK_Archa_C.ExecuteUbergraph_BeginFly_TK_Archa");
		
		UBeginFly_TK_Archa_C_ExecuteUbergraph_BeginFly_TK_Archa_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBeginFly_TK_Archa_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBeginFly_TK_Archa_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BeginFly_TK_Archa.BeginFly_TK_Archa_C");
		return ptr;
	}

}


