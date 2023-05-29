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
	// # Enums
	// --------------------------------------------------
	/**
	 * BoneSkeletalMesh Mek.Mek
	 */
	enum class EBone_Mek : uint8_t
	{
		Root = 0
	};

	/**
	 * BoneSkeletalMesh SK_HLN_A.SK_HLN_A
	 */
	enum class EBone_SK_HLN_A : uint8_t
	{
		Root = 0
	};

	/**
	 * BoneSkeletalMesh Human_Male_FPV.Human_Male_FPV
	 */
	enum class EBone_Human_Male_FPV : uint8_t
	{
		Root = 0
	};

	/**
	 * BoneSkeletalMesh smallTrap_RIG.smallTrap_RIG
	 */
	enum class EBone_smallTrap_RIG : uint8_t
	{
		d_smallTrap_root_jnt = 0
	};

	/**
	 * BoneSkeletalMesh crossbow_TPV_RIG.crossbow_TPV_RIG
	 */
	enum class EBone_crossbow_TPV_RIG : uint8_t
	{
		d_crossbow_root_jnt = 0
	};

	/**
	 * BoneSkeletalMesh crossbow_FPV_RIG.crossbow_FPV_RIG
	 */
	enum class EBone_crossbow_FPV_RIG : uint8_t
	{
		Root = 0
	};

	/**
	 * BoneSkeletalMesh Compass_FPV_RIG.Compass_FPV_RIG
	 */
	enum class EBone_Compass_FPV_RIG : uint8_t
	{
		d_compass_root_jnt = 0
	};

	/**
	 * BoneSkeletalMesh Compass_TPV_RIG.Compass_TPV_RIG
	 */
	enum class EBone_Compass_TPV_RIG : uint8_t
	{
		d_compass_root_jnt = 0
	};

	/**
	 * BoneSkeletalMesh Map_TPV_RIG.Map_TPV_RIG
	 */
	enum class EBone_Map_TPV_RIG : uint8_t
	{
		d_map_root_jnt = 0
	};

	/**
	 * BoneSkeletalMesh dino_tracking_device_SK.dino_tracking_device_SK
	 */
	enum class EBone_dino_tracking_device_SK : uint8_t
	{
		dino_tracking_device = 0
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
