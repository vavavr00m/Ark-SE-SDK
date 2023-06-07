﻿#pragma once

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
	 * BlueprintGeneratedClass Sign_PaintingCanvas.Sign_PaintingCanvas_C
	 * Size -> 0x0008 (FullSize[0x0AF0] - InheritedSize[0x0AE8])
	 */
	class ASign_PaintingCanvas_C : public AStructureBaseBP_C
	{
	public:
		class UStructurePaintingComponent*                         StructurePainting1;                                      // 0x0AE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Sign_PaintingCanvas(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
