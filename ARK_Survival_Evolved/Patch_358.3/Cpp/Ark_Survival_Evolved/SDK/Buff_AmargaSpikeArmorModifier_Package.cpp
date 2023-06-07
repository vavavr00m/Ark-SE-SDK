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
	 * 		Name   -> Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BuffAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitInfo                                                    (Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      TheDamgeType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_AmargaSpikeArmorModifier_C::BuffAdjustDamage(float Damage, struct FHitResult* HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* TheDamgeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BuffAdjustDamage");
		
		ABuff_AmargaSpikeArmorModifier_C_BuffAdjustDamage_Params params {};
		params.Damage = Damage;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.TheDamgeType = TheDamgeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitInfo != nullptr)
			*HitInfo = params.HitInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.UpdateBuffDescription
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_AmargaSpikeArmorModifier_C::UpdateBuffDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.UpdateBuffDescription");
		
		ABuff_AmargaSpikeArmorModifier_C_UpdateBuffDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_AmargaSpikeArmorModifier_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BuffTickClient");
		
		ABuff_AmargaSpikeArmorModifier_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_AmargaSpikeArmorModifier_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BuffTickServer");
		
		ABuff_AmargaSpikeArmorModifier_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BPCustomAllowAddBuff
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_AmargaSpikeArmorModifier_C::BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BPCustomAllowAddBuff");
		
		ABuff_AmargaSpikeArmorModifier_C_BPCustomAllowAddBuff_Params params {};
		params.forCharacter = forCharacter;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BPModifyArmorValue
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 ForItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BaseArmorValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_AmargaSpikeArmorModifier_C::BPModifyArmorValue(class UPrimalItem* ForItem, float BaseArmorValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.BPModifyArmorValue");
		
		ABuff_AmargaSpikeArmorModifier_C_BPModifyArmorValue_Params params {};
		params.ForItem = ForItem;
		params.BaseArmorValue = BaseArmorValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_AmargaSpikeArmorModifier_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.UserConstructionScript");
		
		ABuff_AmargaSpikeArmorModifier_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.ExecuteUbergraph_Buff_AmargaSpikeArmorModifier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_AmargaSpikeArmorModifier_C::ExecuteUbergraph_Buff_AmargaSpikeArmorModifier(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C.ExecuteUbergraph_Buff_AmargaSpikeArmorModifier");
		
		ABuff_AmargaSpikeArmorModifier_C_ExecuteUbergraph_Buff_AmargaSpikeArmorModifier_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_AmargaSpikeArmorModifier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_AmargaSpikeArmorModifier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_AmargaSpikeArmorModifier.Buff_AmargaSpikeArmorModifier_C");
		return ptr;
	}

}


