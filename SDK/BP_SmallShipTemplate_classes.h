// BlueprintGeneratedClass BP_SmallShipTemplate.BP_SmallShipTemplate_C
// Size: 0x1c58 (Inherited: 0x1890)
struct ABP_SmallShipTemplate_C : AShip {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1890(0x08)
	struct UShipRowboatPersistenceComponent* ShipRowboatPersistence; // 0x1898(0x08)
	struct UHarpoonItemLocationComponent* HarpoonItemLocation1; // 0x18a0(0x08)
	struct UHarpoonItemLocationComponent* HarpoonItemLocation; // 0x18a8(0x08)
	struct UFactionParticleComponent* FactionGBowParticles; // 0x18b0(0x08)
	struct UFactionParticleComponent* FactionBBowParticles; // 0x18b8(0x08)
	struct USplashProbeVFXComponent* VFX_SplashProbe_Both_Splashes_Details; // 0x18c0(0x08)
	struct USplashProbeVFXComponent* VFX_SplashProbe_Both_Splashes_Second; // 0x18c8(0x08)
	struct USplashProbeVFXComponent* VFX_SplashProbe_OnShip_Splashes; // 0x18d0(0x08)
	struct USplashProbeVFXComponent* VFX_SplashProbe_Offship_Splashes; // 0x18d8(0x08)
	struct USplashProbeVFXComponent* VFX_SplashProbe_Underwater; // 0x18e0(0x08)
	struct UParticleSystemComponent* vfx_playerships_bubbles_cannon_Local2; // 0x18e8(0x08)
	struct UParticleSystemComponent* vfx_playerships_bubbles_captain_Local1; // 0x18f0(0x08)
	struct UParticleSystemComponent* vfx_playerships_bubbles_cannon_Local1; // 0x18f8(0x08)
	struct UParticleSystemComponent* vfx_playerships_bubbles_captain_Local2; // 0x1900(0x08)
	struct UParticleSystemComponent* vfx_playerships_bubbles_rectangle_surface_Huge_Top; // 0x1908(0x08)
	struct UParticleSystemComponent* vfx_playerships_bubbles_rectangle_Local_VS; // 0x1910(0x08)
	struct UParticleSystemComponent* vfx_playerships_bubbles_rectangle_surface_Huge_Bottom; // 0x1918(0x08)
	struct USceneComponent* VFX_Scene; // 0x1920(0x08)
	struct UShipFactionCustomisation* ShipFactionCustomisation; // 0x1928(0x08)
	struct UTeleportLocationComponent* TeleportLocation_16; // 0x1930(0x08)
	struct UTeleportLocationComponent* TeleportLocation_15; // 0x1938(0x08)
	struct UTeleportLocationComponent* TeleportLocation_14; // 0x1940(0x08)
	struct UTeleportLocationComponent* TeleportLocation_13; // 0x1948(0x08)
	struct UTeleportLocationComponent* TeleportLocation_12; // 0x1950(0x08)
	struct UTeleportLocationComponent* TeleportLocation_11; // 0x1958(0x08)
	struct UTeleportLocationComponent* TeleportLocation_09; // 0x1960(0x08)
	struct UTeleportLocationComponent* TeleportLocation_08; // 0x1968(0x08)
	struct UTeleportLocationComponent* TeleportLocation_07; // 0x1970(0x08)
	struct UTeleportLocationComponent* TeleportLocation_06; // 0x1978(0x08)
	struct UTeleportLocationComponent* TeleportLocation_05; // 0x1980(0x08)
	struct UBP_ShipTrinketMountpointManagerComponent_Small_C* ShipTrinketMountpointManagerComponent_Small; // 0x1988(0x08)
	struct UChildActorComponent* CaptainsLog; // 0x1990(0x08)
	struct UChildActorComponent* ShipsCrest; // 0x1998(0x08)
	struct UChildActorComponent* Rugs; // 0x19a0(0x08)
	struct UChildActorComponent* Drapes; // 0x19a8(0x08)
	struct UChildActorComponent* Bed; // 0x19b0(0x08)
	struct UShipStorageJettisonComponent* ShipStorageJettison; // 0x19b8(0x08)
	struct UChildActorComponent* VoyageTable; // 0x19c0(0x08)
	struct UBP_BedComponent_C* BP_BedComponent; // 0x19c8(0x08)
	struct UStaticMeshComponent* Rat3; // 0x19d0(0x08)
	struct UStaticMeshComponent* Rat2; // 0x19d8(0x08)
	struct UStaticMeshComponent* Rat1; // 0x19e0(0x08)
	struct URatManagerComponent* RatManager; // 0x19e8(0x08)
	struct UBP_SeatComponent_C* Seat_MapTable_3; // 0x19f0(0x08)
	struct UBP_SeatComponent_C* Seat_MapTable_2; // 0x19f8(0x08)
	struct UBP_SeatComponent_C* Seat_Barrel_Top; // 0x1a00(0x08)
	struct UBP_SeatComponent_C* Seat_Front_Starboard; // 0x1a08(0x08)
	struct UBP_SeatComponent_C* Seat_Front_Port; // 0x1a10(0x08)
	struct UBP_SeatComponent_C* Seat_Side_Starboard; // 0x1a18(0x08)
	struct UBP_SeatComponent_C* Seat_Side_Port; // 0x1a20(0x08)
	struct UBP_SeatComponent_C* Seat_Bottom_Barrel; // 0x1a28(0x08)
	struct UBP_SeatComponent_C* Seat_Bottom_Port; // 0x1a30(0x08)
	struct UBP_SeatComponent_C* Seat_Bottom_Starboard; // 0x1a38(0x08)
	struct UBP_SeatComponent_C* Seat_Top_Rear_3; // 0x1a40(0x08)
	struct UArrowComponent* Arrow; // 0x1a48(0x08)
	struct UBP_SeatComponent_C* Seat_Top_Rear_2; // 0x1a50(0x08)
	struct UAIRegionComponent* AIRegion; // 0x1a58(0x08)
	struct UNamedPointsComponent* NamedPoints; // 0x1a60(0x08)
	struct UStaticMeshComponent* shp_small_ladder_gap_hits_01_a; // 0x1a68(0x08)
	struct UStaticMeshComponent* shp_flag_hole_01_a; // 0x1a70(0x08)
	struct UChildActorComponent* BP_EmissaryFlag; // 0x1a78(0x08)
	struct UEmissaryFlotsamItemSpawnComponent* EmissaryFlotsamItemSpawner; // 0x1a80(0x08)
	struct UChildActorComponent* BP_LargeShip_CageLatch_03_b; // 0x1a88(0x08)
	struct UChildActorComponent* BP_SmallShip_WindowHatchRight; // 0x1a90(0x08)
	struct UChildActorComponent* BP_SmallShip_WindowHatchLeft; // 0x1a98(0x08)
	struct UChildActorComponent* BP_WaterBarrel; // 0x1aa0(0x08)
	struct UChildActorComponent* BP_Shroudbreaker; // 0x1aa8(0x08)
	struct UChildActorComponent* BP_ShipPetChest; // 0x1ab0(0x08)
	struct UPetHangoutSpotComponent* PetHangoutSpot; // 0x1ab8(0x08)
	struct UChildActorComponent* ShipStorageBarrel_Food_3; // 0x1ac0(0x08)
	struct UChildActorComponent* BP_HarpoonLauncher1; // 0x1ac8(0x08)
	struct UChildActorComponent* BP_HarpoonLauncher; // 0x1ad0(0x08)
	struct UChildActorComponent* RowboatMountpoint; // 0x1ad8(0x08)
	struct UShipTelemetryComponent* ShipTelemetry; // 0x1ae0(0x08)
	struct URiggingSystemComponent* ControlsRigging; // 0x1ae8(0x08)
	struct UChildActorComponent* BP_ShipVanityChest; // 0x1af0(0x08)
	struct UChildActorComponent* BP_SmallShipLadder_02; // 0x1af8(0x08)
	struct UChildActorComponent* Lanterns; // 0x1b00(0x08)
	struct UChildActorComponent* ShipStorageBarrel_LowerDeck10; // 0x1b08(0x08)
	struct UChildActorComponent* ShipStorageBarrel_LowerDeck8; // 0x1b10(0x08)
	struct UChildActorComponent* ShipStorageBarrel_LowerDeck7; // 0x1b18(0x08)
	struct UChildActorComponent* ShipStorageBarrel_Food_2; // 0x1b20(0x08)
	struct UChildActorComponent* ShipStorageBarrel_Cannonball2; // 0x1b28(0x08)
	struct UChildActorComponent* ShipStorageBarrel_Cannonball1; // 0x1b30(0x08)
	struct UChildActorComponent* BP_EquipmentChest; // 0x1b38(0x08)
	struct UChildActorComponent* BP_ClothingChest; // 0x1b40(0x08)
	struct UChildActorComponent* BP_WeaponsChest; // 0x1b48(0x08)
	struct UChildActorComponent* ShipStorageBarrel_LowerDeck3; // 0x1b50(0x08)
	struct UChildActorComponent* BP_SmallMapTable; // 0x1b58(0x08)
	struct UChildActorComponent* Capstan; // 0x1b60(0x08)
	struct UChildActorComponent* GrogBarrel; // 0x1b68(0x08)
	struct UChildActorComponent* MastMainSailAngleLeft; // 0x1b70(0x08)
	struct UChildActorComponent* ShipStorageBarrel_LowerDeck1; // 0x1b78(0x08)
	struct UChildActorComponent* ShipStorageBarrel_LowerDeck11; // 0x1b80(0x08)
	struct UChildActorComponent* ShipStorageBarrel_Wood; // 0x1b88(0x08)
	struct UBoxComponent* RammingSpurZone; // 0x1b90(0x08)
	struct UStaticMeshComponent* shp_shark_hits_01_a; // 0x1b98(0x08)
	struct UChildActorComponent* BP_AmmoChest; // 0x1ba0(0x08)
	struct UTeleportLocationComponent* TeleportLocation_04; // 0x1ba8(0x08)
	struct UTeleportLocationComponent* TeleportLocation_03; // 0x1bb0(0x08)
	struct UTeleportLocationComponent* TeleportLocation_02; // 0x1bb8(0x08)
	struct URiggingSystemComponent* MainRigging; // 0x1bc0(0x08)
	struct UChildActorComponent* ShipsCompass; // 0x1bc8(0x08)
	struct UChildActorComponent* Figurehead; // 0x1bd0(0x08)
	struct UChildActorComponent* CannonRight1; // 0x1bd8(0x08)
	struct UChildActorComponent* CannonLeft1; // 0x1be0(0x08)
	struct UChildActorComponent* LadderStbd; // 0x1be8(0x08)
	struct UChildActorComponent* Hull; // 0x1bf0(0x08)
	struct UChildActorComponent* MastMainSailAngleRight; // 0x1bf8(0x08)
	struct UChildActorComponent* MastMainSailHoistRight; // 0x1c00(0x08)
	struct UChildActorComponent* MastMainSailHoistLeft; // 0x1c08(0x08)
	struct UChildActorComponent* MastMain; // 0x1c10(0x08)
	struct UChildActorComponent* Anchor; // 0x1c18(0x08)
	struct UChildActorComponent* Rudder; // 0x1c20(0x08)
	struct UChildActorComponent* Wheel; // 0x1c28(0x08)
	struct UChildActorComponent* AudioBoat; // 0x1c30(0x08)
	char Timeline_Disable_Secondary__Direction_3A9DF63A47F1548F84D99BAAF45F186E; // 0x1c38(0x01)
	char UnknownData_1C39[0x7]; // 0x1c39(0x07)
	struct UTimelineComponent* Timeline_Disable_Secondary; // 0x1c40(0x08)
	char Timeline_DisableSplash__Direction_F5D6E1F54BED8D1B7D088AB524334C7B; // 0x1c48(0x01)
	char UnknownData_1C49[0x7]; // 0x1c49(0x07)
	struct UTimelineComponent* Timeline_DisableSplash; // 0x1c50(0x08)

