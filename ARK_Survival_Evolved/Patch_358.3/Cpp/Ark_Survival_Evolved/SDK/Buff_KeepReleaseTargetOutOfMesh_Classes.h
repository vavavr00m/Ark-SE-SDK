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
	 * BlueprintGeneratedClass Buff_KeepReleaseTargetOutOfMesh.Buff_KeepReleaseTargetOutOfMesh_C
	 * Size -> 0x000C (FullSize[0x098C] - InheritedSize[0x0980])
	 */
	class ABuff_KeepReleaseTargetOutOfMesh_C : public APrimalBuff
	{
	public:
		struct FVector                                             originloc;                                               // 0x0980(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BuffTickServer(float DeltaTime);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_KeepReleaseTargetOutOfMesh(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
