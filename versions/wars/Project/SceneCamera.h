typedef struct {
	uint64 NameOffset;
	StringPtr Name(NameOffset);
	uint ID;
    SRS_VECTOR3 Position;
    SRS_VECTOR3 LookAt;
    uint field_24;
    float field_28;
    float field_2C;
    uint field_30;
    uint Flags;
    float RangeIn;
    float RangeOut;
    uint64 field_40;
} SRS_SCENE_CAMERA<optimize=false, read=Name.Name>;