// BlueprintGeneratedClass BP_GuildMastPlaque.BP_GuildMastPlaque_C
// Size: 0x588 (Inherited: 0x418)
struct ABP_GuildMastPlaque_C : AGuildPlaque {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct FSlateFontInfo Font; // 0x420(0x40)
	struct UMaterialInstanceDynamic* GuildPlaque_MID; // 0x460(0x08)
	struct UMaterial* Bevel_Material; // 0x468(0x08)
	struct UMaterialInstanceDynamic* bevelMat_MID; // 0x470(0x08)
	int32_t TextCanvasWidth; // 0x478(0x04)
	int32_t TextCanvasHeight; // 0x47c(0x04)
	struct UCanvasWorldMapComponent* Canvas; // 0x480(0x08)
	struct TArray<struct FString> guildRank; // 0x488(0x10)
	float bevelIntensity; // 0x498(0x04)
	struct FFeatureFlag FeatureToggle; // 0x49c(0x0c)
	struct UTexture2D* BronzeMRMap; // 0x4a8(0x08)
	struct UTexture2D* SilverMRMap; // 0x4b0(0x08)
	struct UTexture2D* GoldMRMap; // 0x4b8(0x08)
	struct UTexture2D* BronzeNormalMap; // 0x4c0(0x08)
	struct UTexture2D* SilverNormalMap; // 0x4c8(0x08)
	struct UTexture2D* GoldNormalMap; // 0x4d0(0x08)
	struct UMaterialInstanceDynamic* TextBevel_MID; // 0x4d8(0x08)
	struct UMaterialInstanceDynamic* IconBevel_MID; // 0x4e0(0x08)
	struct UMaterialInstanceDynamic* RankBevel_MID; // 0x4e8(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* RankRenderTarget; // 0x4f0(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* TextRenderTarget; // 0x4f8(0x08)
	int32_t RankTextWidth; // 0x500(0x04)
	int32_t RankTextHeight; // 0x504(0x04)
	struct UMaybeCompressedCanvasRenderTarget2D* BevelTextRenderTarget; // 0x508(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* IconRenderTarget; // 0x510(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* BevelRankRenderTarget; // 0x518(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* BevelIconRenderTarget; // 0x520(0x08)
	struct FLinearColor Gold Colour; // 0x528(0x10)
	struct FLinearColor Silver Colour; // 0x538(0x10)
	struct FLinearColor Bronze Colour; // 0x548(0x10)
	struct FLinearColor TextColour; // 0x558(0x10)
	bool IconColourFollowsMedallion; // 0x568(0x01)
	char UnknownData_569[0x7]; // 0x569(0x07)
	struct UTexture2D* DefaultDiffuseMap; // 0x570(0x08)
	struct UTexture2D* DefaultNormalMap; // 0x578(0x08)
	struct UTexture2D* DefaultMRMap; // 0x580(0x08)

	void ApplyRenderTargetOutputsToMIDs(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ApplyRenderTargetOutputsToMIDs // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void UpdateBevelIcon(struct UCanvas* Canvas); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateBevelIcon // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void UpdateBevelRank(struct UCanvas* Canvas); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateBevelRank // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void UpdateBevelText(struct UCanvas* Canvas); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateBevelText // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void UpdateIcon(struct UCanvas* Canvas); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateIcon // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void UpdateRank(struct UCanvas* Canvas); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateRank // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void GetTextScale(struct FVector2D FontSizeInScreenSpace, float AdjustedFontScalar); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.GetTextScale // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x188c2f0
	void UpdateBevelMaterials(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateBevelMaterials // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void UpdateText(struct UCanvas* Canvas); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UpdateText // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ApplyRenderTargetToMIDs(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ApplyRenderTargetToMIDs // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void GetMedallionColour(float Gold Threshold, float Silver Threshold, int32_t Rank Index, struct FLinearColor Medallion Colour); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.GetMedallionColour // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x188c2f0
	void AssignMedallionColour(struct FLinearColor Medallion Colour); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.AssignMedallionColour // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void Create_MIDs(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.Create_MIDs // Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void UserConstructionScript(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ReceiveBeginPlay(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void OnCanvasUpdate_Text(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Text // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void RefreshGuildPlaqueRender(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.RefreshGuildPlaqueRender // Event|Public|BlueprintEvent // @ game+0x188c2f0
	void OnCanvasUpdate_Rank(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Rank // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void OnCanvasUpdate_Icon(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Icon // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void OnCanvasUpdate_Text_Bevel(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Text_Bevel // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void OnCanvasUpdate_Rank_Bevel(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Rank_Bevel // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void OnCanvasUpdate_Icon_Bevel(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Icon_Bevel // BlueprintCallable|BlueprintEvent // @ game+0x188c2f0
	void ExecuteUbergraph_BP_GuildMastPlaque(int32_t EntryPoint); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ExecuteUbergraph_BP_GuildMastPlaque //  // @ game+0x188c2f0
};

