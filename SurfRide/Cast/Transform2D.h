typedef struct (string name){
    local string Name = name;

    SRS_TRS_BASE Base;
    SRS_VECTOR2 Translation;;
    uint RotationZ;
    SRS_VECTOR2 Scale;
} SRS_TRS2D<optimize=false, read=Name>;