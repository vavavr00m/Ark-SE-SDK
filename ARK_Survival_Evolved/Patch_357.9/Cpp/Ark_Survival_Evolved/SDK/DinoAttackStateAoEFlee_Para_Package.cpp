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
	 * 		Name   -> Function DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C.Should Frighten Character
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldFrighten                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateAoEFlee_Para_C::ShouldFrightenCharacter(class APrimalCharacter* Character, bool* ShouldFrighten)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C.Should Frighten Character");
		
		UDinoAttackStateAoEFlee_Para_C_ShouldFrightenCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldFrighten != nullptr)
			*ShouldFrighten = params.ShouldFrighten;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C.Get Octree Group
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EServerOctreeGroup                                 OctreeGroup                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateAoEFlee_Para_C::GetOctreeGroup(EServerOctreeGroup* OctreeGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C.Get Octree Group");
		
		UDinoAttackStateAoEFlee_Para_C_GetOctreeGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OctreeGroup != nullptr)
			*OctreeGroup = params.OctreeGroup;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C.ExecuteUbergraph_DinoAttackStateAoEFlee_Para
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateAoEFlee_Para_C::ExecuteUbergraph_DinoAttackStateAoEFlee_Para(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C.ExecuteUbergraph_DinoAttackStateAoEFlee_Para");
		
		UDinoAttackStateAoEFlee_Para_C_ExecuteUbergraph_DinoAttackStateAoEFlee_Para_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateAoEFlee_Para_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateAoEFlee_Para_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C");
		return ptr;
	}

}


