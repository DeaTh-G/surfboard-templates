typedef struct (uint Flags){
    uint Keyframe;
    switch (Flags & 0xF0)
    {
        case 0x10:
            float Value;
            break;
        case 0x20:
            int Value;
            break;
        case 0x40:
            int Value;
            break;
        case 0x60:
            uint Value;
            break;
        case 0x70:
            double Value;
            break;
    }
    float TangentIn;
    float TangentOut;
    int field_10;
} SRS_KEYINDIVIDUAL<optimize=false>;