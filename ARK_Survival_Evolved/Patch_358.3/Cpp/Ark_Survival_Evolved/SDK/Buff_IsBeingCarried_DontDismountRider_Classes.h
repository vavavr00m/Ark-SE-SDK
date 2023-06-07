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
	 * BlueprintGeneratedClass Buff_IsBeingCarried_DontDismountRider.Buff_IsBeingCarried_DontDismountRider_C
	 * Size -> 0x0000 (FullSize[0x098D] - InheritedSize[0x098D])
	 */
	class ABuff_IsBeingCarried_DontDismountRider_C : public ABuff_IsBeingCarried_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_IsBeingCarried_DontDismountRider(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
