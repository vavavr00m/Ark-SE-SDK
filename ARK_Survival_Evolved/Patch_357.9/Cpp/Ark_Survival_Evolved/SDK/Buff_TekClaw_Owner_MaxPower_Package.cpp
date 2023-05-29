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
	 * 		Name   -> Function Buff_TekClaw_Owner_MaxPower.Buff_TekClaw_Owner_MaxPower_C.BPAdjustImpulseFromDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     DesiredImpulse                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DamageTaken                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class APawn*                                       PawnInstigator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	struct FVector ABuff_TekClaw_Owner_MaxPower_C::BPAdjustImpulseFromDamage(const struct FVector& DesiredImpulse, float DamageTaken, const struct FDamageEvent& TheDamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Owner_MaxPower.Buff_TekClaw_Owner_MaxPower_C.BPAdjustImpulseFromDamage");
		
		ABuff_TekClaw_Owner_MaxPower_C_BPAdjustImpulseFromDamage_Params params {};
		params.DesiredImpulse = DesiredImpulse;
		params.DamageTaken = DamageTaken;
		params.TheDamageEvent = TheDamageEvent;
		params.PawnInstigator = PawnInstigator;
		params.DamageCauser = DamageCauser;
		params.bIsPointDamage = bIsPointDamage;
		params.PointHitInfo = PointHitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekClaw_Owner_MaxPower.Buff_TekClaw_Owner_MaxPower_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekClaw_Owner_MaxPower_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Owner_MaxPower.Buff_TekClaw_Owner_MaxPower_C.UserConstructionScript");
		
		ABuff_TekClaw_Owner_MaxPower_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_TekClaw_Owner_MaxPower.Buff_TekClaw_Owner_MaxPower_C.ExecuteUbergraph_Buff_TekClaw_Owner_MaxPower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekClaw_Owner_MaxPower_C::ExecuteUbergraph_Buff_TekClaw_Owner_MaxPower(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekClaw_Owner_MaxPower.Buff_TekClaw_Owner_MaxPower_C.ExecuteUbergraph_Buff_TekClaw_Owner_MaxPower");
		
		ABuff_TekClaw_Owner_MaxPower_C_ExecuteUbergraph_Buff_TekClaw_Owner_MaxPower_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekClaw_Owner_MaxPower_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekClaw_Owner_MaxPower_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekClaw_Owner_MaxPower.Buff_TekClaw_Owner_MaxPower_C");
		return ptr;
	}

}


