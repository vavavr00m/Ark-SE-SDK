#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C.GetFlyingBlendspaceCoords
	 */
	struct USpaceWhale_Skeleton_AnimBlueprint_C_GetFlyingBlendspaceCoords_Params
	{
	public:
		class APrimalDinoCharacter*                                ForDino;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           BlendspaceCoords;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
	 */
	struct USpaceWhale_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SpaceWhale_Skeleton_AnimBlueprint
	 */
	struct USpaceWhale_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SpaceWhale_Skeleton_AnimBlueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
