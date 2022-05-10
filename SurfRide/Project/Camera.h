typedef struct{
    size_t NameOffset;
    StringPtr Name(NameOffset.offset);
    uint ID;
    SRS_VECTOR3 Position;
    SRS_VECTOR3 LookAt;
    uint Flags;
    float Near;
    float Far;
    size_t field_2C;
    size_t field_30;
} SRS_CAMERA<optimize=false, read=Name.Name>;