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
	 * 		Name   -> Function GetClosestTree.GetClosestTree_C.GetClosestTree
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AllowPrev                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ItemIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UStaticMeshComponent*                        treeComp                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGetClosestTree_C::GetClosestTree(class AActor* OwnerActor, bool AllowPrev, int32_t* ItemIndex, class UStaticMeshComponent** treeComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GetClosestTree.GetClosestTree_C.GetClosestTree");
		
		UGetClosestTree_C_GetClosestTree_Params params {};
		params.OwnerActor = OwnerActor;
		params.AllowPrev = AllowPrev;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemIndex != nullptr)
			*ItemIndex = params.ItemIndex;
		if (treeComp != nullptr)
			*treeComp = params.treeComp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GetClosestTree.GetClosestTree_C.GetPointOnTreeSurface
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         treeComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     origPoint                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ItemIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGetClosestTree_C::GetPointOnTreeSurface(class UPrimitiveComponent* treeComp, const struct FVector& origPoint, int32_t ItemIndex, class AActor* OwnerActor, struct FVector* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GetClosestTree.GetClosestTree_C.GetPointOnTreeSurface");
		
		UGetClosestTree_C_GetPointOnTreeSurface_Params params {};
		params.treeComp = treeComp;
		params.origPoint = origPoint;
		params.ItemIndex = ItemIndex;
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GetClosestTree.GetClosestTree_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGetClosestTree_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GetClosestTree.GetClosestTree_C.ReceiveExecute");
		
		UGetClosestTree_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function GetClosestTree.GetClosestTree_C.ExecuteUbergraph_GetClosestTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGetClosestTree_C::ExecuteUbergraph_GetClosestTree(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GetClosestTree.GetClosestTree_C.ExecuteUbergraph_GetClosestTree");
		
		UGetClosestTree_C_ExecuteUbergraph_GetClosestTree_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetClosestTree_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetClosestTree_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GetClosestTree.GetClosestTree_C");
		return ptr;
	}

}


