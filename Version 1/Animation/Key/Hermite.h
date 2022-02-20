typedef struct (uint Flags){
    uint Keyframe;
    
    switch (Flags & 0xF0)
    {
        case 0x10:
            float Value;
            float TangentIn;
            float TangentOut;
            break;
        case 0x40:
            int Value;
            float TangentIn;
            float TangentOut;
            break;
        case 0x60:
            uint Value;
            break;
        case 0x70:
            double Value;
            break;
    }
} SRS_KEYHERMITE<optimize=false>;