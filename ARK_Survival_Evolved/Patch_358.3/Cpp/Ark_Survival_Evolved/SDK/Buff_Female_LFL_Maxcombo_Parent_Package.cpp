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
	 * 		Name   -> Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.CalculateDoTDamage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeSinceLastDoT                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Damage                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Female_LFL_Maxcombo_Parent_C::CalculateDoTDamage(float TimeSinceLastDoT, float* Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.CalculateDoTDamage");
		
		ABuff_Female_LFL_Maxcombo_Parent_C_CalculateDoTDamage_Params params {};
		params.TimeSinceLastDoT = TimeSinceLastDoT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Damage != nullptr)
			*Damage = params.Damage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Female_LFL_Maxcombo_Parent_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.BuffTickServer");
		
		ABuff_Female_LFL_Maxcombo_Parent_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.Do Damage Over TimeFn
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             LastDotTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Female_LFL_Maxcombo_Parent_C::DoDamageOverTimeFn(double LastDotTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.Do Damage Over TimeFn");
		
		ABuff_Female_LFL_Maxcombo_Parent_C_DoDamageOverTimeFn_Params params {};
		params.LastDotTime = LastDotTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.BPAdjustStatusValueModification
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalCharacterStatusComponent*             ForComponent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EPrimalCharacterStatusValue                        ValueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InAmount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      DamageTypeClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bManualModification                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_Female_LFL_Maxcombo_Parent_C::BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent* ForComponent, EPrimalCharacterStatusValue ValueType, float InAmount, class UClass* DamageTypeClass, bool bManualModification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.BPAdjustStatusValueModification");
		
		ABuff_Female_LFL_Maxcombo_Parent_C_BPAdjustStatusValueModification_Params params {};
		params.ForComponent = ForComponent;
		params.ValueType = ValueType;
		params.InAmount = InAmount;
		params.DamageTypeClass = DamageTypeClass;
		params.bManualModification = bManualModification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Female_LFL_Maxcombo_Parent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.ReceiveBeginPlay");
		
		ABuff_Female_LFL_Maxcombo_Parent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Female_LFL_Maxcombo_Parent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.ReceiveEndPlay");
		
		ABuff_Female_LFL_Maxcombo_Parent_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Female_LFL_Maxcombo_Parent_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.UserConstructionScript");
		
		ABuff_Female_LFL_Maxcombo_Parent_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.ExecuteUbergraph_Buff_Female_LFL_Maxcombo_Parent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Female_LFL_Maxcombo_Parent_C::ExecuteUbergraph_Buff_Female_LFL_Maxcombo_Parent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C.ExecuteUbergraph_Buff_Female_LFL_Maxcombo_Parent");
		
		ABuff_Female_LFL_Maxcombo_Parent_C_ExecuteUbergraph_Buff_Female_LFL_Maxcombo_Parent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Female_LFL_Maxcombo_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Female_LFL_Maxcombo_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Female_LFL_Maxcombo_Parent.Buff_Female_LFL_Maxcombo_Parent_C");
		return ptr;
	}

}


