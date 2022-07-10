typedef struct {
    if (VERSION >= 1)
    {
        size_t NameOffset;
        StringPtr Name(NameOffset.offset);
        uint ID;
    }
    SRS_VECTOR3 Position;
    SRS_VECTOR3 Target;
    if (VERSION >= 4)
        int field_38;
    uint Flags;
    float NearPlane;
    float FarPlane;
    if (VERSION >= 1)
    {
        size_t field_2C;
        size_t offset_30;
    }
} SRS_CAMERA<optimize=false, read=Name.Name>;