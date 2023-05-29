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
	 * 		Name   -> Function BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C.IsFacing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Angle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Facing                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTD_CanReachTarget_Fjordhawk_C::IsFacing(class AActor* Actor, const struct FVector& Point, float Angle, bool* Facing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C.IsFacing");
		
		UBTD_CanReachTarget_Fjordhawk_C_IsFacing_Params params {};
		params.Actor = Actor;
		params.Point = Point;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Facing != nullptr)
			*Facing = params.Facing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTD_CanReachTarget_Fjordhawk_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C.ReceiveConditionCheck");
		
		UBTD_CanReachTarget_Fjordhawk_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C.ExecuteUbergraph_BTD_CanReachTarget_Fjordhawk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTD_CanReachTarget_Fjordhawk_C::ExecuteUbergraph_BTD_CanReachTarget_Fjordhawk(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C.ExecuteUbergraph_BTD_CanReachTarget_Fjordhawk");
		
		UBTD_CanReachTarget_Fjordhawk_C_ExecuteUbergraph_BTD_CanReachTarget_Fjordhawk_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTD_CanReachTarget_Fjordhawk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTD_CanReachTarget_Fjordhawk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C");
		return ptr;
	}

}


