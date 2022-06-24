﻿#pragma once

/**
 * Name: ARK_Survival_Evolved
 * Version: Patch_346.14
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MovieSceneCore.RuntimeMovieScenePlayer.Play
	 */
	struct URuntimeMovieScenePlayer_Play_Params
	{	};

	/**
	 * Function MovieSceneCore.RuntimeMovieScenePlayer.Pause
	 */
	struct URuntimeMovieScenePlayer_Pause_Params
	{	};

	/**
	 * Function MovieSceneCore.RuntimeMovieScenePlayer.CreateRuntimeMovieScenePlayer
	 */
	struct URuntimeMovieScenePlayer_CreateRuntimeMovieScenePlayer_Params
	{
	public:
		class ULevel*                                              Level;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UMovieSceneBindings*                                 InMovieSceneBindings;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class URuntimeMovieScenePlayer*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
