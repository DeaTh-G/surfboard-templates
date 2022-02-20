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
    float field_0C;
    float field_10;
    uint Rotation;
    SRS_VECTOR3 Scale;
} SRS_CELL<optimize=false, read=Name>;