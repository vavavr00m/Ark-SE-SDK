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
	 * BlueprintGeneratedClass StructureSeatingMusicBaseBP.StructureSeatingMusicBaseBP_C
	 * Size -> 0x0010 (FullSize[0x0F48] - InheritedSize[0x0F38])
	 */
	class AStructureSeatingMusicBaseBP_C : public APrimalStructureSeatingMusic
	{
	public:
		class UChildActorComponent*                                TargetingEmitter;                                        // 0x0F38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    StasisComponent;                                         // 0x0F40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_StructureSeatingMusicBaseBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
