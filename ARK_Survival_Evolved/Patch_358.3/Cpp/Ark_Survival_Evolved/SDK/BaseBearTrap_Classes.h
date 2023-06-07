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
	 * BlueprintGeneratedClass BaseBearTrap.BaseBearTrap_C
	 * Size -> 0x0008 (FullSize[0x0B90] - InheritedSize[0x0B88])
	 */
	class ABaseBearTrap_C : public APrimalStructureBearTrap
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x0B88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		void UserConstructionScript();
		void ExecuteUbergraph_BaseBearTrap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
