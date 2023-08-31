// BlueprintGeneratedClass BP_WoodPlank.BP_WoodPlank_C
// Size: 0x828 (Inherited: 0x800)
struct ABP_WoodPlank_C : AWoodPlank {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x800(0x08)
	struct UUsableWieldableComponent* UsableWieldable; // 0x808(0x08)
	struct UWieldableInteractableComponent* WieldableInteractable; // 0x810(0x08)
	struct UPickupableComponent* Pickupable; // 0x818(0x08)
	struct UUsableComponent* Usable; // 0x820(0x08)

	void UserConstructionScript(); // Function BP_WoodPlank.BP_WoodPlank_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void ReceiveBeginPlay(); // Function BP_WoodPlank.BP_WoodPlank_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1870810
	void ExecuteUbergraph_BP_WoodPlank(int32_t EntryPoint); // Function BP_WoodPlank.BP_WoodPlank_C.ExecuteUbergraph_BP_WoodPlank //  // @ game+0x1870810
};

