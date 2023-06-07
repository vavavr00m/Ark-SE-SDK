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
	 * BlueprintGeneratedClass Underwater_Base_SM_Full.Underwater_Base_SM_Full_C
	 * Size -> 0x0008 (FullSize[0x0F10] - InheritedSize[0x0F08])
	 */
	class AUnderwater_Base_SM_Full_C : public AUnderwater_Base_SM_C
	{
	public:
		class UBoxComponent*                                       Collision_Bottom;                                        // 0x0F08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Underwater_Base_SM_Full(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
