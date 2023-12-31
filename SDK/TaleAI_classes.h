// Class TaleAI.TaleAIRegionBase
// Size: 0x70 (Inherited: 0x28)
struct UTaleAIRegionBase : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UAIProximityPlayerTracker* ProximityPlayerTracker; // 0x30(0x08)
	char UnknownData_38[0x38]; // 0x38(0x38)
};

// Class TaleAI.TaleAICustomRegion
// Size: 0x88 (Inherited: 0x70)
struct UTaleAICustomRegion : UTaleAIRegionBase {
	char UnknownData_70[0x18]; // 0x70(0x18)
};

// Class TaleAI.TaleAIRegionFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleAIRegionFunctionLibrary : UTaleQuestFunctionStepLibrary {

	struct UTaleAICustomRegion* CreateCustomRegion(struct FVector RegionCentre, float RegionRadius); // Function TaleAI.TaleAIRegionFunctionLibrary.CreateCustomRegion // Final|Native|Public|HasOutParms|HasDefaults|Const // @ game+0x4906c60
};

// Class TaleAI.TaleQuestAIAsset
// Size: 0x38 (Inherited: 0x28)
struct UTaleQuestAIAsset : UDataAsset {
	struct UTaleQuestSpawnAICustomRootStepDesc* SpawnerRoot; // 0x28(0x08)
	struct UTaleStruct* SpawnerParameters; // 0x30(0x08)
};

// Class TaleAI.TaleQuestAIBlackboardFunctionStepLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestAIBlackboardFunctionStepLibrary : UTaleQuestFunctionStepLibrary {

	void WaitForBlackboardValueAsObject(struct APawn* Pawn, struct FName KeyName, struct UObject* ExpectedValue); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.WaitForBlackboardValueAsObject // Final|Native|Public|HasOutParms // @ game+0x4908960
	void WaitForBlackboardValueAsClass(struct APawn* Pawn, struct FName KeyName, struct UClass* ExpectedValue); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.WaitForBlackboardValueAsClass // Final|Native|Public|HasOutParms // @ game+0x4908850
	void WaitForBlackboardValueAsBool(struct APawn* Pawn, struct FName KeyName, bool ExpectedValue); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.WaitForBlackboardValueAsBool // Final|Native|Public|HasOutParms // @ game+0x4908740
	void SetBlackboardValueAsVector(struct APawn* Pawn, struct FName KeyName, struct FVector Value); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsVector // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x4908400
	void SetBlackboardValueAsString(struct APawn* Pawn, struct FName KeyName, struct FString Value); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsString // Final|Native|Static|Public|HasOutParms // @ game+0x49082d0
	void SetBlackboardValueAsRotator(struct APawn* Pawn, struct FName KeyName, struct FRotator Value); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsRotator // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x49081b0
	void SetBlackboardValueAsObject(struct APawn* Pawn, struct FName KeyName, struct UObject* Value); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsObject // Final|Native|Static|Public|HasOutParms // @ game+0x49080a0
	void SetBlackboardValueAsName(struct APawn* Pawn, struct FName KeyName, struct FName Value); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsName // Final|Native|Static|Public|HasOutParms // @ game+0x4907f80
	void SetBlackboardValueAsInt(struct APawn* Pawn, struct FName KeyName, int32_t Value); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsInt // Final|Native|Static|Public|HasOutParms // @ game+0x4907e70
	void SetBlackboardValueAsFloat(struct APawn* Pawn, struct FName KeyName, float Value); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsFloat // Final|Native|Static|Public|HasOutParms // @ game+0x4907d60
	void SetBlackboardValueAsClass(struct APawn* Pawn, struct FName KeyName, struct UClass* Value); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsClass // Final|Native|Static|Public|HasOutParms // @ game+0x4907c50
	void SetBlackboardValueAsBool(struct APawn* Pawn, struct FName KeyName, bool Value); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsBool // Final|Native|Static|Public|HasOutParms // @ game+0x4907b40
	void RunBehaviourTree(struct APawn* Pawn, struct UBehaviorTree* BehaviourTree); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.RunBehaviourTree // Final|Native|Public|HasOutParms // @ game+0x4907780
	void GetBlackboardValueAsVector(struct APawn* Pawn, struct FName KeyName, struct FVector Value); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.GetBlackboardValueAsVector // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x4907660
	void GetBlackboardValueAsString(struct APawn* Pawn, struct FName KeyName, struct FString Value); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.GetBlackboardValueAsString // Final|Native|Static|Public|HasOutParms // @ game+0x4907520
	void GetBlackboardValueAsRotator(struct APawn* Pawn, struct FName KeyName, struct FRotator Value); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.GetBlackboardValueAsRotator // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x4907400
	void GetBlackboardValueAsObject(struct APawn* Pawn, struct FName KeyName, struct UObject* Value); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.GetBlackboardValueAsObject // Final|Native|Static|Public|HasOutParms // @ game+0x49072e0
	void GetBlackboardValueAsName(struct APawn* Pawn, struct FName KeyName, struct FName Value); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.GetBlackboardValueAsName // Final|Native|Static|Public|HasOutParms // @ game+0x49071c0
	void GetBlackboardValueAsInt(struct APawn* Pawn, struct FName KeyName, int32_t Value); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.GetBlackboardValueAsInt // Final|Native|Static|Public|HasOutParms // @ game+0x49070a0
	void GetBlackboardValueAsFloat(struct APawn* Pawn, struct FName KeyName, float Value); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.GetBlackboardValueAsFloat // Final|Native|Static|Public|HasOutParms // @ game+0x4906f80
	void GetBlackboardValueAsClass(struct APawn* Pawn, struct FName KeyName, struct UClass* Value); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.GetBlackboardValueAsClass // Final|Native|Static|Public|HasOutParms // @ game+0x4906e60
	void GetBlackboardValueAsBool(struct APawn* Pawn, struct FName KeyName, bool Value); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.GetBlackboardValueAsBool // Final|Native|Static|Public|HasOutParms // @ game+0x4906d40
	void ClearBlackboardValue(struct APawn* Pawn, struct FName KeyName); // Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.ClearBlackboardValue // Final|Native|Static|Public|HasOutParms // @ game+0x4906a50
};

