// BlueprintGeneratedClass BP_Prompt_MapBundle.BP_Prompt_MapBundle_C
// Size: 0x298 (Inherited: 0x138)
struct UBP_Prompt_MapBundle_C : UBP_PromptCoordinator_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	struct UClass* MapBundlePromptAccessKey; // 0x140(0x08)
	struct FPrioritisedPromptWithHandle Prompt; // 0x148(0x70)
	bool MapBundleBecameVisible; // 0x1b8(0x01)
	char UnknownData_1B9[0x7]; // 0x1b9(0x07)
	struct FObjectMessagingHandle MapBundleAppearedHandle; // 0x1c0(0x58)
	struct FObjectMessagingDispatcherHandle CharacterDispatcher; // 0x218(0x08)
	bool HasShown; // 0x220(0x01)
	char UnknownData_221[0x7]; // 0x221(0x07)
	struct FPrioritisedPromptWithHandle StealPrompt; // 0x228(0x70)

	void RegisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle* CharacterDispatcher); // Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.RegisterCharacterEvents_Implementable // Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	void UnregisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle* CharacterDispatcher); // Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.UnregisterCharacterEvents_Implementable // Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	void Evaluate(); // Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.Evaluate // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void OnMapBundleBecameVisible(struct FPlayerBuriedItemsMapBundleBecameVisible Event); // Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.OnMapBundleBecameVisible // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_BP_Prompt_MapBundle(int32_t EntryPoint); // Function BP_Prompt_MapBundle.BP_Prompt_MapBundle_C.ExecuteUbergraph_BP_Prompt_MapBundle // HasDefaults // @ game+0x188c2f0
};

