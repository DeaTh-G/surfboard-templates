typedef struct (string name){
    local string Name = name;

    SRS_COLOR Color;
    ubyte field_04;
    ubyte field_05;
    ubyte field_06;
    ubyte field_07;
    ubyte field_08;
    ubyte field_09;
    ubyte field_0A;
    ubyte field_0B;
    SRS_VECTOR2 Translation;
    if (VERSION >= 4)
    {
        SRS_VECTOR3 vector_20;
    }
    else
    {
        SRS_VECTOR2 Scale;
        uint RotationZ; 
    }
} SRS_CELL2D<optimize=false, read=Name>;