// BlueprintGeneratedClass BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C
// Size: 0x608 (Inherited: 0x5e0)
struct ABP_LargeShipLadderMainMast_C : ALadder {
	struct UInteractableComponent* Interactable; // 0x5e0(0x08)
	struct TArray<struct FVector> OnTopSplinePositions; // 0x5e8(0x10)
	struct TArray<struct FVector> OffTopSplinePositions; // 0x5f8(0x10)

	struct FDockableInfo GetDockableInfo(); // Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.GetDockableInfo // Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Setup Spline(struct USplineComponent* Spline, struct TArray<struct FVector> Positions); // Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.Setup Spline // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	bool CanInteract(struct AActor** InInteractor); // Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.CanInteract // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void UserConstructionScript(); // Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
};

