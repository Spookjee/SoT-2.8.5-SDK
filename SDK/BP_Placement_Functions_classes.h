// BlueprintGeneratedClass BP_Placement_Functions.BP_Placement_Functions_C
// Size: 0x28 (Inherited: 0x28)
struct UBP_Placement_Functions_C : UBlueprintFunctionLibrary {

	void GenerateRadialXYPositionsAroundPoint(struct FVector Centre, float Radius, int32_t Segments, struct UObject* __WorldContext, struct TArray<struct FVector> Positions); // Function BP_Placement_Functions.BP_Placement_Functions_C.GenerateRadialXYPositionsAroundPoint // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Get First Valid Hit(struct TArray<struct FHitResult> Hits, struct UObject* __WorldContext, bool Is Valid Hit, struct FHitResult Hit); // Function BP_Placement_Functions.BP_Placement_Functions_C.Get First Valid Hit // Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Generate Random Rotated Box Raycast(struct FRandomStream Random, struct FVector Centre, struct FVector Extent, struct FRotator Rotation, struct UObject* __WorldContext, struct FVector Raycast Start, struct FVector Raycast End); // Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Rotated Box Raycast // Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Detonate Charge(struct AActor* Spawn, struct FVector Position, float Radius, float Radius Overlap, int32_t Seed, struct TArray<struct FLinearColor> Blast Radii, struct UObject* __WorldContext, struct TArray<struct FLinearColor> Blast Radii Out); // Function BP_Placement_Functions.BP_Placement_Functions_C.Detonate Charge // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Does A Delete B(struct FString A String, struct FString B String, struct UObject* __WorldContext, bool Return); // Function BP_Placement_Functions.BP_Placement_Functions_C.Does A Delete B // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Get Actor Placement Asset Type(struct AActor* Input Actor, struct UObject* __WorldContext, bool Returning Tag, struct FString Asset Tag); // Function BP_Placement_Functions.BP_Placement_Functions_C.Get Actor Placement Asset Type // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Check Actor Overlap(struct AActor* Input Actor, struct UObject* __WorldContext, bool Delete Actor, struct TArray<struct AActor*> Overlaps to Delete); // Function BP_Placement_Functions.BP_Placement_Functions_C.Check Actor Overlap // Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Get Mesh Instance Transform(struct FPlacementGardenSeed Selected Mesh, struct FRandomStream Random, struct FVector Location, struct FVector Normal, struct UObject* __WorldContext, struct FTransform Transform); // Function BP_Placement_Functions.BP_Placement_Functions_C.Get Mesh Instance Transform // Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Normalise Mesh Probabilities(struct TArray<struct FPlacementGardenSeed> Charges, struct TArray<float> Charge Probabilities, struct UObject* __WorldContext); // Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Mesh Probabilities // Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Set Mesh(struct TArray<struct FPlacementGardenSeed> Meshes, struct TArray<float> Mesh Probabilities, float Generator Radius, float Spawn Clustering, float Spawn Radius Multiplier, struct TArray<struct UObject*> Physical Materials, struct TArray<struct FLinearColor> Mesh Radii, struct FRandomStream Random, struct AActor* Actor, struct UObject* __WorldContext, bool Spawn Permission, struct FTransform Transform, float Radius, int32_t Mesh Index, struct FPlacementGardenSeed Mesh); // Function BP_Placement_Functions.BP_Placement_Functions_C.Set Mesh // Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Set Charge(struct TArray<struct FPlacementBombCharge> Charges, struct TArray<float> Charge Probabilities, float Generator Radius, float Spawn Clustering, bool Box Distribution, struct TArray<struct UObject*> Physical Materials, struct TArray<struct FLinearColor> Blast Radii, struct FRandomStream Random, struct AActor* Actor, struct UObject* __WorldContext, bool Spawn Permission, struct FVector Position, float Radius, struct FPlacementBombCharge Charge); // Function BP_Placement_Functions.BP_Placement_Functions_C.Set Charge // Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Check Surface Materials(struct TArray<struct UObject*> Physical Materials, struct UObject* Placement Material, struct UObject* __WorldContext, bool Placement Permission); // Function BP_Placement_Functions.BP_Placement_Functions_C.Check Surface Materials // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x188c2f0
	void Check Slope(struct FVector Normal, struct FVector2D Slope Range, struct UObject* __WorldContext, bool Placement Permission); // Function BP_Placement_Functions.BP_Placement_Functions_C.Check Slope // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x188c2f0
	void Check Height(struct FVector Position, struct FVector2D Height Range, struct UObject* __WorldContext, bool Placement Permission); // Function BP_Placement_Functions.BP_Placement_Functions_C.Check Height // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x188c2f0
	void Check Radius Overlap(struct FVector Position, float Radius, float Radius Overlap, struct TArray<struct FLinearColor> Blast Radii, struct UObject* __WorldContext, bool Placement Permission); // Function BP_Placement_Functions.BP_Placement_Functions_C.Check Radius Overlap // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x188c2f0
	void Set Spawn Properties(struct UObject* Object, int32_t Seed, float Radius, struct UObject* __WorldContext, bool Cast Success); // Function BP_Placement_Functions.BP_Placement_Functions_C.Set Spawn Properties // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Generate Random Box Raycast(struct FRandomStream Random, struct FVector Centre, struct FVector Extent, struct UObject* __WorldContext, struct FVector Raycast Start, struct FVector Raycast End); // Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Box Raycast // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Get Box Sample Count(struct AActor* Actor, float Seed Density, struct UObject* __WorldContext, int32_t Sample Count); // Function BP_Placement_Functions.BP_Placement_Functions_C.Get Box Sample Count // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x188c2f0
	void Generate Random Radial Raycast(struct FRandomStream Random, float Radius, struct FVector Centre, float Spawn Clustering, float Spawn Radius Multiplier, struct FTransform Actor Transform, struct UObject* __WorldContext, struct FVector Raycast Start, struct FVector Raycast End); // Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Radial Raycast // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Calculate Index from Probabilities(float Random Float, struct TArray<float> Charge Probabilities, struct UObject* __WorldContext, int32_t Index); // Function BP_Placement_Functions.BP_Placement_Functions_C.Calculate Index from Probabilities // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Get Radial Sample Count(float Radius, float Spawn Sample Density, struct UObject* __WorldContext, int32_t Sample Count); // Function BP_Placement_Functions.BP_Placement_Functions_C.Get Radial Sample Count // Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x188c2f0
	void Normalise Charge Probabilities(struct TArray<struct FPlacementBombCharge> Charges, struct TArray<float> Charge Probabilities, struct UObject* __WorldContext); // Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Charge Probabilities // Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
};

