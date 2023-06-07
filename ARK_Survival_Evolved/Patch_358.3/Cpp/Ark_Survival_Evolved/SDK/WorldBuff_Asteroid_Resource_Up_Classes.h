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
	 * BlueprintGeneratedClass WorldBuff_Asteroid_Resource_Up.WorldBuff_Asteroid_Resource_Up_C
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UWorldBuff_Asteroid_Resource_Up_C : public UPrimalWorldBuffCustomImplement
	{
	public:
		TArray<struct FResourceTemporaryAmountModifiers>           ResourceModifiers;                                       // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void PreDeconstruction();
		void PostConstruction();
		void ExecuteUbergraph_WorldBuff_Asteroid_Resource_Up(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
