// Class Wind.WindZoneInterface
// Size: 0x28 (Inherited: 0x28)
struct UWindZoneInterface : UInterface {

	struct FWindZoneParams GetWindZoneParams(); // Function Wind.WindZoneInterface.GetWindZoneParams // Native|Public|BlueprintCallable // @ game+0x36a9a20
	struct FVector2D GetWindZoneLocation(); // Function Wind.WindZoneInterface.GetWindZoneLocation // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x36a99e0
	struct FWindZoneTurbulence GetTurbulence(struct FVector Location); // Function Wind.WindZoneInterface.GetTurbulence // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x36a9400
};

// Class Wind.WindInterface
// Size: 0x28 (Inherited: 0x28)
struct UWindInterface : UInterface {

	void UnregisterWindZone(TScriptInterface<struct UWindZoneInterface> InWindZone); // Function Wind.WindInterface.UnregisterWindZone // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x36a9f80
	void TriggerChange(bool ChangeInstantly); // Function Wind.WindInterface.TriggerChange // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x36a9ef0
	void SetParams(struct FWindServiceParams Params); // Function Wind.WindInterface.SetParams // BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable // @ game+0x36a9e50
	void SetGlobalWindVector(struct FVector InWindVector); // Function Wind.WindInterface.SetGlobalWindVector // BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x36a9dc0
	void SetGlobalWindMagnitude(float InWindMagnitude); // Function Wind.WindInterface.SetGlobalWindMagnitude // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x36a9d40
	void SetGlobalWindDirection(struct FVector InWindDirection); // Function Wind.WindInterface.SetGlobalWindDirection // BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x36a9cb0
	void SetGlobalWindAngle(float InAngle); // Function Wind.WindInterface.SetGlobalWindAngle // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x36a9c30
	void SetCustomMode(bool InCustomMode); // Function Wind.WindInterface.SetCustomMode // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x36a9b30
	void RegisterWindZone(TScriptInterface<struct UWindZoneInterface> InWindZone); // Function Wind.WindInterface.RegisterWindZone // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x36a9a90
	TScriptInterface<struct UWindZoneInterface> GetWindZoneAtLocation(struct FVector SamplePosition); // Function Wind.WindInterface.GetWindZoneAtLocation // BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x36a9930
	struct FVector GetWindVector(struct FVector SamplePosition); // Function Wind.WindInterface.GetWindVector // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x36a9880
	float GetWindMagnitude(struct FVector SamplePosition); // Function Wind.WindInterface.GetWindMagnitude // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x36a9790
	struct FVector GetWindDirection(struct FVector SamplePosition); // Function Wind.WindInterface.GetWindDirection // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x36a96e0
	float GetWindAngle(struct FVector SamplePosition); // Function Wind.WindInterface.GetWindAngle // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x36a9560
	struct FWindZoneTurbulence GetTurbulenceForTrees(struct FVector SamplePosition); // Function Wind.WindInterface.GetTurbulenceForTrees // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x36a94b0
	struct FWindZoneTurbulence GetTurbulence(struct FVector SamplePosition); // Function Wind.WindInterface.GetTurbulence // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x36a9350
	float GetMaxWindMagnitude(); // Function Wind.WindInterface.GetMaxWindMagnitude // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x36a9320
};

// Class Wind.DebugWindInterface
// Size: 0x28 (Inherited: 0x28)
struct UDebugWindInterface : UInterface {
};

// Class Wind.MockWindService
// Size: 0x40 (Inherited: 0x28)
struct UMockWindService : UObject {
	char UnknownData_28[0x18]; // 0x28(0x18)
};

// Class Wind.TestWindInterface
// Size: 0x68 (Inherited: 0x28)
struct UTestWindInterface : UObject {
	char UnknownData_28[0x30]; // 0x28(0x30)
	struct TArray<TScriptInterface<struct UWindZoneInterface>> WindZones; // 0x58(0x10)
};

// Class Wind.TestWindZone
// Size: 0x50 (Inherited: 0x28)
struct UTestWindZone : UObject {
	char UnknownData_28[0x28]; // 0x28(0x28)
};

// Class Wind.WindFunctions
// Size: 0x28 (Inherited: 0x28)
struct UWindFunctions : UBlueprintFunctionLibrary {

	void SetDefaultWindBlowingNorth(struct UObject* WorldContextObject); // Function Wind.WindFunctions.SetDefaultWindBlowingNorth // Final|Native|Static|Public|BlueprintCallable // @ game+0x36a9bc0
	struct FVector GetWindAtLocation(struct UObject* WorldContextObject, struct FVector WorldPosition); // Function Wind.WindFunctions.GetWindAtLocation // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x36a9600
};

// Class Wind.WindService
// Size: 0x500 (Inherited: 0x3c8)
struct AWindService : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	struct AWindDirectionalSource* GlobalWindSource; // 0x3d8(0x08)
	char UnknownData_3E0[0x10]; // 0x3e0(0x10)
	float CurrentWindAngle; // 0x3f0(0x04)
	float CurrentWindMagnitude; // 0x3f4(0x04)
	char UnknownData_3F8[0xe8]; // 0x3f8(0xe8)
	struct TArray<TScriptInterface<struct UWindZoneInterface>> WindZones; // 0x4e0(0x10)
	struct TArray<struct FExtraWind> ExtraWind; // 0x4f0(0x10)

	void OnRep_WindMagnitude(); // Function Wind.WindService.OnRep_WindMagnitude // Final|Native|Private // @ game+0x36a9a70
	void OnRep_WindAngle(); // Function Wind.WindService.OnRep_WindAngle // Final|Native|Private // @ game+0x36a9a50
	struct FWindServiceParams GetWindParams(); // Function Wind.WindService.GetWindParams // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x36a9830
};

// Class Wind.DebugWindService
// Size: 0x510 (Inherited: 0x500)
struct ADebugWindService : AWindService {
	char UnknownData_500[0x10]; // 0x500(0x10)
};

// Class Wind.WindServiceParamsFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UWindServiceParamsFunctionLibrary : UBlueprintFunctionLibrary {

	bool AreWindServiceParamsEqual(struct FWindServiceParams Params1, struct FWindServiceParams Params2); // Function Wind.WindServiceParamsFunctionLibrary.AreWindServiceParamsEqual // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x36a9220
};

// Class Wind.WindZoneComponent
// Size: 0x370 (Inherited: 0x2e0)
struct UWindZoneComponent : USceneComponent {
	char UnknownData_2E0[0x8]; // 0x2e0(0x08)
	struct FWindTurbulenceParameters TurbulenceParams; // 0x2e8(0x70)
	struct FWindZoneParams WindZoneParams; // 0x358(0x10)
	char UnknownData_368[0x8]; // 0x368(0x08)
};

// Class Wind.TestWindZoneComponent
// Size: 0x370 (Inherited: 0x370)
struct UTestWindZoneComponent : UWindZoneComponent {
};

