// BlueprintGeneratedClass BP_GH_GoldenSands_Lighthouse_AudioLayer.BP_GH_GoldenSands_Lighthouse_AudioLayer_C
// Size: 0x400 (Inherited: 0x3c8)
struct ABP_GH_GoldenSands_Lighthouse_AudioLayer_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UAudioPortalComponent* AudioPortal_Window_02; // 0x3d0(0x08)
	struct UAudioPortalComponent* AudioPortal_Window_01; // 0x3d8(0x08)
	struct UAudioPortalComponent* AudioPortal_Top; // 0x3e0(0x08)
	struct UAudioPortalComponent* AudioPortal_Bottom; // 0x3e8(0x08)
	struct UAudioSpaceComponent* AudioSpace; // 0x3f0(0x08)
	struct USceneComponent* Scene; // 0x3f8(0x08)

	void UserConstructionScript(); // Function BP_GH_GoldenSands_Lighthouse_AudioLayer.BP_GH_GoldenSands_Lighthouse_AudioLayer_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ReceiveBeginPlay(); // Function BP_GH_GoldenSands_Lighthouse_AudioLayer.BP_GH_GoldenSands_Lighthouse_AudioLayer_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveEndPlay(char* EndPlayReason); // Function BP_GH_GoldenSands_Lighthouse_AudioLayer.BP_GH_GoldenSands_Lighthouse_AudioLayer_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_BP_GH_GoldenSands_Lighthouse_AudioLayer(int32_t EntryPoint); // Function BP_GH_GoldenSands_Lighthouse_AudioLayer.BP_GH_GoldenSands_Lighthouse_AudioLayer_C.ExecuteUbergraph_BP_GH_GoldenSands_Lighthouse_AudioLayer //  // @ game+0x188c2f0
};

