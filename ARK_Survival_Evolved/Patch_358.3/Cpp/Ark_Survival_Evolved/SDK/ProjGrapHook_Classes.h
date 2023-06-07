﻿#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass ProjGrapHook.ProjGrapHook_C
	 * Size -> 0x0000 (FullSize[0x06A0] - InheritedSize[0x06A0])
	 */
	class AProjGrapHook_C : public APrimalProjectileGrapplingHook
	{
	public:
		void OnExplode(struct FHitResult* Result);
		void UserConstructionScript();
		void ExecuteUbergraph_ProjGrapHook(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
