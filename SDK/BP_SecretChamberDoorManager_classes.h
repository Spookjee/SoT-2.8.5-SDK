// BlueprintGeneratedClass BP_SecretChamberDoorManager.BP_SecretChamberDoorManager_C
// Size: 0x3f1 (Inherited: 0x3c8)
struct ABP_SecretChamberDoorManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UMechanismActionComponent* MechanismAction; // 0x3d0(0x08)
	struct UMechanismTriggerComponent* MechanismTrigger; // 0x3d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3e0(0x08)
	struct Abp_secret_chamber_door_Toggleable_Animated_Mechanism_C* ChamberDoor; // 0x3e8(0x08)
	bool ToggleActive; // 0x3f0(0x01)

	void OnRep_ToggleActive(); // Function BP_SecretChamberDoorManager.BP_SecretChamberDoorManager_C.OnRep_ToggleActive // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void UserConstructionScript(); // Function BP_SecretChamberDoorManager.BP_SecretChamberDoorManager_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void BndEvt__MechanismAction_K2Node_ComponentBoundEvent_21_OnMechanismActionStateChangedDelegate__DelegateSignature(TScriptInterface<struct UMechanismActionInterface> Action, char PreviousState, char NewState, struct AActor* Instigator); // Function BP_SecretChamberDoorManager.BP_SecretChamberDoorManager_C.BndEvt__MechanismAction_K2Node_ComponentBoundEvent_21_OnMechanismActionStateChangedDelegate__DelegateSignature // BlueprintEvent // @ game+0x188c2f0
	void BndEvt__MechanismAction_K2Node_ComponentBoundEvent_90_OnMechanismResetDelegate__DelegateSignature(TScriptInterface<struct UMechanismResetInterface> Mechanism); // Function BP_SecretChamberDoorManager.BP_SecretChamberDoorManager_C.BndEvt__MechanismAction_K2Node_ComponentBoundEvent_90_OnMechanismResetDelegate__DelegateSignature // BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_BP_SecretChamberDoorManager(int32_t EntryPoint); // Function BP_SecretChamberDoorManager.BP_SecretChamberDoorManager_C.ExecuteUbergraph_BP_SecretChamberDoorManager //  // @ game+0x188c2f0
};

