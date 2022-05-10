enum <ushort> SRS_ANIMATION_TYPE
{
    XPosition,
    YPosition,
    ZPosition,
    XRotation,
    YRotation,
    ZRotation,
    XScale,
    YScale,
    ZScale,
    MaterialColor,
    Unknown1,
    Unknown2, // SurfRide::DirtyFlag::SetCellVertices
    Unknown3, // SurfRide::DirtyFlag::SetCellVertices
    Unknown4, // SurfRide::DirtyFlag::SetCellVertexColor
    Unknown5, // SurfRide::DirtyFlag::SetCellVertexColor
    Unknown6, // SurfRide::DirtyFlag::SetCellVertexColor
    Unknown7, // SurfRide::DirtyFlag::SetCellVertexColor
    Unknown8, // SurfRide::DirtyFlag::SetCellCropUV
    Unknown9, // SurfRide::DirtyFlag::SetCellCropUV
    IlluminationColor = 20,
    MaterialColorRed,
    MaterialColorGreen,
    MaterialColorBlue,
    MaterialColorAlpha,
    VertexColorRedClear,
    VertexColorGreenClear,
    VertexColorBlueClear,
    VertexColorAlphaClear,
    VertexColorRedClampHigh,
    VertexColorGreenClampHigh,
    VertexColorBlueClampHigh,
    VertexColorAlphaClampHigh,
    VertexColorRed,
    VertexColorGreen,
    VertexColorBlue,
    VertexColorAlpha,
    VertexColorRedClampLow,
    VertexColorGreenClampLow,
    VertexColorBlueClampLow,
    VertexColorAlphaClampLow,
    IlluminationColorRed,
    IlluminationColorGreen,
    IlluminationColorBlue,
    IlluminationColorAlpha,
};

typedef struct {
    local uint64 p<hidden=true>;

    SRS_ANIMATION_TYPE AnimationType;
    ushort KeyCount;
    uint Flags;
    uint StartFrame;
    uint EndFrame;
    size_t KeyOffset;

    p = FTell();
    if (KeyCount && KeyOffset.offset)
    {
        FSeek(KeyOffset.offset);
        switch (Flags & 3)
        {
            case 0:
                SRS_KEYCONSTANT Keys(Flags)[KeyCount];
                break;
            case 1: 
                SRS_KEYLINEAR Keys(Flags)[KeyCount];
                break;
            case 2: 
                SRS_KEYHERMITE Keys(Flags)[KeyCount];
                break;
            case 3: 
                SRS_KEYINDIVIDUAL Keys(Flags)[KeyCount];
                break;
            default:
                break;
        }
    } FSeek(p);
} SRS_TRACK<optimize=false>;