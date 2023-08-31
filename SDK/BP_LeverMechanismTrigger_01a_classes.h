// BlueprintGeneratedClass BP_LeverMechanismTrigger_01a.BP_LeverMechanismTrigger_01a_C
// Size: 0x610 (Inherited: 0x5f8)
struct ABP_LeverMechanismTrigger_01a_C : ASwitchMechanismTrigger {
	struct UInteractableComponent* Interactable; // 0x5f8(0x08)
	struct UStaticMeshComponent* LeverMesh; // 0x600(0x08)
	struct UStaticMeshComponent* BaseMesh; // 0x608(0x08)

	struct FVector GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius); // Function BP_LeverMechanismTrigger_01a.BP_LeverMechanismTrigger_01a_C.GetClosestInteractionPoint // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void UserConstructionScript(); // Function BP_LeverMechanismTrigger_01a.BP_LeverMechanismTrigger_01a_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
};

