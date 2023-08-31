// BlueprintGeneratedClass BP_OOS_GoldenSands_AudioLayer.BP_OOS_GoldenSands_AudioLayer_C
// Size: 0x3f8 (Inherited: 0x3c8)
struct ABP_OOS_GoldenSands_AudioLayer_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UTritonComponent* Triton; // 0x3d0(0x08)
	struct UAudioSpaceComponent* OOS_AudioSpace_LargeSection; // 0x3d8(0x08)
	struct UAudioSpaceComponent* OOS_AudioSpace_SmallSection; // 0x3e0(0x08)
	struct UAudioPortalComponent* Tavern_AudioPortal; // 0x3e8(0x08)
	struct USceneComponent* Scene; // 0x3f0(0x08)

	void UserConstructionScript(); // Function BP_OOS_GoldenSands_AudioLayer.BP_OOS_GoldenSands_AudioLayer_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ReceiveBeginPlay(); // Function BP_OOS_GoldenSands_AudioLayer.BP_OOS_GoldenSands_AudioLayer_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveEndPlay(char* EndPlayReason); // Function BP_OOS_GoldenSands_AudioLayer.BP_OOS_GoldenSands_AudioLayer_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_BP_OOS_GoldenSands_AudioLayer(int32_t EntryPoint); // Function BP_OOS_GoldenSands_AudioLayer.BP_OOS_GoldenSands_AudioLayer_C.ExecuteUbergraph_BP_OOS_GoldenSands_AudioLayer //  // @ game+0x188c2f0
};

