enum <ushort> SRE_CURVE_TYPE
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

    SRE_CURVE_TYPE TrackType;
    short KeyCount;
    uint Flags;
    uint FirstFrame;
    uint LastFrame;
    size_t KeyOffset;

    p = FTell();
    if (KeyCount && KeyOffset.offset)
    {
        FSeek(KeyOffset.offset);
        SRS_KEYFRAME KeyFrames(Flags)[KeyCount];
    } FSeek(p);
} SRS_TRACK<optimize=false, read=Str(EnumToString(TrackType))>;