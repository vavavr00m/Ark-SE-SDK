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
	 * 		Name   -> Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.GetPointsAroundTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     StartLoc                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     EndLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_MoveAroundTarget_C::GetPointsAroundTarget(float Direction, const struct FVector& StartLoc, const struct FVector& EndLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.GetPointsAroundTarget");
		
		UBTT_MoveAroundTarget_C_GetPointsAroundTarget_Params params {};
		params.Direction = Direction;
		params.StartLoc = StartLoc;
		params.EndLoc = EndLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_MoveAroundTarget_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.ReceiveTick");
		
		UBTT_MoveAroundTarget_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_MoveAroundTarget_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.ReceiveExecute");
		
		UBTT_MoveAroundTarget_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.ExecuteUbergraph_BTT_MoveAroundTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTT_MoveAroundTarget_C::ExecuteUbergraph_BTT_MoveAroundTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.ExecuteUbergraph_BTT_MoveAroundTarget");
		
		UBTT_MoveAroundTarget_C_ExecuteUbergraph_BTT_MoveAroundTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_MoveAroundTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_MoveAroundTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_MoveAroundTarget.BTT_MoveAroundTarget_C");
		return ptr;
	}

}


