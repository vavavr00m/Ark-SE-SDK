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
	 * 		Name   -> Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.SetFadingSkeletalMesh
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMesh*                               TheMesh                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADestroyedMesh_SimpleFadeOut_C::SetFadingSkeletalMesh(class USkeletalMesh* TheMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.SetFadingSkeletalMesh");
		
		ADestroyedMesh_SimpleFadeOut_C_SetFadingSkeletalMesh_Params params {};
		params.TheMesh = TheMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.SetFadingStaticMesh
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStaticMesh*                                 TheMesh                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADestroyedMesh_SimpleFadeOut_C::SetFadingStaticMesh(class UStaticMesh* TheMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.SetFadingStaticMesh");
		
		ADestroyedMesh_SimpleFadeOut_C_SetFadingStaticMesh_Params params {};
		params.TheMesh = TheMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.GetFadingMeshComponent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UMeshComponent* ADestroyedMesh_SimpleFadeOut_C::GetFadingMeshComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.GetFadingMeshComponent");
		
		ADestroyedMesh_SimpleFadeOut_C_GetFadingMeshComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADestroyedMesh_SimpleFadeOut_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.UserConstructionScript");
		
		ADestroyedMesh_SimpleFadeOut_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADestroyedMesh_SimpleFadeOut_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.ReceiveTick");
		
		ADestroyedMesh_SimpleFadeOut_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.ExecuteUbergraph_DestroyedMesh_SimpleFadeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADestroyedMesh_SimpleFadeOut_C::ExecuteUbergraph_DestroyedMesh_SimpleFadeOut(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.ExecuteUbergraph_DestroyedMesh_SimpleFadeOut");
		
		ADestroyedMesh_SimpleFadeOut_C_ExecuteUbergraph_DestroyedMesh_SimpleFadeOut_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADestroyedMesh_SimpleFadeOut_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADestroyedMesh_SimpleFadeOut_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C");
		return ptr;
	}

}


