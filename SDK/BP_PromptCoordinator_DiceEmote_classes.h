// BlueprintGeneratedClass BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C
// Size: 0x221 (Inherited: 0x138)
struct UBP_PromptCoordinator_DiceEmote_C : UBP_PromptCoordinator_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	struct UClass* DiceEmotePromptAccessKey; // 0x140(0x08)
	struct FObjectMessagingHandle EmoteStartedEvent; // 0x148(0x58)
	struct FPrioritisedPromptWithHandle Prompt; // 0x1a0(0x70)
	bool StartedDiceEmote; // 0x210(0x01)
	char UnknownData_211[0x7]; // 0x211(0x07)
	struct FObjectMessagingDispatcherHandle CharacterDispatcher; // 0x218(0x08)
	bool HasShown; // 0x220(0x01)

	void OnEmoteStartedFunc(struct FEventEmoteStarted EventEmoteStarted); // Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.OnEmoteStartedFunc // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void RegisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle* CharacterDispatcher); // Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.RegisterCharacterEvents_Implementable // Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	void UnregisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle* CharacterDispatcher); // Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.UnregisterCharacterEvents_Implementable // Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	void Evaluate(); // Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.Evaluate // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void OnEmoteStarted(struct FEventEmoteStarted EmoteStartedEvent); // Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.OnEmoteStarted // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_BP_PromptCoordinator_DiceEmote(int32_t EntryPoint); // Function BP_PromptCoordinator_DiceEmote.BP_PromptCoordinator_DiceEmote_C.ExecuteUbergraph_BP_PromptCoordinator_DiceEmote // HasDefaults // @ game+0x188c2f0
};

