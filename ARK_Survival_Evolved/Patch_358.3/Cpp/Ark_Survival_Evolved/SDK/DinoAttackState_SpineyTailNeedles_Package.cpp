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
	 * 		Name   -> Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.GetGravityBias
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     StartLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ZBias                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_SpineyTailNeedles_C::GetGravityBias(const struct FVector& Velocity, const struct FVector& StartLocation, const struct FVector& TargetLocation, float* ZBias)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.GetGravityBias");
		
		UDinoAttackState_SpineyTailNeedles_C_GetGravityBias_Params params {};
		params.Velocity = Velocity;
		params.StartLocation = StartLocation;
		params.TargetLocation = TargetLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ZBias != nullptr)
			*ZBias = params.ZBias;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.Get Socket Location
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_SpineyTailNeedles_C::GetSocketLocation(const class FName& SocketName, float Offset, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.Get Socket Location");
		
		UDinoAttackState_SpineyTailNeedles_C_GetSocketLocation_Params params {};
		params.SocketName = SocketName;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.OffsetVectorRandomly
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     VectorIn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     newVector                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_SpineyTailNeedles_C::OffsetVectorRandomly(const struct FVector& VectorIn, struct FVector* newVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.OffsetVectorRandomly");
		
		UDinoAttackState_SpineyTailNeedles_C_OffsetVectorRandomly_Params params {};
		params.VectorIn = VectorIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (newVector != nullptr)
			*newVector = params.newVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.ExecuteUbergraph_DinoAttackState_SpineyTailNeedles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_SpineyTailNeedles_C::ExecuteUbergraph_DinoAttackState_SpineyTailNeedles(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.ExecuteUbergraph_DinoAttackState_SpineyTailNeedles");
		
		UDinoAttackState_SpineyTailNeedles_C_ExecuteUbergraph_DinoAttackState_SpineyTailNeedles_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackState_SpineyTailNeedles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackState_SpineyTailNeedles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C");
		return ptr;
	}

}


