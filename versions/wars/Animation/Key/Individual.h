typedef struct (uint Flags){
    uint Keyframe;
	
    switch (Flags & 0xF0)
    {
        case 0x10:
            float Value;
            float field_08;
            float field_0C;
            int field_10;
            break;
        case 0x20:
            int Value;
            int field_08;
            int field_0C;
            int field_10;
            break;
        case 0x40:
            int Value;
            float field_08;
            float field_0C;
            int field_10;
            break;
        case 0x60:
            uint Value;
            break;
        case 0x70:
            double Value;
            break;
    }
} SRS_KEYINDIVIDUAL<optimize=false>;