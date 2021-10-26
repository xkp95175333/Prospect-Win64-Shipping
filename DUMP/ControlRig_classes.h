// Class ControlRig.ControlRig
// Size: 0x650 (Inherited: 0x28)
struct UControlRig : UObject {
	char pad_28[0x1d]; // 0x28(0x1d)
	enum class ERigExecutionType ExecutionType; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	struct URigVM* VM; // 0x48(0x08)
	struct FRigHierarchyContainer Hierarchy; // 0x50(0x368)
	struct TSoftObjectPtr<struct UControlRigGizmoLibrary> GizmoLibrary; // 0x3b8(0x28)
	char pad_3E0[0x10]; // 0x3e0(0x10)
	struct TMap<struct FName, struct FCachedPropertyPath> InputProperties; // 0x3f0(0x50)
	struct TMap<struct FName, struct FCachedPropertyPath> OutputProperties; // 0x440(0x50)
	struct FControlRigDrawContainer DrawContainer; // 0x490(0x18)
	char pad_4A8[0x18]; // 0x4a8(0x18)
	struct UAnimationDataSourceRegistry* DataSourceRegistry; // 0x4c0(0x08)
	struct TArray<struct FName> EventQueue; // 0x4c8(0x10)
	char pad_4D8[0x78]; // 0x4d8(0x78)
	struct FRigInfluenceMapPerEvent Influences; // 0x550(0x60)
	struct UControlRig* InteractionRig; // 0x5b0(0x08)
	struct UControlRig* InteractionRigClass; // 0x5b8(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x5c0(0x10)
	char pad_5D0[0x80]; // 0x5d0(0x80)

	void SetInteractionRigClass(struct UControlRig* InInteractionRigClass); // Function ControlRig.ControlRig.SetInteractionRigClass // (Final|Native|Public|BlueprintCallable) // @ game+0x118cd00
	void SetInteractionRig(struct UControlRig* InInteractionRig); // Function ControlRig.ControlRig.SetInteractionRig // (Final|Native|Public|BlueprintCallable) // @ game+0x118cc70
	struct UControlRig* GetInteractionRigClass(); // Function ControlRig.ControlRig.GetInteractionRigClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118b8c0
	struct UControlRig* GetInteractionRig(); // Function ControlRig.ControlRig.GetInteractionRig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118b8a0
};

// Class ControlRig.AdditiveControlRig
// Size: 0x660 (Inherited: 0x650)
struct UAdditiveControlRig : UControlRig {
	char pad_650[0x10]; // 0x650(0x10)
};

// Class ControlRig.ControlRigAnimInstance
// Size: 0x2c0 (Inherited: 0x2c0)
struct UControlRigAnimInstance : UAnimInstance {
};

// Class ControlRig.ControlRigBlueprintGeneratedClass
// Size: 0x328 (Inherited: 0x328)
struct UControlRigBlueprintGeneratedClass : UBlueprintGeneratedClass {
};

// Class ControlRig.ControlRigComponent
// Size: 0x540 (Inherited: 0x440)
struct UControlRigComponent : UPrimitiveComponent {
	struct UControlRig* ControlRigClass; // 0x440(0x08)
	struct FMulticastInlineDelegate OnPostInitializeDelegate; // 0x448(0x10)
	struct FMulticastInlineDelegate OnPreSetupDelegate; // 0x458(0x10)
	struct FMulticastInlineDelegate OnPostSetupDelegate; // 0x468(0x10)
	struct FMulticastInlineDelegate OnPreUpdateDelegate; // 0x478(0x10)
	struct FMulticastInlineDelegate OnPostUpdateDelegate; // 0x488(0x10)
	struct TArray<struct FControlRigComponentMappedElement> MappedElements; // 0x498(0x10)
	bool bResetTransformBeforeTick; // 0x4a8(0x01)
	bool bResetInitialsBeforeSetup; // 0x4a9(0x01)
	bool bUpdateRigOnTick; // 0x4aa(0x01)
	bool bUpdateInEditor; // 0x4ab(0x01)
	bool bDrawBones; // 0x4ac(0x01)
	char pad_4AD[0x3]; // 0x4ad(0x03)
	struct UControlRig* ControlRig; // 0x4b0(0x08)
	char pad_4B8[0x88]; // 0x4b8(0x88)

