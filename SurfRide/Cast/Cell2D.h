typedef struct (string name){
    local string Name = name;

    SRS_COLOR MaterialColor;
    SRS_COLOR IlluminationColor;
    ubyte field_08;
    ubyte field_09;
    ubyte field_0A;
    ubyte field_0B;
    SRS_VECTOR2 Translation;
    if (VERSION >= 4)
    {
        SRS_VECTOR3 field_20;
    }
    else
    {
        SRS_VECTOR2 Scale;
        uint RotationZ; 
    }
} SRS_CELL2D<optimize=false, read=Name>;