// Class TaleAI.TaleQuestAIGoalFunctionStepLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestAIGoalFunctionStepLibrary : UTaleQuestFunctionStepLibrary {

	void SetQuestTargetLocation(struct APawn* Pawn, struct FVector Value); // Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.SetQuestTargetLocation // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x4908680
	void SetQuestTargetActor(struct APawn* Pawn, struct UObject* Value); // Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.SetQuestTargetActor // Final|Native|Static|Public // @ game+0x49085d0
	void SetQuestLookAtActor(struct APawn* Pawn, struct UObject* Value); // Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.SetQuestLookAtActor // Final|Native|Static|Public // @ game+0x4908520
	void SetAreaOfOperation(TScriptInterface<struct UAIAreaOfOperationInterface> AIAreaOfOperationInterface, struct FVector AreaLocation, float AreaRadius); // Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.SetAreaOfOperation // Final|Native|Static|Public|HasOutParms|HasDefaults // @ game+0x4907a10
	void ClearQuestTargetLocation(struct APawn* Pawn); // Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.ClearQuestTargetLocation // Final|Native|Static|Public // @ game+0x4906bf0
	void ClearQuestTargetActor(struct APawn* Pawn); // Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.ClearQuestTargetActor // Final|Native|Static|Public // @ game+0x4906b80
	void ClearQuestLookAtActor(struct APawn* Pawn); // Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.ClearQuestLookAtActor // Final|Native|Static|Public // @ game+0x4906b10
	void ClearAreaOfOperation(TScriptInterface<struct UAIAreaOfOperationInterface> AIAreaOfOperationInterface); // Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.ClearAreaOfOperation // Final|Native|Static|Public // @ game+0x49069c0
};

