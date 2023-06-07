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
	 * BlueprintGeneratedClass WeapMachinedPistol_HoloScope.WeapMachinedPistol_HoloScope_C
	 * Size -> 0x0010 (FullSize[0x0DD0] - InheritedSize[0x0DC0])
	 */
	class AWeapMachinedPistol_HoloScope_C : public AWeapMachinedPistol_C
	{
	public:
		class UStaticMeshComponent*                                FirstPersonAttachment;                                   // 0x0DC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                ThirdPersonAttachment;                                   // 0x0DC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapMachinedPistol_HoloScope(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
