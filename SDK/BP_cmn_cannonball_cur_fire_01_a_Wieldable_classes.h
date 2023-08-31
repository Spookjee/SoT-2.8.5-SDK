// BlueprintGeneratedClass BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C
// Size: 0x961 (Inherited: 0x8f8)
struct ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C : ABP_Grenade_Wieldable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8f8(0x08)
	struct UPointLightComponent* PointLight; // 0x900(0x08)
	struct FObjectMessagingHandle OnWieldedHandle; // 0x908(0x58)
	bool IsWielded; // 0x960(0x01)

	void SetLightVisibility(bool Visibility); // Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.SetLightVisibility // Public|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void OnRep_IsWielded(); // Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.OnRep_IsWielded // BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void UserConstructionScript(); // Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void ReceiveBeginPlay(); // Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1870810
	void OnIsWielded(struct FEventWieldableItemSetIsWielded NewParam); // Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.OnIsWielded // BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void ReceiveEndPlay(char* EndPlayReason); // Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x1870810
	void ExecuteUbergraph_BP_cmn_cannonball_cur_fire_01_a_Wieldable(int32_t EntryPoint); // Function BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C.ExecuteUbergraph_BP_cmn_cannonball_cur_fire_01_a_Wieldable // HasDefaults // @ game+0x1870810
};

