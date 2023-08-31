// BlueprintGeneratedClass BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C
// Size: 0xab1 (Inherited: 0xa91)
struct ABP_BaseLockableCollectorsChest_Proxy_C : ABP_CollectorsChest_Proxy_C {
	char UnknownData_A91[0x7]; // 0xa91(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa98(0x08)
	struct USceneComponent* LockSocketsRoot; // 0xaa0(0x08)
	struct ULockComponent* Lock; // 0xaa8(0x08)
	bool Open After Unlock; // 0xab0(0x01)

	void UserConstructionScript(); // Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void ReceiveBeginPlay(); // Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1870810
	void BndEvt__Lock_K2Node_ComponentBoundEvent_12_OnLockOpenedDelegate__DelegateSignature(struct AActor* Interactor); // Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.BndEvt__Lock_K2Node_ComponentBoundEvent_12_OnLockOpenedDelegate__DelegateSignature // BlueprintEvent // @ game+0x1870810
	void ExecuteUbergraph_BP_BaseLockableCollectorsChest_Proxy(int32_t EntryPoint); // Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.ExecuteUbergraph_BP_BaseLockableCollectorsChest_Proxy //  // @ game+0x1870810
};

