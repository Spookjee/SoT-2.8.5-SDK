// BlueprintGeneratedClass BP_DecalGlow.BP_DecalGlow_C
// Size: 0x405 (Inherited: 0x3d0)
struct ABP_DecalGlow_C : ALandmarkReactionActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3d8(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> DecalMaterials; // 0x3e0(0x10)
	struct TArray<struct ADecalActor*> DecalActors; // 0x3f0(0x10)
	float Reveal Duration; // 0x400(0x04)
	bool GatheredMaterials; // 0x404(0x01)

	void StartGlowEffect(); // Function BP_DecalGlow.BP_DecalGlow_C.StartGlowEffect // Public|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	bool StartReaction(); // Function BP_DecalGlow.BP_DecalGlow_C.StartReaction // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	bool StopReaction(); // Function BP_DecalGlow.BP_DecalGlow_C.StopReaction // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void CollectDecalMaterials(); // Function BP_DecalGlow.BP_DecalGlow_C.CollectDecalMaterials // Public|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void UserConstructionScript(); // Function BP_DecalGlow.BP_DecalGlow_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void ReceiveBeginPlay(); // Function BP_DecalGlow.BP_DecalGlow_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1870810
	void ExecuteUbergraph_BP_DecalGlow(int32_t EntryPoint); // Function BP_DecalGlow.BP_DecalGlow_C.ExecuteUbergraph_BP_DecalGlow //  // @ game+0x1870810
};

