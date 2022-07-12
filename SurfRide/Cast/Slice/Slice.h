typedef struct {
    uint Flags;
    float FixedWidth;
    float FixedHeight;
    SRS_COLOR MaterialColor;
    SRS_COLOR IlluminationColor;
    SRS_COLOR VertexColorTopLeft;
    SRS_COLOR VertexColorBottomLeft;
    SRS_COLOR VertexColorTopRight;
    SRS_COLOR VertexColorBottomRight;
    short CropIndex0;
    short CropIndex1;
} SRS_SLICE<optimize=false, read=Str("[%d, %d]", FixedWidth, FixedHeight)>;