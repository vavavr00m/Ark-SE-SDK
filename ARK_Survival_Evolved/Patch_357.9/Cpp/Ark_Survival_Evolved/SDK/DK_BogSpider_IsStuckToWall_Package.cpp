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
	 * 		Name   -> Function DK_BogSpider_IsStuckToWall.DK_BogSpider_IsStuckToWall_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDK_BogSpider_IsStuckToWall_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DK_BogSpider_IsStuckToWall.DK_BogSpider_IsStuckToWall_C.ReceiveConditionCheck");
		
		UDK_BogSpider_IsStuckToWall_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DK_BogSpider_IsStuckToWall.DK_BogSpider_IsStuckToWall_C.ExecuteUbergraph_DK_BogSpider_IsStuckToWall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDK_BogSpider_IsStuckToWall_C::ExecuteUbergraph_DK_BogSpider_IsStuckToWall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DK_BogSpider_IsStuckToWall.DK_BogSpider_IsStuckToWall_C.ExecuteUbergraph_DK_BogSpider_IsStuckToWall");
		
		UDK_BogSpider_IsStuckToWall_C_ExecuteUbergraph_DK_BogSpider_IsStuckToWall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDK_BogSpider_IsStuckToWall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDK_BogSpider_IsStuckToWall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DK_BogSpider_IsStuckToWall.DK_BogSpider_IsStuckToWall_C");
		return ptr;
	}

}


