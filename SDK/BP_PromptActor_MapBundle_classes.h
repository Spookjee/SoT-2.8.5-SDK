// BlueprintGeneratedClass BP_PromptActor_MapBundle.BP_PromptActor_MapBundle_C
// Size: 0x410 (Inherited: 0x400)
struct ABP_PromptActor_MapBundle_C : ABP_PromptActorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UBP_Prompt_MapBundle_C* PromptCoordinator; // 0x408(0x08)

	void UserConstructionScript(); // Function BP_PromptActor_MapBundle.BP_PromptActor_MapBundle_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ReceiveBeginPlay(); // Function BP_PromptActor_MapBundle.BP_PromptActor_MapBundle_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ReceiveEndPlay(char* EndPlayReason); // Function BP_PromptActor_MapBundle.BP_PromptActor_MapBundle_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_BP_PromptActor_MapBundle(int32_t EntryPoint); // Function BP_PromptActor_MapBundle.BP_PromptActor_MapBundle_C.ExecuteUbergraph_BP_PromptActor_MapBundle //  // @ game+0x188c2f0
};

