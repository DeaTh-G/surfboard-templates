typedef struct (uint Flags){
    uint KeyFrame;
    switch (Flags & 0xF0)
    {
        case 0x10:
            float KeyValue;
            break;
        case 0x20:
            int KeyValue;
            break;
        case 0x40:
            int KeyValue;
            break;
        case 0x60:
            uint KeyValue;
            break;
        case 0x70:
            double KeyValue;
            break;
    }
    float InParam;
    float OutParam;
    int Interpolation;
} SRS_KEYINDIVIDUAL<optimize=false>;