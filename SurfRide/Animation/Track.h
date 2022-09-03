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
    Display,
    Width,
    Height,
    VertexColorTopLeft,
    VertexColorTopRight,
    VertexColorBottomLeft,
    VertexColorBottomRight,
    CropIndex0,
    CropIndex1,
    Unknown1,
    IlluminationColor = 20,
    MaterialColorR,
    MaterialColorG,
    MaterialColorB,
    MaterialColorA,
    VertexColorTopLeftR,
    VertexColorTopLeftG,
    VertexColorTopLeftB,
    VertexColorTopLeftA,
    VertexColorTopRightR,
    VertexColorTopRightG,
    VertexColorTopRightB,
    VertexColorTopRightA,
    VertexColorBottomLeftR,
    VertexColorBottomLeftG,
    VertexColorBottomLeftB,
    VertexColorBottomLeftA,
    VertexColorBottomRightR,
    VertexColorBottomRightG,
    VertexColorBottomRightB,
    VertexColorBottomRightA,
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