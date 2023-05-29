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
	 * 		Name   -> Function Dilo_Character_BP.Dilo_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADilo_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dilo_Character_BP.Dilo_Character_BP_C.BlueprintCanAttack");
		
		ADilo_Character_BP_C_BlueprintCanAttack_Params params {};
		params.AttackIndex = AttackIndex;
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
	 * 		Name   -> Function Dilo_Character_BP.Dilo_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADilo_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dilo_Character_BP.Dilo_Character_BP_C.UserConstructionScript");
		
		ADilo_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Dilo_Character_BP.Dilo_Character_BP_C.ExecuteUbergraph_Dilo_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADilo_Character_BP_C::ExecuteUbergraph_Dilo_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dilo_Character_BP.Dilo_Character_BP_C.ExecuteUbergraph_Dilo_Character_BP");
		
		ADilo_Character_BP_C_ExecuteUbergraph_Dilo_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADilo_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADilo_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Dilo_Character_BP.Dilo_Character_BP_C");
		return ptr;
	}

}


