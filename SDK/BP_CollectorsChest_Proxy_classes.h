// BlueprintGeneratedClass BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C
// Size: 0xa91 (Inherited: 0x9c0)
struct ABP_CollectorsChest_Proxy_C : ACollectorsChestItemProxyStatic {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9c0(0x08)
	struct UStaticMeshComponent* WaterOcclusionVolume; // 0x9c8(0x08)
	struct UMaterialAnimatorComponent* MaterialAnimator; // 0x9d0(0x08)
	struct UOpenableItemMeshAnimationReactionComponent* OpenableItemMeshAnimationReaction; // 0x9d8(0x08)
	struct UMeshAnimatorComponent* MeshAnimator; // 0x9e0(0x08)
	struct UOpenableItemMaterialAnimationReactionComponent* OpenableItemMaterialAnimationReaction; // 0x9e8(0x08)
	struct UGlintComponent* Glint; // 0x9f0(0x08)
	struct UQuestBookPagesInContainerComponent* QuestBookPagesInContainer; // 0x9f8(0x08)
	struct UGoldInContainerComponent* GoldInContainer; // 0xa00(0x08)
	struct USceneComponent* Scene; // 0xa08(0x08)
	struct UAnimNotifyWwiseEmitterComponent* AnimNotifyWwiseEmitter; // 0xa10(0x08)
	struct UCollectorsChestItemSlotInteractable* ItemSlotInteractable_3; // 0xa18(0x08)
	struct UCollectorsChestItemSlotInteractable* ItemSlotInteractable_2; // 0xa20(0x08)
	struct UCollectorsChestItemSlotInteractable* ItemSlotInteractable_1; // 0xa28(0x08)
	struct UInteractableComponent* Interactable; // 0xa30(0x08)
	struct FObjectMessagingHandle OnDroppedHandle; // 0xa38(0x58)
	bool HideWaterOcclusionVolume; // 0xa90(0x01)

	void OnRep_HideWaterOcclusionVolume(); // Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.OnRep_HideWaterOcclusionVolume // BlueprintCallable|BlueprintEvent // @ game+0x1870810
	bool IsAttachedToShip(); // Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.IsAttachedToShip // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x1870810
	struct FVector GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius); // Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.GetClosestInteractionPoint // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void UserConstructionScript(); // Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void ReceiveBeginPlay(); // Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1870810
	void ReceiveEndPlay(char* EndPlayReason); // Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x1870810
	void ItemDropped(struct FEventWieldableItemDropped EventParam); // Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ItemDropped // BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void ExecuteUbergraph_BP_CollectorsChest_Proxy(int32_t EntryPoint); // Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ExecuteUbergraph_BP_CollectorsChest_Proxy // HasDefaults // @ game+0x1870810
};

