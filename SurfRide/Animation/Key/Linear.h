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
        case 0x30:
            char Value[4]<optimize=false>;
            break;
        case 0x40:
            int Value;
            break;
        case 0x50:
            SRS_COLOR Value;
            break;
    }
} SRS_KEYLINEAR<optimize=false>;