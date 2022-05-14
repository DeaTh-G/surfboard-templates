typedef struct (uint parent) {
    if (VERSION >= 1)
    {
        size_t NameOffset;
        StringPtr Name(NameOffset.offset);
        uint ID;
    }
    if (VERSION >= 4)
    {
        if (parent == 0) // if parent is project
            SRS_VECTOR3 field_0C;
        
        if (parent == 1) // if parent is scene
            uint field_0C;
    }
    SRS_VECTOR3 Position;
    SRS_VECTOR3 LookAt;
    if (VERSION >= 4)
        SRS_VECTOR3 field_30;
    uint Flags;
    float Near;
    float Far;
    if (VERSION >= 1)
    {
        size_t field_2C;
        size_t offset_30;
    }
} SRS_CAMERA<optimize=false, read=Name.Name>;