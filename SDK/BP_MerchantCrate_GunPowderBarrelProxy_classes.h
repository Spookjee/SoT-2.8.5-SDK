// BlueprintGeneratedClass BP_MerchantCrate_GunPowderBarrelProxy.BP_MerchantCrate_GunpowderBarrelProxy_C
// Size: 0x9a8 (Inherited: 0x960)
struct ABP_MerchantCrate_GunpowderBarrelProxy_C : ABP_MerchantCrate_GunpowderProxy_Base_C {
	struct UTelemetrySubjectComponent* TelemetrySubject; // 0x960(0x08)
	struct UWaterHeightProviderComponent* WaterHeightProvider; // 0x968(0x08)
	struct UExplosiveTriggerRammableComponent* ExplosiveTriggerRammable; // 0x970(0x08)
	struct UFuseComponent* Fuse; // 0x978(0x08)
	struct UExplosiveComponent* ExplosiveComponent; // 0x980(0x08)
	struct UActorDamageableComponent* ActorDamageable; // 0x988(0x08)
	struct UBoxComponent* AttackHitVolume; // 0x990(0x08)
	struct UExplosionComponent* ExplosionComponent; // 0x998(0x08)
	struct UInteractableComponent* Interactable; // 0x9a0(0x08)

	char GetPxActorCapacityForPhysXAggregate(); // Function BP_MerchantCrate_GunPowderBarrelProxy.BP_MerchantCrate_GunpowderBarrelProxy_C.GetPxActorCapacityForPhysXAggregate // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x1870810
	void UserConstructionScript(); // Function BP_MerchantCrate_GunPowderBarrelProxy.BP_MerchantCrate_GunpowderBarrelProxy_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1870810
};

