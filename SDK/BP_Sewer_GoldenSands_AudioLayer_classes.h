// BlueprintGeneratedClass BP_Sewer_GoldenSands_AudioLayer.BP_Sewer_GoldenSands_AudioLayer_C
// Size: 0x408 (Inherited: 0x3c8)
struct ABP_Sewer_GoldenSands_AudioLayer_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UAudioPortalComponent* AudioPortal_03; // 0x3d0(0x08)
	struct UAudioPortalComponent* AudioPortal_04; // 0x3d8(0x08)
	struct UAudioSpaceComponent* AudioSpace_Sewer_SmallSection; // 0x3e0(0x08)
	struct UAudioPortalComponent* AudioPortal_02; // 0x3e8(0x08)
	struct UAudioSpaceComponent* AudioSpace_Sewer_LargeSection; // 0x3f0(0x08)
	struct UAudioPortalComponent* AudioPortal_01; // 0x3f8(0x08)
	struct USceneComponent* Scene; // 0x400(0x08)

	void UserConstructionScript(); // Function BP_Sewer_GoldenSands_AudioLayer.BP_Sewer_GoldenSands_AudioLayer_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ReceiveBeginPlay(); // Function BP_Sewer_GoldenSands_AudioLayer.BP_Sewer_GoldenSands_AudioLayer_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveEndPlay(char* EndPlayReason); // Function BP_Sewer_GoldenSands_AudioLayer.BP_Sewer_GoldenSands_AudioLayer_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_BP_Sewer_GoldenSands_AudioLayer(int32_t EntryPoint); // Function BP_Sewer_GoldenSands_AudioLayer.BP_Sewer_GoldenSands_AudioLayer_C.ExecuteUbergraph_BP_Sewer_GoldenSands_AudioLayer //  // @ game+0x188c2f0
};