// Class TaleAI.TaleQuestAINameplateFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestAINameplateFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void SetAINamplateName(struct UAINameplateComponent* NameplateComponent, struct FText Title, struct FText Name); // Function TaleAI.TaleQuestAINameplateFunctionLibrary.SetAINamplateName // Final|Native|Public|HasOutParms|Const // @ game+0x49078a0
};

// Class TaleAI.TaleQuestAISpawner
// Size: 0x28 (Inherited: 0x28)
struct UTaleQuestAISpawner : UObject {
};

// Class TaleAI.TaleQuestAISpawnFunctionLibrary
// Size: 0x180 (Inherited: 0x180)
struct UTaleQuestAISpawnFunctionLibrary : UTaleQuestFunctionStepLibrary {

	void WaitForSpawnComplete(struct APawn* Pawn); // Function TaleAI.TaleQuestAISpawnFunctionLibrary.WaitForSpawnComplete // Final|Native|Public // @ game+0x4908a70
};

// Class TaleAI.TaleQuestSpawnAICustomOnDespawnFrame
// Size: 0x50 (Inherited: 0x28)
struct UTaleQuestSpawnAICustomOnDespawnFrame : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FSpawnAICustomOnDespawnTaskData Data; // 0x30(0x20)
};

// Class TaleAI.TaleQuestSpawnAICustomOnSpawnFrame
// Size: 0x48 (Inherited: 0x28)
struct UTaleQuestSpawnAICustomOnSpawnFrame : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FSpawnAICustomOnSpawnTaskData Data; // 0x30(0x18)
};

// Class TaleAI.TaleQuestSpawnAICustomRootStep
// Size: 0x188 (Inherited: 0x98)
struct UTaleQuestSpawnAICustomRootStep : UTaleQuestStep {
	char UnknownData_98[0x10]; // 0x98(0x10)
	struct FTaleStructInstance Params; // 0xa8(0x10)
	struct TArray<struct UTaleQuestSpawnAICustomTaskBase*> ActiveTasks; // 0xb8(0x10)
	char UnknownData_C8[0x10]; // 0xc8(0x10)
	struct UTaleAIRegionBase* Region; // 0xd8(0x08)
	char UnknownData_E0[0xa8]; // 0xe0(0xa8)
};

// Class TaleAI.TaleQuestSpawnAICustomRootStepDesc
// Size: 0x168 (Inherited: 0x80)
struct UTaleQuestSpawnAICustomRootStepDesc : UTaleQuestStepDesc {
	char UnknownData_80[0x8]; // 0x80(0x08)
	struct FSpawnAICustomSetupTaskData SetupTaskData; // 0x88(0x18)
	struct FSpawnActorCustomOnTriggerWaveTaskData OnTriggerWaveTaskData; // 0xa0(0x10)
	struct FSpawnActorCustomOnCompleteWaveTaskData OnCompleteWaveTaskData; // 0xb0(0x08)
	struct FSpawnAICustomPreSpawnTaskData PreSpawnTaskData; // 0xb8(0x78)
	struct FSpawnAICustomOnSpawnTaskData OnSpawnTaskData; // 0x130(0x18)
	struct FSpawnAICustomOnDespawnTaskData OnDespawnTaskData; // 0x148(0x20)
};

// Class TaleAI.TaleQuestSpawnAICustomStep
// Size: 0x148 (Inherited: 0x98)
struct UTaleQuestSpawnAICustomStep : UTaleQuestStep {
	TScriptInterface<struct UTaleQuestStepInterface> SpawnerInstance; // 0x98(0x10)
	struct TMap<int32_t, TScriptInterface<struct UTaleQuestStepInterface>> OnSpawnedTasks; // 0xa8(0x50)
	struct TMap<int32_t, TScriptInterface<struct UTaleQuestStepInterface>> OnDespawnTasks; // 0xf8(0x50)
};

