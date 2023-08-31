// BlueprintGeneratedClass BP_Chicken.BP_Chicken_C
// Size: 0xbf8 (Inherited: 0xbe0)
struct ABP_Chicken_C : ABP_Fauna_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xbe0(0x08)
	struct UAIItemSpawnComponent* AIItemSpawn; // 0xbe8(0x08)
	struct USkeletalMeshComponent* ChickenSkeletalMesh; // 0xbf0(0x08)

	void UserConstructionScript(); // Function BP_Chicken.BP_Chicken_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void ReceiveActorBeginOverlap(struct AActor** OtherActor); // Function BP_Chicken.BP_Chicken_C.ReceiveActorBeginOverlap // Event|Public|BlueprintEvent // @ game+0x1870810
	void ExecuteUbergraph_BP_Chicken(int32_t EntryPoint); // Function BP_Chicken.BP_Chicken_C.ExecuteUbergraph_BP_Chicken //  // @ game+0x1870810
};

