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
	 * BlueprintGeneratedClass ProjArrow_Flame.ProjArrow_Flame_C
	 * Size -> 0x0010 (FullSize[0x06A0] - InheritedSize[0x0690])
	 */
	class AProjArrow_Flame_C : public AProjArrow_C
	{
	public:
		class UChildActorComponent*                                ChildActor1;                                             // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     FireSound;                                               // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ProjArrow_Flame(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
