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
	 * 		Name   -> Function DmgType_Projectile_Ice_Amarga.DmgType_Projectile_Ice_Amarga_C.OverrideBuffToGiveVictimCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UClass* UDmgType_Projectile_Ice_Amarga_C::OverrideBuffToGiveVictimCharacter(class APrimalCharacter* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DmgType_Projectile_Ice_Amarga.DmgType_Projectile_Ice_Amarga_C.OverrideBuffToGiveVictimCharacter");
		
		UDmgType_Projectile_Ice_Amarga_C_OverrideBuffToGiveVictimCharacter_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DmgType_Projectile_Ice_Amarga.DmgType_Projectile_Ice_Amarga_C.GetFreezeBuffAmountPerHit
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDmgType_Projectile_Ice_Amarga_C::GetFreezeBuffAmountPerHit(class APrimalCharacter* Target, class AActor* DamageCauser, float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DmgType_Projectile_Ice_Amarga.DmgType_Projectile_Ice_Amarga_C.GetFreezeBuffAmountPerHit");
		
		UDmgType_Projectile_Ice_Amarga_C_GetFreezeBuffAmountPerHit_Params params {};
		params.Target = Target;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDmgType_Projectile_Ice_Amarga_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDmgType_Projectile_Ice_Amarga_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Projectile_Ice_Amarga.DmgType_Projectile_Ice_Amarga_C");
		return ptr;
	}

}


