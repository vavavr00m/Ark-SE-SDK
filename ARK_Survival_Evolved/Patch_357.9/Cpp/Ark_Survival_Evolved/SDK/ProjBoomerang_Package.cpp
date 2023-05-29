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
	 * 		Name   -> Function ProjBoomerang.ProjBoomerang_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjBoomerang_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjBoomerang.ProjBoomerang_C.UserConstructionScript");
		
		AProjBoomerang_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjBoomerang.ProjBoomerang_C.BndEvt__Projectile SFX_K2Node_ComponentBoundEvent_111_OnAudioFinished__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProjBoomerang_C::BndEvt__ProjectileSFX_K2Node_ComponentBoundEvent_111_OnAudioFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjBoomerang.ProjBoomerang_C.BndEvt__Projectile SFX_K2Node_ComponentBoundEvent_111_OnAudioFinished__DelegateSignature");
		
		AProjBoomerang_C_BndEvt__ProjectileSFX_K2Node_ComponentBoundEvent_111_OnAudioFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjBoomerang.ProjBoomerang_C.ExecuteUbergraph_ProjBoomerang
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjBoomerang_C::ExecuteUbergraph_ProjBoomerang(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjBoomerang.ProjBoomerang_C.ExecuteUbergraph_ProjBoomerang");
		
		AProjBoomerang_C_ExecuteUbergraph_ProjBoomerang_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjBoomerang_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjBoomerang_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjBoomerang.ProjBoomerang_C");
		return ptr;
	}

}


