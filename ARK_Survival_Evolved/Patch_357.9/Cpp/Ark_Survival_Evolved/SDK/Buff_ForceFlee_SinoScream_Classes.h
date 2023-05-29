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
	 * BlueprintGeneratedClass Buff_ForceFlee_SinoScream.Buff_ForceFlee_SinoScream_C
	 * Size -> 0x0011 (FullSize[0x09B9] - InheritedSize[0x09A8])
	 */
	class ABuff_ForceFlee_SinoScream_C : public ABuff_ForceFlee_Base_C
	{
	public:
		TArray<class FName>                                        TagsToForceRunBT;                                        // 0x09A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       bHasForceSetBT;                                          // 0x09B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void RestoreFleeState();
		void SetFleeState();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_ForceFlee_SinoScream(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
