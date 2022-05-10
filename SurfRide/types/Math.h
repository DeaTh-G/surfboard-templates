typedef struct {
    float X;
    float Y;
} SRS_VECTOR2<optimize=false,
    read=Str("[%1.2f, %1.2f]", X, Y)>;

typedef struct {
    float X;
    float Y;
    float Z;
} SRS_VECTOR3<optimize=false,
    read=Str("[%1.2f, %1.2f, %1.2f]", X, Y, Z)>;
