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
    SRS_VECTOR3 Position;
    if (VERSION >= 4)
        SRS_VECTOR3 vector_18;
    float field_18;
    float field_1C;
    uint Rotation; 
    if (VERSION >= 4)
        uint field_30;
} SRS_CELL<optimize=false, read=Name>;