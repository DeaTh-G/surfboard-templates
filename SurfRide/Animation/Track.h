enum <ushort> SRS_CURVE_TYPE
{
    Tx,
    Ty,
    Tz,
    Rx,
    Ry,
    Rz,
    Sx,
    Sy,
    Sz,
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
    MaterialColorR,
    MaterialColorG,
    MaterialColorB,
    MaterialColorA,
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
    IlluminationColorR,
    IlluminationColorG,
    IlluminationColorB,
    IlluminationColorA,
};

typedef struct {
    local uint64 p<hidden=true>;

    SRS_CURVE_TYPE TrackType;
    ushort KeyCount;
    uint Flags;
    uint FirstFrame;
    uint LastFrame;
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