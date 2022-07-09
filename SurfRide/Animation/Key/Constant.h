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
        case 0x30:
            char KeyValue[4]<optimize=false>;
            break;
        case 0x50:
            SRS_COLOR KeyValue;
            break;
        case 0x60:
            uint KeyValue;
            break;
        case 0x70:
            double KeyValue;
            break;
        case 0x80:
            char KeyValue[4]<optimize=false>;
            break;
    }
} SRS_KEYCONSTANT<optimize=false>;