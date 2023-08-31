// BlueprintGeneratedClass BP_cmn_cannonball_Grenade_Scatter_Wieldable.BP_cmn_cannonball_Grenade_Scatter_Wieldable_C
// Size: 0x918 (Inherited: 0x8f8)
struct ABP_cmn_cannonball_Grenade_Scatter_Wieldable_C : ABP_Grenade_Wieldable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8f8(0x08)
	float JiggleVelocityThreshold; // 0x900(0x04)
	float JiggleVelocityScale; // 0x904(0x04)
	float JiggleAmount; // 0x908(0x04)
	char UnknownData_90C[0x4]; // 0x90c(0x04)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x910(0x08)

	void UserConstructionScript(); // Function BP_cmn_cannonball_Grenade_Scatter_Wieldable.BP_cmn_cannonball_Grenade_Scatter_Wieldable_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void ReceiveBeginPlay(); // Function BP_cmn_cannonball_Grenade_Scatter_Wieldable.BP_cmn_cannonball_Grenade_Scatter_Wieldable_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1870810
	void ReceiveTick(float* DeltaSeconds); // Function BP_cmn_cannonball_Grenade_Scatter_Wieldable.BP_cmn_cannonball_Grenade_Scatter_Wieldable_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1870810
	void ExecuteUbergraph_BP_cmn_cannonball_Grenade_Scatter_Wieldable(int32_t EntryPoint); // Function BP_cmn_cannonball_Grenade_Scatter_Wieldable.BP_cmn_cannonball_Grenade_Scatter_Wieldable_C.ExecuteUbergraph_BP_cmn_cannonball_Grenade_Scatter_Wieldable //  // @ game+0x1870810
};

