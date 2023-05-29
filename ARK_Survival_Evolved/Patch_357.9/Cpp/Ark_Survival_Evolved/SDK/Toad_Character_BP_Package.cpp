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
	 * 		Name   -> Function Toad_Character_BP.Toad_Character_BP_C.BPPreventNotifySound
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundBase*                                  SoundIn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AToad_Character_BP_C::BPPreventNotifySound(class USoundBase* SoundIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Toad_Character_BP.Toad_Character_BP_C.BPPreventNotifySound");
		
		AToad_Character_BP_C_BPPreventNotifySound_Params params {};
		params.SoundIn = SoundIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Toad_Character_BP.Toad_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AToad_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Toad_Character_BP.Toad_Character_BP_C.BlueprintCanRiderAttack");
		
		AToad_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Toad_Character_BP.Toad_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AToad_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Toad_Character_BP.Toad_Character_BP_C.BlueprintCanAttack");
		
		AToad_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Toad_Character_BP.Toad_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AToad_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Toad_Character_BP.Toad_Character_BP_C.UserConstructionScript");
		
		AToad_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Toad_Character_BP.Toad_Character_BP_C.ExecuteUbergraph_Toad_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AToad_Character_BP_C::ExecuteUbergraph_Toad_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Toad_Character_BP.Toad_Character_BP_C.ExecuteUbergraph_Toad_Character_BP");
		
		AToad_Character_BP_C_ExecuteUbergraph_Toad_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AToad_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AToad_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Toad_Character_BP.Toad_Character_BP_C");
		return ptr;
	}

}


