﻿/**
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
	 * 		Name   -> Function DmgType_Projectile_Fire_Ember.DmgType_Projectile_Fire_Ember_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UDmgType_Projectile_Fire_Ember_C::BPAdjustDamage(class AActor* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DmgType_Projectile_Fire_Ember.DmgType_Projectile_Fire_Ember_C.BPAdjustDamage");
		
		UDmgType_Projectile_Fire_Ember_C_BPAdjustDamage_Params params {};
		params.Victim = Victim;
		params.IncomingDamage = IncomingDamage;
		params.TheDamageEvent = TheDamageEvent;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDmgType_Projectile_Fire_Ember_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDmgType_Projectile_Fire_Ember_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Projectile_Fire_Ember.DmgType_Projectile_Fire_Ember_C");
		return ptr;
	}

}


