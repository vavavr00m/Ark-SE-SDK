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
	 * 		Name   -> Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.BPIgnoreRadialDamageVictim
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AProjSpaceDolphinBomb_C::BPIgnoreRadialDamageVictim(class AActor* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.BPIgnoreRadialDamageVictim");
		
		AProjSpaceDolphinBomb_C_BPIgnoreRadialDamageVictim_Params params {};
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjSpaceDolphinBomb_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.UserConstructionScript");
		
		AProjSpaceDolphinBomb_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjSpaceDolphinBomb_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.ReceiveTick");
		
		AProjSpaceDolphinBomb_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjSpaceDolphinBomb_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.ReceiveBeginPlay");
		
		AProjSpaceDolphinBomb_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.ExecuteUbergraph_ProjSpaceDolphinBomb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjSpaceDolphinBomb_C::ExecuteUbergraph_ProjSpaceDolphinBomb(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C.ExecuteUbergraph_ProjSpaceDolphinBomb");
		
		AProjSpaceDolphinBomb_C_ExecuteUbergraph_ProjSpaceDolphinBomb_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjSpaceDolphinBomb_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjSpaceDolphinBomb_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjSpaceDolphinBomb.ProjSpaceDolphinBomb_C");
		return ptr;
	}

}


