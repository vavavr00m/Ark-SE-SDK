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
	 * 		Name   -> Function DinoSpawnEntriesDamiensAtoll.DinoSpawnEntriesDamiensAtoll_C.ExecuteUbergraph_DinoSpawnEntriesDamiensAtoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSpawnEntriesDamiensAtoll_C::ExecuteUbergraph_DinoSpawnEntriesDamiensAtoll(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesDamiensAtoll.DinoSpawnEntriesDamiensAtoll_C.ExecuteUbergraph_DinoSpawnEntriesDamiensAtoll");
		
		UDinoSpawnEntriesDamiensAtoll_C_ExecuteUbergraph_DinoSpawnEntriesDamiensAtoll_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSpawnEntriesDamiensAtoll_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSpawnEntriesDamiensAtoll_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesDamiensAtoll.DinoSpawnEntriesDamiensAtoll_C");
		return ptr;
	}

}


