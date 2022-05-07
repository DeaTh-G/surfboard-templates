typedef struct {
	uint NameOffset;
	StringPtr Name(NameOffset);
	uint ID;
    SRS_VECTOR3 Position;
    SRS_VECTOR3 LookAt;
    uint Flags;
    float Near;
    float Far;
    uint field_2C;
    uint field_30;
} SRS_CAMERA<optimize=false, read=Name.Name>;