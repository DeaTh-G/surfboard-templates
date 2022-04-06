typedef struct {
    float Left;
    float Top;
    float Right;
    float Bottom;
} SRS_SUBIMAGE<optimize=false, bgcolor=0xFFFF00,
    read=Str("[%f, %f, %f, %f]", Left, Top, Right, Bottom)>;