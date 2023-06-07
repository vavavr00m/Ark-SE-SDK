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
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Lunar_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.BPTimerServer");
		
		AXenomorph_Character_BP_Male_Lunar_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.InitializeDive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Lunar_C::InitializeDive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.InitializeDive");
		
		AXenomorph_Character_BP_Male_Lunar_C_InitializeDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.Can Dive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_Lunar_C::CanDive(bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.Can Dive");
		
		AXenomorph_Character_BP_Male_Lunar_C_CanDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.ShouldUnbury
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AXenomorph_Character_BP_Male_Lunar_C::ShouldUnbury()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.ShouldUnbury");
		
		AXenomorph_Character_BP_Male_Lunar_C_ShouldUnbury_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.ShouldBury
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_Lunar_C::ShouldBury(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.ShouldBury");
		
		AXenomorph_Character_BP_Male_Lunar_C_ShouldBury_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Lunar_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.UserConstructionScript");
		
		AXenomorph_Character_BP_Male_Lunar_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.OnStartDayTime_Xeno
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Lunar_C::OnStartDayTime_Xeno()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.OnStartDayTime_Xeno");
		
		AXenomorph_Character_BP_Male_Lunar_C_OnStartDayTime_Xeno_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Lunar_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.ReceiveBeginPlay");
		
		AXenomorph_Character_BP_Male_Lunar_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AXenomorph_Character_BP_Male_Lunar_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.ReceiveDestroyed");
		
		AXenomorph_Character_BP_Male_Lunar_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_Lunar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AXenomorph_Character_BP_Male_Lunar_C::ExecuteUbergraph_Xenomorph_Character_BP_Male_Lunar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_Lunar");
		
		AXenomorph_Character_BP_Male_Lunar_C_ExecuteUbergraph_Xenomorph_Character_BP_Male_Lunar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AXenomorph_Character_BP_Male_Lunar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AXenomorph_Character_BP_Male_Lunar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C");
		return ptr;
	}

}


