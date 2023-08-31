// BlueprintGeneratedClass BP_LocalWindGenerator.BP_LocalWindGenerator_C
// Size: 0x3f4 (Inherited: 0x3d0)
struct ABP_LocalWindGenerator_C : ALandmarkReactionActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3d8(0x08)
	float CurrentTime; // 0x3e0(0x04)
	float Duration; // 0x3e4(0x04)
	struct UCurveFloat* WindScaleCurve; // 0x3e8(0x08)
	float Radius; // 0x3f0(0x04)

	bool StopReaction(); // Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.StopReaction // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void ApplyDisturbanceAtCurrentTime(float DeltaTme); // Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.ApplyDisturbanceAtCurrentTime // Public|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	bool StartReaction(); // Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.StartReaction // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void UserConstructionScript(); // Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void ReceiveTick(float* DeltaSeconds); // Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1870810
	void ExecuteUbergraph_BP_LocalWindGenerator(int32_t EntryPoint); // Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.ExecuteUbergraph_BP_LocalWindGenerator //  // @ game+0x1870810
};

