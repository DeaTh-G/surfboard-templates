enum <char> SRE_INTERPOLATION_TYPE
{
    Constant,
    Linear,
    Hermite,
    Individual
};

typedef struct (uint flags) {
    local SRE_INTERPOLATION_TYPE Interpolation = flags & 3;

    int Frame;

    switch (flags & 0xF0)
    {
        case 0x10:
            float Value;
            break;
        case 0x20:
            int Value;
            break;
        case 0x30:
            char Value;
            break;
        case 0x40:
            int Value;
            break;
        case 0x50:
            SRS_COLOR Value;
            break;
        case 0x60:
            uint Value;
            break;
        case 0x70:
            double Value;
            break;
        case 0x80:
            char Value;
            break;
    }
    
    if (Interpolation >= Hermite)
    {
        float InParam;
        float OutParam;
    }

    if (Interpolation == Individual)
        int field_10;
} SRS_KEYFRAME<optimize=false, read=Str(EnumToString(Interpolation))>;