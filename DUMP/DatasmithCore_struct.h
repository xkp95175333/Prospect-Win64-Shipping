// Enum DatasmithCore.EDatasmithPropertyCategory
enum class EDatasmithPropertyCategory : uint8 {
	Undefined,
	Generic,
	RelativeLocation,
	RelativeRotation,
	RelativeScale3D,
	Visibility,
	Material,
	Color,
	Option,
	EDatasmithPropertyCategory_MAX,
};

// Enum DatasmithCore.EDatasmithCompletionMode
enum class EDatasmithCompletionMode : uint8 {
	KeepState,
	RestoreState,
	ProjectDefault,
	EDatasmithCompletionMode_MAX,
};

// Enum DatasmithCore.EDatasmithActorAttachmentRule
enum class EDatasmithActorAttachmentRule : uint8 {
	KeepRelativeTransform,
	KeepWorldTransform,
	EDatasmithActorAttachmentRule_MAX,
};

// Enum DatasmithCore.EDatasmithActorRemovalRule
enum class EDatasmithActorRemovalRule : uint8 {
	RemoveChildren,
	KeepChildrenAndKeepRelativeTransform,
	EDatasmithActorRemovalRule_MAX,
};

// Enum DatasmithCore.EDatasmithKeyValuePropertyType
enum class EDatasmithKeyValuePropertyType : uint8 {
	String,
	Color,
	Float,
	Bool,
	Texture,
	Vector,
	Integer,
	EDatasmithKeyValuePropertyType_MAX,
};

// Enum DatasmithCore.EDatasmithColorSpace
enum class EDatasmithColorSpace : uint8 {
	Default,
	sRGB,
	Linear,
	EDatasmithColorSpace_MAX,
};

// Enum DatasmithCore.EDatasmithTextureFormat
enum class EDatasmithTextureFormat : uint8 {
	PNG,
	JPEG,
	EDatasmithTextureFormat_MAX,
};

// Enum DatasmithCore.EDatasmithTextureAddress
enum class EDatasmithTextureAddress : uint8 {
	Wrap,
	Clamp,
	Mirror,
	EDatasmithTextureAddress_MAX,
};

// Enum DatasmithCore.EDatasmithTextureFilter
enum class EDatasmithTextureFilter : uint8 {
	Nearest,
	Bilinear,
	Trilinear,
	Default,
	EDatasmithTextureFilter_MAX,
};

// Enum DatasmithCore.EDatasmithTextureMode
enum class EDatasmithTextureMode : uint8 {
	Diffuse,
	Specular,
	Normal,
	NormalGreenInv,
	Displace,
	Other,
	Bump,
	Ies,
	EDatasmithTextureMode_MAX,
};

// Enum DatasmithCore.EDatasmithLightShape
enum class EDatasmithLightShape : uint8 {
	Rectangle,
	Disc,
	Sphere,
	Cylinder,
	None,
	EDatasmithLightShape_MAX,
};

// ScriptStruct DatasmithCore.DatasmithMeshSourceModel
// Size: 0x40 (Inherited: 0x00)
struct FDatasmithMeshSourceModel {
	char pad_0[0x40]; // 0x00(0x40)
};

