#pragma once

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
	 * BlueprintGeneratedClass WyvProjFireBall.WyvProjFireBall_C
	 * Size -> 0x0000 (FullSize[0x0660] - InheritedSize[0x0660])
	 */
	class AWyvProjFireBall_C : public AShooterProjectile
	{
	public:
		class FName GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim();
		void UserConstructionScript();
		void ExecuteUbergraph_WyvProjFireBall(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
