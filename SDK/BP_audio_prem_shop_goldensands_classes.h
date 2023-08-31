// BlueprintGeneratedClass BP_audio_prem_shop_goldensands.BP_audio_prem_shop_goldensands_C
// Size: 0x408 (Inherited: 0x3c8)
struct ABP_audio_prem_shop_goldensands_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UTritonComponent* Triton; // 0x3d0(0x08)
	struct UAudioPortalComponent* AudioPortal_Middle; // 0x3d8(0x08)
	struct UAudioPortalComponent* AudioPortal_Right; // 0x3e0(0x08)
	struct UAudioSpaceComponent* AudioSpace_Right; // 0x3e8(0x08)
	struct UAudioPortalComponent* AudioPortal_Left; // 0x3f0(0x08)
	struct UAudioSpaceComponent* AudioSpace_Left; // 0x3f8(0x08)
	struct USceneComponent* Scene; // 0x400(0x08)

	void UserConstructionScript(); // Function BP_audio_prem_shop_goldensands.BP_audio_prem_shop_goldensands_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ReceiveBeginPlay(); // Function BP_audio_prem_shop_goldensands.BP_audio_prem_shop_goldensands_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_BP_audio_prem_shop_goldensands(int32_t EntryPoint); // Function BP_audio_prem_shop_goldensands.BP_audio_prem_shop_goldensands_C.ExecuteUbergraph_BP_audio_prem_shop_goldensands //  // @ game+0x188c2f0
};

