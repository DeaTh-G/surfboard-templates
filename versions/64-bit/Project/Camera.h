typedef struct {
	uint64 NameOffset;
	StringPtr Name(NameOffset);
	uint ID;
    SRS_VECTOR3 Position;
    SRS_VECTOR3 LookAt;
    uint Flags;
    float Near;
    float Far;
    uint64 field_30;
    uint64 field_38;
} SRS_CAMERA<optimize=false, read=Name.Name>;