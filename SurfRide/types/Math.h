typedef struct {
    float X;
    float Y;
} SRS_VECTOR2<optimize=false,
    read=Str("[%1.2f, %1.2f]", X, Y)>;

typedef struct {
    if (VERSION >= 4)
    {
        if (FTell() % 16 != 0)
            FSkip(16 - (FTell() % 16));
    }
    else
    {
        if (FTell() % 4 != 0)
            FSkip(4 - (FTell() % 4));
    }
    float X;
    float Y;
    float Z;
    if (VERSION >= 4)
        float W;
} SRS_VECTOR3<optimize=false,
    read=Str("[%1.2f, %1.2f, %1.2f]", X, Y, Z)>;
