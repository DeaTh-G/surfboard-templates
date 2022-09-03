typedef struct (string name){
    local string Name = name;

    SRS_TRS_BASE Base;
    SRS_VECTOR3 Translation;
    uint RotationX;
    uint RotationY;
    uint RotationZ;
    SRS_VECTOR3 Scale;
} SRS_TRS3D<optimize=false, read=Name>;