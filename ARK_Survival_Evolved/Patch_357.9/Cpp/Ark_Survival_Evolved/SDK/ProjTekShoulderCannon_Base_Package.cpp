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
	 * 		Name   -> Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.BPIgnoreRadialDamageVictim
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AProjTekShoulderCannon_Base_C::BPIgnoreRadialDamageVictim(class AActor* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.BPIgnoreRadialDamageVictim");
		
		AProjTekShoulderCannon_Base_C_BPIgnoreRadialDamageVictim_Params params {};
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjTekShoulderCannon_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.UserConstructionScript");
		
		AProjTekShoulderCannon_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjTekShoulderCannon_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.ReceiveBeginPlay");
		
		AProjTekShoulderCannon_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.OnExplode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (Parm, OutParm, ReferenceParm)
	 */
	void AProjTekShoulderCannon_Base_C::OnExplode(struct FHitResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.OnExplode");
		
		AProjTekShoulderCannon_Base_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.ExecuteUbergraph_ProjTekShoulderCannon_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjTekShoulderCannon_Base_C::ExecuteUbergraph_ProjTekShoulderCannon_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C.ExecuteUbergraph_ProjTekShoulderCannon_Base");
		
		AProjTekShoulderCannon_Base_C_ExecuteUbergraph_ProjTekShoulderCannon_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjTekShoulderCannon_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjTekShoulderCannon_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjTekShoulderCannon_Base.ProjTekShoulderCannon_Base_C");
		return ptr;
	}

}


