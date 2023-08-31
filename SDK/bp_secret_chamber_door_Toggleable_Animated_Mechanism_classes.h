// BlueprintGeneratedClass bp_secret_chamber_door_Toggleable_Animated_Mechanism.bp_secret_chamber_door_Toggleable_Animated_Mechanism_C
// Size: 0x5a8 (Inherited: 0x570)
struct Abp_secret_chamber_door_Toggleable_Animated_Mechanism_C : AToggleAnimatedMechanismAction {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x570(0x08)
	struct UParticleSystemComponent* DoorDust; // 0x578(0x08)
	struct UArrowComponent* Arrow; // 0x580(0x08)
	struct UStaticMeshComponent* StaticMeshComponent0; // 0x588(0x08)
	struct UStaticMeshComponent* sod_bld_wall_broken_04_a; // 0x590(0x08)
	struct UStaticMeshComponent* sod_bld_wall_sml_03_b; // 0x598(0x08)
	struct UStaticMeshComponent* StaticMeshComponent02; // 0x5a0(0x08)

	void UserConstructionScript(); // Function bp_secret_chamber_door_Toggleable_Animated_Mechanism.bp_secret_chamber_door_Toggleable_Animated_Mechanism_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void BndEvt__MechanismActionComponent_K2Node_ComponentBoundEvent_21_OnMechanismActionStateChangedDelegate__DelegateSignature(TScriptInterface<struct UMechanismActionInterface> Action, char PreviousState, char NewState, struct AActor* Instigator); // Function bp_secret_chamber_door_Toggleable_Animated_Mechanism.bp_secret_chamber_door_Toggleable_Animated_Mechanism_C.BndEvt__MechanismActionComponent_K2Node_ComponentBoundEvent_21_OnMechanismActionStateChangedDelegate__DelegateSignature // BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_bp_secret_chamber_door_Toggleable_Animated_Mechanism(int32_t EntryPoint); // Function bp_secret_chamber_door_Toggleable_Animated_Mechanism.bp_secret_chamber_door_Toggleable_Animated_Mechanism_C.ExecuteUbergraph_bp_secret_chamber_door_Toggleable_Animated_Mechanism //  // @ game+0x188c2f0
};