	void Update(float DeltaTime); // Function ControlRig.ControlRigComponent.Update // (Final|Native|Public|BlueprintCallable) // @ game+0x118ce80
	void SetMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements); // Function ControlRig.ControlRigComponent.SetMappedElements // (Final|Native|Public|BlueprintCallable) // @ game+0x118cd90
	void SetInitialSpaceTransform(struct FName SpaceName, struct FTransform InitialTransform, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetInitialSpaceTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x118cae0
	void SetInitialBoneTransform(struct FName BoneName, struct FTransform InitialTransform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren); // Function ControlRig.ControlRigComponent.SetInitialBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x118c930
	void SetControlVector2D(struct FName ControlName, struct FVector2D Value); // Function ControlRig.ControlRigComponent.SetControlVector2D // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x118c860
	void SetControlTransform(struct FName ControlName, struct FTransform Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x118c6d0
	void SetControlScale(struct FName ControlName, struct FVector Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x118c5b0
	void SetControlRotator(struct FName ControlName, struct FRotator Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlRotator // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x118c490
	void SetControlPosition(struct FName ControlName, struct FVector Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x118c370
	void SetControlOffset(struct FName ControlName, struct FTransform OffsetTransform, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x118c1e0
	void SetControlInt(struct FName ControlName, int32_t Value); // Function ControlRig.ControlRigComponent.SetControlInt // (Final|Native|Public|BlueprintCallable) // @ game+0x118c110
	void SetControlFloat(struct FName ControlName, float Value); // Function ControlRig.ControlRigComponent.SetControlFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x118c040
	void SetControlBool(struct FName ControlName, bool Value); // Function ControlRig.ControlRigComponent.SetControlBool // (Final|Native|Public|BlueprintCallable) // @ game+0x118bf70
	void SetBoneTransform(struct FName BoneName, struct FTransform Transform, enum class EControlRigComponentSpace Space, float weight, bool bPropagateToChildren); // Function ControlRig.ControlRigComponent.SetBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x118bd70
	void SetBoneInitialTransformsFromSkeletalMesh(struct USkeletalMesh* InSkeletalMesh); // Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x118bce0
	void OnPreUpdate(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreUpdate // (Native|Event|Public|BlueprintEvent) // @ game+0x118bc50
	void OnPreSetup(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreSetup // (Native|Event|Public|BlueprintEvent) // @ game+0x118bbc0
	void OnPostUpdate(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostUpdate // (Native|Event|Public|BlueprintEvent) // @ game+0x118bb30
	void OnPostSetup(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostSetup // (Native|Event|Public|BlueprintEvent) // @ game+0x118baa0
	void OnPostInitialize(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostInitialize // (Native|Event|Public|BlueprintEvent) // @ game+0x118ba10
	void Initialize(); // Function ControlRig.ControlRigComponent.Initialize // (Final|Native|Public|BlueprintCallable) // @ game+0x118b9f0
	struct FTransform GetSpaceTransform(struct FName SpaceName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetSpaceTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x118b8e0
	struct FTransform GetInitialSpaceTransform(struct FName SpaceName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetInitialSpaceTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x118b790
	struct FTransform GetInitialBoneTransform(struct FName BoneName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetInitialBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x118b680
	struct TArray<struct FName> GetElementNames(enum class ERigElementType ElementType); // Function ControlRig.ControlRigComponent.GetElementNames // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x118b5a0
	struct FVector2D GetControlVector2D(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlVector2D // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x118b510
	struct FTransform GetControlTransform(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x118b400
	struct FVector GetControlScale(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlScale // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x118b320
	struct FRotator GetControlRotator(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlRotator // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x118b240
	struct UControlRig* GetControlRig(); // Function ControlRig.ControlRigComponent.GetControlRig // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x118b210
	struct FVector GetControlPosition(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x118b130
	struct FTransform GetControlOffset(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x118b020
	int32_t GetControlInt(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlInt // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x118af80
	float GetControlFloat(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlFloat // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x118aee0
	bool GetControlBool(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlBool // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x118ae40
	struct FTransform GetBoneTransform(struct FName BoneName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x118ad30
	float GetAbsoluteTime(); // Function ControlRig.ControlRigComponent.GetAbsoluteTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118ad00
	bool DoesElementExist(struct FName Name, enum class ERigElementType ElementType); // Function ControlRig.ControlRigComponent.DoesElementExist // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x118ac30
	void ClearMappedElements(); // Function ControlRig.ControlRigComponent.ClearMappedElements // (Final|Native|Public|BlueprintCallable) // @ game+0x118ac10
	void AddMappedSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent, struct TArray<struct FControlRigComponentMappedBone> Bones, struct TArray<struct FControlRigComponentMappedCurve> Curves); // Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x118aa60
	void AddMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements); // Function ControlRig.ControlRigComponent.AddMappedElements // (Final|Native|Public|BlueprintCallable) // @ game+0x118a970
	void AddMappedComponents(struct TArray<struct FControlRigComponentMappedComponent> Components); // Function ControlRig.ControlRigComponent.AddMappedComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x118a880
	void AddMappedCompleteSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent); // Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x118a7f0
};

// Class ControlRig.ControlRigControlActor
// Size: 0x2d0 (Inherited: 0x240)
struct AControlRigControlActor : AActor {
	struct AActor* ActorToTrack; // 0x240(0x08)
	struct UControlRig* ControlRigClass; // 0x248(0x08)
	bool bRefreshOnTick; // 0x250(0x01)
	bool bIsSelectable; // 0x251(0x01)
	char pad_252[0x6]; // 0x252(0x06)
	struct UMaterialInterface* MaterialOverride; // 0x258(0x08)
	struct FString ColorParameter; // 0x260(0x10)
	bool bCastShadows; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct USceneComponent* ActorRootComponent; // 0x278(0x08)
	struct UControlRig* ControlRig; // 0x280(0x08)
	struct TArray<struct FName> ControlNames; // 0x288(0x10)
	struct TArray<struct FTransform> GizmoTransforms; // 0x298(0x10)
	struct TArray<struct UStaticMeshComponent*> Components; // 0x2a8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Materials; // 0x2b8(0x10)
	struct FName ColorParameterName; // 0x2c8(0x08)

	void Refresh(); // Function ControlRig.ControlRigControlActor.Refresh // (Final|Native|Public|BlueprintCallable) // @ game+0x1192720
	void Clear(); // Function ControlRig.ControlRigControlActor.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x1192610
};

// Class ControlRig.ControlRigGizmoActor
// Size: 0x268 (Inherited: 0x240)
struct AControlRigGizmoActor : AActor {
	struct USceneComponent* ActorRootComponent; // 0x240(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x248(0x08)
	uint32_t ControlRigIndex; // 0x250(0x04)
	struct FName ControlName; // 0x254(0x08)
	struct FName ColorParameterName; // 0x25c(0x08)
	char bEnabled : 1; // 0x264(0x01)
	char bSelected : 1; // 0x264(0x01)
	char bSelectable : 1; // 0x264(0x01)
	char bHovered : 1; // 0x264(0x01)
	char pad_264_4 : 4; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)

	void SetSelected(bool bInSelected); // Function ControlRig.ControlRigGizmoActor.SetSelected // (Native|Public|BlueprintCallable) // @ game+0x11929d0
	void SetSelectable(bool bInSelectable); // Function ControlRig.ControlRigGizmoActor.SetSelectable // (Native|Public|BlueprintCallable) // @ game+0x1192940
	void SetHovered(bool bInHovered); // Function ControlRig.ControlRigGizmoActor.SetHovered // (Native|Public|BlueprintCallable) // @ game+0x11928b0
	void SetGlobalTransform(struct FTransform InTransform); // Function ControlRig.ControlRigGizmoActor.SetGlobalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x11927d0
	void SetEnabled(bool bInEnabled); // Function ControlRig.ControlRigGizmoActor.SetEnabled // (Native|Public|BlueprintCallable) // @ game+0x1192740
	void OnTransformChanged(struct FTransform NewTransform); // Function ControlRig.ControlRigGizmoActor.OnTransformChanged // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x1e02480
	void OnSelectionChanged(bool bIsSelected); // Function ControlRig.ControlRigGizmoActor.OnSelectionChanged // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnManipulatingChanged(bool bIsManipulating); // Function ControlRig.ControlRigGizmoActor.OnManipulatingChanged // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnHoveredChanged(bool bIsSelected); // Function ControlRig.ControlRigGizmoActor.OnHoveredChanged // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	void OnEnabledChanged(bool bIsEnabled); // Function ControlRig.ControlRigGizmoActor.OnEnabledChanged // (Event|Public|BlueprintEvent) // @ game+0x1e02480
	bool IsSelectedInEditor(); // Function ControlRig.ControlRigGizmoActor.IsSelectedInEditor // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11926f0
	bool IsHovered(); // Function ControlRig.ControlRigGizmoActor.IsHovered // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11926c0
	bool IsEnabled(); // Function ControlRig.ControlRigGizmoActor.IsEnabled // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1192690
	struct FTransform GetGlobalTransform(); // Function ControlRig.ControlRigGizmoActor.GetGlobalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1192630
};

// Class ControlRig.ControlRigGizmoLibrary
// Size: 0xe0 (Inherited: 0x28)
struct UControlRigGizmoLibrary : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FControlRigGizmoDefinition DefaultGizmo; // 0x30(0x60)
	struct TSoftObjectPtr<struct UMaterial> DefaultMaterial; // 0x90(0x28)
	struct FName MaterialColorParameter; // 0xb8(0x08)
	struct TArray<struct FControlRigGizmoDefinition> Gizmos; // 0xc0(0x10)
	char pad_D0[0x10]; // 0xd0(0x10)
};

// Class ControlRig.ControlRigLayerInstance
// Size: 0x2c0 (Inherited: 0x2c0)
struct UControlRigLayerInstance : UAnimInstance {
};

// Class ControlRig.ControlRigValidationPass
// Size: 0x28 (Inherited: 0x28)
struct UControlRigValidationPass : UObject {
};

// Class ControlRig.ControlRigNumericalValidationPass
// Size: 0x60 (Inherited: 0x28)
struct UControlRigNumericalValidationPass : UControlRigValidationPass {
	bool bCheckControls; // 0x28(0x01)
	bool bCheckBones; // 0x29(0x01)
	bool bCheckCurves; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	float TranslationPrecision; // 0x2c(0x04)
	float RotationPrecision; // 0x30(0x04)
	float ScalePrecision; // 0x34(0x04)
	float CurvePrecision; // 0x38(0x04)
	struct FName EventNameA; // 0x3c(0x08)
	struct FName EventNameB; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FRigPose pose; // 0x50(0x10)
};

// Class ControlRig.ControlRigObjectHolder
// Size: 0x38 (Inherited: 0x28)
struct UControlRigObjectHolder : UObject {
	struct TArray<struct UObject*> Objects; // 0x28(0x10)
};

// Class ControlRig.ControlRigSequence
// Size: 0x220 (Inherited: 0x1c8)
struct UControlRigSequence : ULevelSequence {
	struct TSoftObjectPtr<struct UAnimSequence> LastExportedToAnimationSequence; // 0x1c8(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> LastExportedUsingSkeletalMesh; // 0x1f0(0x28)
	float LastExportedFrameRate; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
};

// Class ControlRig.ControlRigSequencerAnimInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct UControlRigSequencerAnimInstance : UAnimSequencerInstance {
	char pad_2C0[0x10]; // 0x2c0(0x10)
};

// Class ControlRig.ControlRigSettings
// Size: 0x38 (Inherited: 0x38)
struct UControlRigSettings : UDeveloperSettings {
};

// Class ControlRig.ControlRigValidator
// Size: 0x68 (Inherited: 0x28)
struct UControlRigValidator : UObject {
	struct TArray<struct UControlRigValidationPass*> Passes; // 0x28(0x10)
	char pad_38[0x30]; // 0x38(0x30)
};

// Class ControlRig.FKControlRig
// Size: 0x668 (Inherited: 0x650)
struct UFKControlRig : UControlRig {
	struct TArray<bool> IsControlActive; // 0x650(0x10)
	enum class EControlRigFKRigExecuteMode ApplyMode; // 0x660(0x01)
	char pad_661[0x7]; // 0x661(0x07)
};

// Class ControlRig.MovieSceneControlRigParameterSection
// Size: 0x2f0 (Inherited: 0x148)
struct UMovieSceneControlRigParameterSection : UMovieSceneParameterSection {
	struct UControlRig* ControlRig; // 0x148(0x08)
	struct TArray<bool> ControlsMask; // 0x150(0x10)
	struct FMovieSceneTransformMask TransformMask; // 0x160(0x04)
	bool bAdditive; // 0x164(0x01)
	bool bApplyBoneFilter; // 0x165(0x01)
	char pad_166[0x2]; // 0x166(0x02)
	struct FInputBlendPose BoneFilter; // 0x168(0x10)
	struct FMovieSceneFloatChannel weight; // 0x178(0xa0)
	struct TMap<struct FName, struct FChannelMapInfo> ControlChannelMap; // 0x218(0x50)
	struct TArray<struct FEnumParameterNameAndCurve> EnumParameterNamesAndCurves; // 0x268(0x10)
	struct TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves; // 0x278(0x10)
	char pad_288[0x68]; // 0x288(0x68)
};

// Class ControlRig.MovieSceneControlRigParameterTrack
// Size: 0xb0 (Inherited: 0x78)
struct UMovieSceneControlRigParameterTrack : UMovieSceneNameableTrack {
	char pad_78[0x10]; // 0x78(0x10)
	struct UControlRig* ControlRig; // 0x88(0x08)
	struct UMovieSceneSection* SectionToKey; // 0x90(0x08)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x98(0x10)
	struct FName TrackName; // 0xa8(0x08)
};

