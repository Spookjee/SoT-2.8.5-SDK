// BlueprintGeneratedClass BP_MapWall.BP_MapWall_C
// Size: 0x805 (Inherited: 0x7b0)
struct ABP_MapWall_C : AMapTable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7b0(0x08)
	struct UBoxComponent* NavBlocker; // 0x7b8(0x08)
	struct UChildActorComponent* ControlPoint_4; // 0x7c0(0x08)
	struct UChildActorComponent* ControlPoint_3; // 0x7c8(0x08)
	struct UChildActorComponent* ControlPoint_2; // 0x7d0(0x08)
	struct UHitRegSnapshotRedirectImpactToReplicatedMovementAttachParentComponent* HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent; // 0x7d8(0x08)
	struct UChildActorComponent* ControlPoint_1; // 0x7e0(0x08)
	struct UTextureFeedbackComponent* TextureFeedback; // 0x7e8(0x08)
	struct UStaticMeshComponent* Cube; // 0x7f0(0x08)
	struct UStaticMeshComponent* Map; // 0x7f8(0x08)
	float ActiveRange; // 0x800(0x04)
	bool IsActive; // 0x804(0x01)

	void UpdateBlurEffect(); // Function BP_MapWall.BP_MapWall_C.UpdateBlurEffect // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	struct FVector GetClosestInteractionPoint(struct FVector ReferencePosition, float OutInteractionPointRadius); // Function BP_MapWall.BP_MapWall_C.GetClosestInteractionPoint // HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void UserConstructionScript(); // Function BP_MapWall.BP_MapWall_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ReceiveBeginPlay(); // Function BP_MapWall.BP_MapWall_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void SetEffectActiveWhenClose(); // Function BP_MapWall.BP_MapWall_C.SetEffectActiveWhenClose // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void OnMapActivate(bool* IsMapActive, struct UTextureRenderTarget2D** Texture); // Function BP_MapWall.BP_MapWall_C.OnMapActivate // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void OnMapMove(struct FVector2D* CentreLocation, struct FVector2D* ZoomLevel); // Function BP_MapWall.BP_MapWall_C.OnMapMove // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_BP_MapWall(int32_t EntryPoint); // Function BP_MapWall.BP_MapWall_C.ExecuteUbergraph_BP_MapWall // HasDefaults // @ game+0x188c2f0
};

