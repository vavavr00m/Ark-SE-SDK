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
	 * 		Name   -> Function SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C.GetFlyingBlendspaceCoords
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        ForDino                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   BlendspaceCoords                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpaceWhale_Skeleton_AnimBlueprint_C::GetFlyingBlendspaceCoords(class APrimalDinoCharacter* ForDino, struct FVector2D* BlendspaceCoords)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C.GetFlyingBlendspaceCoords");
		
		USpaceWhale_Skeleton_AnimBlueprint_C_GetFlyingBlendspaceCoords_Params params {};
		params.ForDino = ForDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BlendspaceCoords != nullptr)
			*BlendspaceCoords = params.BlendspaceCoords;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpaceWhale_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		USpaceWhale_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SpaceWhale_Skeleton_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpaceWhale_Skeleton_AnimBlueprint_C::ExecuteUbergraph_SpaceWhale_Skeleton_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SpaceWhale_Skeleton_AnimBlueprint");
		
		USpaceWhale_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SpaceWhale_Skeleton_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpaceWhale_Skeleton_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpaceWhale_Skeleton_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C");
		return ptr;
	}

}


