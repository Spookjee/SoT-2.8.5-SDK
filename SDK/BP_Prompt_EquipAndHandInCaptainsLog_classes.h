// BlueprintGeneratedClass BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C
// Size: 0x2d0 (Inherited: 0x138)
struct UBP_Prompt_EquipAndHandInCaptainsLog_C : UBP_PromptCoordinator_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	struct FObjectMessagingHandle EventObjectWieldedHandler; // 0x140(0x58)
	struct UClass* ExpectedWieldedItem; // 0x198(0x08)
	struct FPrioritisedPromptWithHandle Prompt_EquipCaptainsLog; // 0x1a0(0x70)
	float PromptPopupTime; // 0x210(0x04)
	char UnknownData_214[0x4]; // 0x214(0x04)
	struct FObjectMessagingHandle EventStartStowHandler; // 0x218(0x58)
	struct FObjectMessagingHandle TreasureChestSoldClientPredictionEventHandler; // 0x270(0x58)
	struct UClass* AccessKey; // 0x2c8(0x08)

	void RegisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle* CharacterDispatcher); // Function BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C.RegisterCharacterEvents_Implementable // Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	void UnregisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle* CharacterDispatcher); // Function BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C.UnregisterCharacterEvents_Implementable // Event|Public|HasOutParms|BlueprintEvent // @ game+0x188c2f0
	void OnWield(struct FEventObjectWielded Event); // Function BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C.OnWield // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void OnStowed(struct FEventObjectStowed Event); // Function BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C.OnStowed // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void OnCaptainsLogSold(struct FTreasureChestSoldClientPredictionEvent Event); // Function BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C.OnCaptainsLogSold // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_BP_Prompt_EquipAndHandInCaptainsLog(int32_t EntryPoint); // Function BP_Prompt_EquipAndHandInCaptainsLog.BP_Prompt_EquipAndHandInCaptainsLog_C.ExecuteUbergraph_BP_Prompt_EquipAndHandInCaptainsLog // HasDefaults // @ game+0x188c2f0
};

