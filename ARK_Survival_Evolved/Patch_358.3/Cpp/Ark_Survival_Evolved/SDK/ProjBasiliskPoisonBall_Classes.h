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
	 * BlueprintGeneratedClass ProjBasiliskPoisonBall.ProjBasiliskPoisonBall_C
	 * Size -> 0x0010 (FullSize[0x0670] - InheritedSize[0x0660])
	 */
	class AProjBasiliskPoisonBall_C : public APrimalProjectileDilo
	{
	public:
		class UAudioComponent*                                     Audio1;                                                  // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UChildActorComponent*                                ChildProjectile;                                         // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ProjBasiliskPoisonBall(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
