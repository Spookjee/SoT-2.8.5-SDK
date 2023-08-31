// BlueprintGeneratedClass BP_Tavern_GoldenSands_AudioLayer.BP_Tavern_GoldenSands_AudioLayer_C
// Size: 0x480 (Inherited: 0x3c8)
struct ABP_Tavern_GoldenSands_AudioLayer_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UAudioPortalComponent* AudioPortal_UpstairsHut; // 0x3d0(0x08)
	struct UAudioSpaceComponent* AudioSpace_UpstairsHut; // 0x3d8(0x08)
	struct UAudioSpaceComponent* AudioSpace_Basement; // 0x3e0(0x08)
	struct UAudioPortalComponent* AudioPortal_Stairs; // 0x3e8(0x08)
	struct UAudioPortalComponent* AudioPortal_Window_08; // 0x3f0(0x08)
	struct UAudioPortalComponent* AudioPortal_Window_07; // 0x3f8(0x08)
	struct UAudioPortalComponent* AudioPortal_Window_06; // 0x400(0x08)
	struct UAudioPortalComponent* AudioPortal_Window_05; // 0x408(0x08)
	struct UAudioPortalComponent* AudioPortal_Window_04; // 0x410(0x08)
	struct UAudioPortalComponent* AudioPortal_Window_03; // 0x418(0x08)
	struct UAudioPortalComponent* AudioPortal_Window_02; // 0x420(0x08)
	struct UAudioPortalComponent* AudioPortal_Window_01; // 0x428(0x08)
	struct UAudioSpaceComponent* AudioSpace_MainDoor; // 0x430(0x08)
	struct UAudioSpaceComponent* AudioSpace_Stage; // 0x438(0x08)
	struct UTritonComponent* Triton; // 0x440(0x08)
	struct UAudioPortalComponent* AudioPortal_Hideout; // 0x448(0x08)
	struct UAudioPortalComponent* AudioPortal_Door_C; // 0x450(0x08)
	struct UAudioPortalComponent* AudioPortal_Door_D; // 0x458(0x08)
	struct UAudioPortalComponent* AudioPortal_Door_B; // 0x460(0x08)
	struct UAudioPortalComponent* AudioPortal_Door_A; // 0x468(0x08)
	struct UAudioSpaceComponent* AudioSpace_MainBuilding; // 0x470(0x08)
	struct USceneComponent* Scene; // 0x478(0x08)

	void UserConstructionScript(); // Function BP_Tavern_GoldenSands_AudioLayer.BP_Tavern_GoldenSands_AudioLayer_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ReceiveBeginPlay(); // Function BP_Tavern_GoldenSands_AudioLayer.BP_Tavern_GoldenSands_AudioLayer_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveEndPlay(char* EndPlayReason); // Function BP_Tavern_GoldenSands_AudioLayer.BP_Tavern_GoldenSands_AudioLayer_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_BP_Tavern_GoldenSands_AudioLayer(int32_t EntryPoint); // Function BP_Tavern_GoldenSands_AudioLayer.BP_Tavern_GoldenSands_AudioLayer_C.ExecuteUbergraph_BP_Tavern_GoldenSands_AudioLayer //  // @ game+0x188c2f0
};

