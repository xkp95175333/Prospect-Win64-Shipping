// Class DatasmithCore.DatasmithMesh
// Size: 0x50 (Inherited: 0x28)
struct UDatasmithMesh : UObject {
	struct FString MeshName; // 0x28(0x10)
	bool bIsCollisionMesh; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FDatasmithMeshSourceModel> SourceModels; // 0x40(0x10)
};

