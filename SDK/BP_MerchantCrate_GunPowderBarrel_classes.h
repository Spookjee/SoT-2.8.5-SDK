// BlueprintGeneratedClass BP_MerchantCrate_GunPowderBarrel.BP_MerchantCrate_GunpowderBarrel_C
// Size: 0x8a0 (Inherited: 0x860)
struct ABP_MerchantCrate_GunpowderBarrel_C : ABP_MerchantCrate_GunpowderBarrel_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x860(0x08)
	struct UFlammableWieldableComponent* FlammableWieldable_1; // 0x868(0x08)
	struct ULightWeightStatusEffectManagerComponent* LightweightStatusEffectManager_1; // 0x870(0x08)
	struct UFuseComponent* Fuse; // 0x878(0x08)
	struct UBoxComponent* AttackHitVolume; // 0x880(0x08)
	struct UExplosionComponent* Explosion; // 0x888(0x08)
	struct UExplosiveComponent* Explosive; // 0x890(0x08)
	struct UActorDamageableComponent* ActorDamageable; // 0x898(0x08)

	void UserConstructionScript(); // Function BP_MerchantCrate_GunPowderBarrel.BP_MerchantCrate_GunpowderBarrel_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1870810
	void ReceiveBeginPlay(); // Function BP_MerchantCrate_GunPowderBarrel.BP_MerchantCrate_GunpowderBarrel_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1870810
	void ExecuteUbergraph_BP_MerchantCrate_GunpowderBarrel(int32_t EntryPoint); // Function BP_MerchantCrate_GunPowderBarrel.BP_MerchantCrate_GunpowderBarrel_C.ExecuteUbergraph_BP_MerchantCrate_GunpowderBarrel //  // @ game+0x1870810
};

