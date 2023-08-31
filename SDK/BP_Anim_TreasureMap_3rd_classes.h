// AnimBlueprintGeneratedClass BP_Anim_TreasureMap_3rd.BP_Anim_TreasureMap_3rd_C
// Size: 0x761 (Inherited: 0x660)
struct UBP_Anim_TreasureMap_3rd_C : UWieldableItemAnimationInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x660(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_24A0B2B647C712FB320275A8FD7B6C4C; // 0x668(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_C226407B45B5F0794BEF42841DC3A4B8; // 0x6b0(0x60)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_740A23004F5FA11BC4270BB73771A4CA; // 0x710(0x50)
	char ObjectAnimationState; // 0x760(0x01)

	void OnUseStarted(struct UClass** InputID, struct FWieldableItemActionVisuals* ActionVisuals); // Function BP_Anim_TreasureMap_3rd.BP_Anim_TreasureMap_3rd_C.OnUseStarted // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1870810
	void OnUseStopped(struct UClass** InputID); // Function BP_Anim_TreasureMap_3rd.BP_Anim_TreasureMap_3rd_C.OnUseStopped // Event|Public|BlueprintEvent // @ game+0x1870810
	void ExecuteUbergraph_BP_Anim_TreasureMap_3rd(int32_t EntryPoint); // Function BP_Anim_TreasureMap_3rd.BP_Anim_TreasureMap_3rd_C.ExecuteUbergraph_BP_Anim_TreasureMap_3rd // HasDefaults // @ game+0x1870810
};