	void IsPlayerOnShip(bool IsPlayerOnShip); // Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.IsPlayerOnShip // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	char GetPxActorCapacityForPhysXAggregate(); // Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.GetPxActorCapacityForPhysXAggregate // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x188c2f0
	void UserConstructionScript(); // Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Timeline_DisableSplash__FinishedFunc(); // Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.Timeline_DisableSplash__FinishedFunc // BlueprintEvent // @ game+0x188c2f0
	void Timeline_DisableSplash__UpdateFunc(); // Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.Timeline_DisableSplash__UpdateFunc // BlueprintEvent // @ game+0x188c2f0
	void Timeline_Disable_Secondary__FinishedFunc(); // Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.Timeline_Disable_Secondary__FinishedFunc // BlueprintEvent // @ game+0x188c2f0
	void Timeline_Disable_Secondary__UpdateFunc(); // Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.Timeline_Disable_Secondary__UpdateFunc // BlueprintEvent // @ game+0x188c2f0
	void OnPlayerShipBeginSurface(); // Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.OnPlayerShipBeginSurface // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void OnPlayerShipDive(); // Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.OnPlayerShipDive // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void OnPlayerShipSailing(); // Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.OnPlayerShipSailing // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_BP_SmallShipTemplate(int32_t EntryPoint); // Function BP_SmallShipTemplate.BP_SmallShipTemplate_C.ExecuteUbergraph_BP_SmallShipTemplate //  // @ game+0x188c2f0
};

