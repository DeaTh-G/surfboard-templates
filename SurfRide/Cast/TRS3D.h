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
    SRS_VECTOR3 Translation;
    if (VERSION >= 4)
    {
        SRS_VECTOR3 field_20;
        SRS_VECTOR3 Scale;
    }
    else
    {
        float field_18;
        float field_1C;
        uint Rotation; 
        SRS_VECTOR3 Scale;
    }
} SRS_TRS3D<optimize=false, read=Name>;