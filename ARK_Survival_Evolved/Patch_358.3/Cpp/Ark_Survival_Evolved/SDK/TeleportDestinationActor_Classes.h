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
	 * BlueprintGeneratedClass TeleportDestinationActor.TeleportDestinationActor_C
	 * Size -> 0x0030 (FullSize[0x0498] - InheritedSize[0x0468])
	 */
	class ATeleportDestinationActor_C : public AActor
	{
	public:
		class UArrowComponent*                                     ForwardArrow;                                            // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextRenderComponent*                                TitleComp;                                               // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextRenderComponent*                                DestinationTitleComp;                                    // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBillboardComponent*                                 DestinationIcon;                                         // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              DestinationTitle;                                        // 0x0488(0x0010) Edit, BlueprintVisible, ZeroConstructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_TeleportDestinationActor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
