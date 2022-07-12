typedef struct (string name){
    local string Name = name;

    SRS_COLOR MaterialColor;
    SRS_COLOR IlluminationColor;
    ubyte field_08;
    ubyte field_09;
    ubyte field_0A;
    ubyte field_0B;
    SRS_VECTOR3 Translation;
    SRS_INTVECTOR3 Rotation;
    SRS_VECTOR3 Scale;
} SRS_CELL3D<optimize=false, read=Name>;