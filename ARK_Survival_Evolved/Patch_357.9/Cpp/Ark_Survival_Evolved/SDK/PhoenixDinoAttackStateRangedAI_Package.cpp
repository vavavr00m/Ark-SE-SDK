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
	 * 		Name   -> Function PhoenixDinoAttackStateRangedAI.PhoenixDinoAttackStateRangedAI_C.BPCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPhoenixDinoAttackStateRangedAI_C::BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhoenixDinoAttackStateRangedAI.PhoenixDinoAttackStateRangedAI_C.BPCanAttack");
		
		UPhoenixDinoAttackStateRangedAI_C_BPCanAttack_Params params {};
		params.Distance = Distance;
		params.attackRangeOffset = attackRangeOffset;
		params.OtherTarget = OtherTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PhoenixDinoAttackStateRangedAI.PhoenixDinoAttackStateRangedAI_C.ExecuteUbergraph_PhoenixDinoAttackStateRangedAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPhoenixDinoAttackStateRangedAI_C::ExecuteUbergraph_PhoenixDinoAttackStateRangedAI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhoenixDinoAttackStateRangedAI.PhoenixDinoAttackStateRangedAI_C.ExecuteUbergraph_PhoenixDinoAttackStateRangedAI");
		
		UPhoenixDinoAttackStateRangedAI_C_ExecuteUbergraph_PhoenixDinoAttackStateRangedAI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhoenixDinoAttackStateRangedAI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhoenixDinoAttackStateRangedAI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PhoenixDinoAttackStateRangedAI.PhoenixDinoAttackStateRangedAI_C");
		return ptr;
	}

}


