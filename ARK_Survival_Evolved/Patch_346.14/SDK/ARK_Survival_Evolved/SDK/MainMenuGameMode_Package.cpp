/**
 * Name: ARK_Survival_Evolved
 * Version: Patch_346.14
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x021C67E0
	 * 		Name   -> Function MainMenuGameMode.MainMenuGameMode_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMainMenuGameMode_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenuGameMode.MainMenuGameMode_C.UserConstructionScript");
		
		AMainMenuGameMode_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C67E0
	 * 		Name   -> Function MainMenuGameMode.MainMenuGameMode_C.ExecuteUbergraph_MainMenuGameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainMenuGameMode_C::ExecuteUbergraph_MainMenuGameMode(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenuGameMode.MainMenuGameMode_C.ExecuteUbergraph_MainMenuGameMode");
		
		AMainMenuGameMode_C_ExecuteUbergraph_MainMenuGameMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AMainMenuGameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainMenuGameMode_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MainMenuGameMode.MainMenuGameMode_C");
		return ptr;
	}

}


