﻿#pragma once

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
	 * Enum MovieSceneCoreTypes.MovieSceneParticleSection.EParticleKey
	 */
	enum class EParticleKey : uint8_t
	{
		Toggle  = 0,
		Trigger = 1,
		MAX     = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
