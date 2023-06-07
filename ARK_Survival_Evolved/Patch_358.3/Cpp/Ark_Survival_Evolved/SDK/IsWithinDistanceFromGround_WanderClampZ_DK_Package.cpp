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
	 * 		Name   -> Function IsWithinDistanceFromGround_WanderClampZ_DK.IsWithinDistanceFromGround_WanderClampZ_DK_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIsWithinDistanceFromGround_WanderClampZ_DK_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IsWithinDistanceFromGround_WanderClampZ_DK.IsWithinDistanceFromGround_WanderClampZ_DK_C.ReceiveConditionCheck");
		
		UIsWithinDistanceFromGround_WanderClampZ_DK_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function IsWithinDistanceFromGround_WanderClampZ_DK.IsWithinDistanceFromGround_WanderClampZ_DK_C.ExecuteUbergraph_IsWithinDistanceFromGround_WanderClampZ_DK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIsWithinDistanceFromGround_WanderClampZ_DK_C::ExecuteUbergraph_IsWithinDistanceFromGround_WanderClampZ_DK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IsWithinDistanceFromGround_WanderClampZ_DK.IsWithinDistanceFromGround_WanderClampZ_DK_C.ExecuteUbergraph_IsWithinDistanceFromGround_WanderClampZ_DK");
		
		UIsWithinDistanceFromGround_WanderClampZ_DK_C_ExecuteUbergraph_IsWithinDistanceFromGround_WanderClampZ_DK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsWithinDistanceFromGround_WanderClampZ_DK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsWithinDistanceFromGround_WanderClampZ_DK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IsWithinDistanceFromGround_WanderClampZ_DK.IsWithinDistanceFromGround_WanderClampZ_DK_C");
		return ptr;
	}

}


