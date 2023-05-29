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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass ProjGlowStick_Self.ProjGlowStick_Self_C
	 * Size -> 0x0004 (FullSize[0x0724] - InheritedSize[0x0720])
	 */
	class AProjGlowStick_Self_C : public AProjGlowStick_C
	{
	public:
		int32_t                                                    CallFunc_Array_Add_ReturnValue;                          // 0x0720(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void GetGlowstickOwner(class AActor** glowstickOwner);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_ProjGlowStick_Self(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
