typedef struct {
	uint64 NameOffset;
	StringPtr Name(NameOffset);
	uint ID;
    SRS_VECTOR3 Position;
    SRS_VECTOR3 LookAt;
    uint Flags;
    float RangeIn;
    float RangeOut;
    uint64 field_2C;
    uint64 field_30;
} SRS_CAMERA<optimize=false, read=Name.Name>;