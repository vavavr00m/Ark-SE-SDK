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
	 * BlueprintGeneratedClass PoisonTrap.PoisonTrap_C
	 * Size -> 0x0008 (FullSize[0x0BE8] - InheritedSize[0x0BE0])
	 */
	class APoisonTrap_C : public APrimalStructureTripwire
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x0BE0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_PoisonTrap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
