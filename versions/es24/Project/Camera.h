typedef struct {
	uint64 NameOffset;
	StringPtr Name(NameOffset);
	uint ID;
    SRS_VECTOR3 Position;
    SRS_VECTOR3 LookAt;
    uint Flags;
    float RangeIn;
    float RangeOut;
    uint field_48;
    uint field_4C;
    uint field_50;
    uint field_54;
} SRS_CAMERA<optimize=false, read=Name.Name>;