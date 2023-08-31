// BlueprintGeneratedClass act_lantern_a.act_lantern_a_C
// Size: 0x3f0 (Inherited: 0x3d8)
struct Aact_lantern_a_C : AStaticMeshActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UParticleSystemComponent* vfx_fire_torch; // 0x3e0(0x08)
	struct UPointLightComponent* PointLight; // 0x3e8(0x08)

	void UserConstructionScript(); // Function act_lantern_a.act_lantern_a_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ReceiveBeginPlay(); // Function act_lantern_a.act_lantern_a_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_act_lantern_a(int32_t EntryPoint); // Function act_lantern_a.act_lantern_a_C.ExecuteUbergraph_act_lantern_a //  // @ game+0x188c2f0
};

