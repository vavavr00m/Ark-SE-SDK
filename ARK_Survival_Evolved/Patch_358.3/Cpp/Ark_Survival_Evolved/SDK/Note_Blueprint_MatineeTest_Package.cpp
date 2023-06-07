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
	 * 		Name   -> Function Note_Blueprint_MatineeTest.Note_Blueprint_MatineeTest_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ANote_Blueprint_MatineeTest_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Note_Blueprint_MatineeTest.Note_Blueprint_MatineeTest_C.UserConstructionScript");
		
		ANote_Blueprint_MatineeTest_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Note_Blueprint_MatineeTest.Note_Blueprint_MatineeTest_C.ExecuteUbergraph_Note_Blueprint_MatineeTest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ANote_Blueprint_MatineeTest_C::ExecuteUbergraph_Note_Blueprint_MatineeTest(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Note_Blueprint_MatineeTest.Note_Blueprint_MatineeTest_C.ExecuteUbergraph_Note_Blueprint_MatineeTest");
		
		ANote_Blueprint_MatineeTest_C_ExecuteUbergraph_Note_Blueprint_MatineeTest_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANote_Blueprint_MatineeTest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANote_Blueprint_MatineeTest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Note_Blueprint_MatineeTest.Note_Blueprint_MatineeTest_C");
		return ptr;
	}

}


