// BlueprintGeneratedClass wsp_torch_a_riddle.wsp_torch_a_riddle_C
// Size: 0x402 (Inherited: 0x3d0)
struct Awsp_torch_a_riddle_C : ALandmarkReactionActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UParticleSystemComponent* vfx_riddle_fire; // 0x3d8(0x08)
	struct UPointLightComponent* PointLight; // 0x3e0(0x08)
	struct UParticleSystemComponent* vfx_fire_torch; // 0x3e8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x3f0(0x08)
	float CurrentTime; // 0x3f8(0x04)
	float LightIntensity; // 0x3fc(0x04)
	bool isFadingOut; // 0x400(0x01)
	bool IsFadingIn; // 0x401(0x01)

	bool StartReaction(); // Function wsp_torch_a_riddle.wsp_torch_a_riddle_C.StartReaction // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	bool StopReaction(); // Function wsp_torch_a_riddle.wsp_torch_a_riddle_C.StopReaction // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void UserConstructionScript(); // Function wsp_torch_a_riddle.wsp_torch_a_riddle_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void ReceiveTick(float* DeltaSeconds); // Function wsp_torch_a_riddle.wsp_torch_a_riddle_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1870810
	void ExecuteUbergraph_wsp_torch_a_riddle(int32_t EntryPoint); // Function wsp_torch_a_riddle.wsp_torch_a_riddle_C.ExecuteUbergraph_wsp_torch_a_riddle //  // @ game+0x1870810
};

