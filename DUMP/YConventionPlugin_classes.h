// Class YConventionPlugin.YTCCodeConventionActor
// Size: 0x4f0 (Inherited: 0x4e0)
struct AYTCCodeConventionActor : ACharacter {
	struct USkeletalMeshComponent* AdditionalMesh; // 0x4e0(0x08)
	char pad_4E8[0x8]; // 0x4e8(0x08)
};

// Class YConventionPlugin.YTCCodeConventionComponent
// Size: 0x220 (Inherited: 0x200)
struct UYTCCodeConventionComponent : USceneComponent {
	struct UYTCCodeConventionComponent* MyInstance; // 0x1f8(0x08)
	struct FYCodeConventionBlueprintVarGroup BlueprintGroup; // 0x200(0x0c)
	char pad_214[0xc]; // 0x214(0x0c)
};

// Class YConventionPlugin.YTCCodeConventionFunctions
// Size: 0x28 (Inherited: 0x28)
struct UYTCCodeConventionFunctions : UObject {
};

