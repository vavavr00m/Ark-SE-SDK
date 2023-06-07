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
	 * BlueprintGeneratedClass Sign_Small_Metal.Sign_Small_Metal_C
	 * Size -> 0x0008 (FullSize[0x0B20] - InheritedSize[0x0B18])
	 */
	class ASign_Small_Metal_C : public ASign_Small_Base_C
	{
	public:
		class UStructurePaintingComponent*                         StructurePainting1;                                      // 0x0B18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Sign_Small_Metal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
