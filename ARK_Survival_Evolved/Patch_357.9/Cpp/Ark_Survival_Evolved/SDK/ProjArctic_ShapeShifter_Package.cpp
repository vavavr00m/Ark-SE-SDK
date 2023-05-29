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
	 * 		Name   -> Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.BPInitializedVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InVelocity                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              CustomSpeed                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjArctic_ShapeShifter_C::BPInitializedVelocity(struct FVector* InVelocity, float CustomSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.BPInitializedVelocity");
		
		AProjArctic_ShapeShifter_C_BPInitializedVelocity_Params params {};
		params.CustomSpeed = CustomSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InVelocity != nullptr)
			*InVelocity = params.InVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjArctic_ShapeShifter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.ReceiveBeginPlay");
		
		AProjArctic_ShapeShifter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjArctic_ShapeShifter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.UserConstructionScript");
		
		AProjArctic_ShapeShifter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.ExecuteUbergraph_ProjArctic_ShapeShifter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjArctic_ShapeShifter_C::ExecuteUbergraph_ProjArctic_ShapeShifter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.ExecuteUbergraph_ProjArctic_ShapeShifter");
		
		AProjArctic_ShapeShifter_C_ExecuteUbergraph_ProjArctic_ShapeShifter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjArctic_ShapeShifter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjArctic_ShapeShifter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C");
		return ptr;
	}

}


