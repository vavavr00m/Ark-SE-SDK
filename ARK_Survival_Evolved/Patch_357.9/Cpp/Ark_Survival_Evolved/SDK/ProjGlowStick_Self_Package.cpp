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
	 * 		Name   -> Function ProjGlowStick_Self.ProjGlowStick_Self_C.GetGlowstickOwner
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      glowstickOwner                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjGlowStick_Self_C::GetGlowstickOwner(class AActor** glowstickOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjGlowStick_Self.ProjGlowStick_Self_C.GetGlowstickOwner");
		
		AProjGlowStick_Self_C_GetGlowstickOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (glowstickOwner != nullptr)
			*glowstickOwner = params.glowstickOwner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjGlowStick_Self.ProjGlowStick_Self_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjGlowStick_Self_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjGlowStick_Self.ProjGlowStick_Self_C.UserConstructionScript");
		
		AProjGlowStick_Self_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjGlowStick_Self.ProjGlowStick_Self_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjGlowStick_Self_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjGlowStick_Self.ProjGlowStick_Self_C.ReceiveBeginPlay");
		
		AProjGlowStick_Self_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjGlowStick_Self.ProjGlowStick_Self_C.ExecuteUbergraph_ProjGlowStick_Self
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjGlowStick_Self_C::ExecuteUbergraph_ProjGlowStick_Self(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjGlowStick_Self.ProjGlowStick_Self_C.ExecuteUbergraph_ProjGlowStick_Self");
		
		AProjGlowStick_Self_C_ExecuteUbergraph_ProjGlowStick_Self_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjGlowStick_Self_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjGlowStick_Self_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjGlowStick_Self.ProjGlowStick_Self_C");
		return ptr;
	}

}