// Class TaleAI.TaleQuestSpawnAICustomStepDesc
// Size: 0x100 (Inherited: 0x80)
struct UTaleQuestSpawnAICustomStepDesc : UTaleQuestStepDesc {
	char UnknownData_80[0x8]; // 0x80(0x08)
	struct UTaleQuestAIAsset* AISpawner; // 0x88(0x08)
	struct UTaleQuestStepDesc* OnSpawn; // 0x90(0x08)
	struct UTaleQuestStepDesc* OnDespawn; // 0x98(0x08)
	struct TMap<struct FName, struct FQuestVariableAny> ParameterMapping; // 0xa0(0x50)
	struct FTaleStructInstance ParamterInstance; // 0xf0(0x10)
};

// Class TaleAI.TaleQuestSpawnAICustomTaskBase
// Size: 0x78 (Inherited: 0x28)
struct UTaleQuestSpawnAICustomTaskBase : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UTaleQuestSpawnAICustomRootStep* MyRootStep; // 0x30(0x08)
	char UnknownData_38[0x40]; // 0x38(0x40)
};

// Class TaleAI.TaleQuestSpawnAICustomOnDespawnTask
// Size: 0xa8 (Inherited: 0x78)
struct UTaleQuestSpawnAICustomOnDespawnTask : UTaleQuestSpawnAICustomTaskBase {
	TScriptInterface<struct UTaleQuestStepInterface> Body; // 0x78(0x10)
	struct FSpawnAICustomOnDespawnTaskData TaskData; // 0x88(0x20)
};

// Class TaleAI.TaleQuestSpawnAICustomOnSpawnTask
// Size: 0x120 (Inherited: 0x78)
struct UTaleQuestSpawnAICustomOnSpawnTask : UTaleQuestSpawnAICustomTaskBase {
	TScriptInterface<struct UTaleQuestStepInterface> Body; // 0x78(0x10)
	struct FSpawnAICustomOnSpawnTaskData TaskData; // 0x88(0x18)
	char UnknownData_A0[0x80]; // 0xa0(0x80)
};

// Class TaleAI.TaleQuestSpawnAICustomPreSpawnTask
// Size: 0x110 (Inherited: 0x78)
struct UTaleQuestSpawnAICustomPreSpawnTask : UTaleQuestSpawnAICustomTaskBase {
	char UnknownData_78[0x8]; // 0x78(0x08)
	TScriptInterface<struct UTaleQuestStepInterface> Body; // 0x80(0x10)
	struct FSpawnAICustomPreSpawnTaskData TaskData; // 0x90(0x78)
	char UnknownData_108[0x8]; // 0x108(0x08)
};

// Class TaleAI.TaleQuestSpawnAICustomSetupTask
// Size: 0xa0 (Inherited: 0x78)
struct UTaleQuestSpawnAICustomSetupTask : UTaleQuestSpawnAICustomTaskBase {
	struct FSpawnAICustomSetupTaskData TaskData; // 0x78(0x18)
	TScriptInterface<struct UTaleQuestStepInterface> Body; // 0x90(0x10)
};

// Class TaleAI.TaleQuestSpawnAICustomSpawnerOnCompleteWaveTask
// Size: 0x90 (Inherited: 0x78)
struct UTaleQuestSpawnAICustomSpawnerOnCompleteWaveTask : UTaleQuestSpawnAICustomTaskBase {
	struct FSpawnActorCustomOnCompleteWaveTaskData TaskData; // 0x78(0x08)
	TScriptInterface<struct UTaleQuestStepInterface> Body; // 0x80(0x10)
};

// Class TaleAI.TaleQuestSpawnAICustomSpawnerOnTriggerWaveTask
// Size: 0x98 (Inherited: 0x78)
struct UTaleQuestSpawnAICustomSpawnerOnTriggerWaveTask : UTaleQuestSpawnAICustomTaskBase {
	struct FSpawnActorCustomOnTriggerWaveTaskData TaskData; // 0x78(0x10)
	TScriptInterface<struct UTaleQuestStepInterface> Body; // 0x88(0x10)
};

