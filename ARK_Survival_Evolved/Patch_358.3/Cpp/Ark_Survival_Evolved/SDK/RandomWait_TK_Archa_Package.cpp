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
	 * 		Name   -> Function RandomWait_TK_Archa.RandomWait_TK_Archa_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URandomWait_TK_Archa_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomWait_TK_Archa.RandomWait_TK_Archa_C.ReceiveExecute");
		
		URandomWait_TK_Archa_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RandomWait_TK_Archa.RandomWait_TK_Archa_C.ExecuteUbergraph_RandomWait_TK_Archa
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URandomWait_TK_Archa_C::ExecuteUbergraph_RandomWait_TK_Archa(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomWait_TK_Archa.RandomWait_TK_Archa_C.ExecuteUbergraph_RandomWait_TK_Archa");
		
		URandomWait_TK_Archa_C_ExecuteUbergraph_RandomWait_TK_Archa_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URandomWait_TK_Archa_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URandomWait_TK_Archa_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RandomWait_TK_Archa.RandomWait_TK_Archa_C");
		return ptr;
	}

}


