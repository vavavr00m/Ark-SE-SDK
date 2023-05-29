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
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.OnRep_CarriedItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOviraptor_Character_BP_C::OnRep_CarriedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.OnRep_CarriedItem");
		
		AOviraptor_Character_BP_C_OnRep_CarriedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.FindCarriedEgg
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsAnimNotify                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOviraptor_Character_BP_C::FindCarriedEgg(bool bIsAnimNotify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.FindCarriedEgg");
		
		AOviraptor_Character_BP_C_FindCarriedEgg_Params params {};
		params.bIsAnimNotify = bIsAnimNotify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.UpdateEggBoost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOviraptor_Character_BP_C::UpdateEggBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.UpdateEggBoost");
		
		AOviraptor_Character_BP_C_UpdateEggBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOviraptor_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.UserConstructionScript");
		
		AOviraptor_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BlueprintTamedTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOviraptor_Character_BP_C::BlueprintTamedTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BlueprintTamedTick");
		
		AOviraptor_Character_BP_C_BlueprintTamedTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOviraptor_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		AOviraptor_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
		params.CustomEventName = CustomEventName;
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.AnimNotifyObject = AnimNotifyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.DoCheckEgg
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOviraptor_Character_BP_C::DoCheckEgg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.DoCheckEgg");
		
		AOviraptor_Character_BP_C_DoCheckEgg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.ExecuteUbergraph_Oviraptor_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOviraptor_Character_BP_C::ExecuteUbergraph_Oviraptor_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.ExecuteUbergraph_Oviraptor_Character_BP");
		
		AOviraptor_Character_BP_C_ExecuteUbergraph_Oviraptor_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOviraptor_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOviraptor_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Oviraptor_Character_BP.Oviraptor_Character_BP_C");
		return ptr;
	}

}


