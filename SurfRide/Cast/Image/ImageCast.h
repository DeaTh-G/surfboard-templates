typedef struct {
    local uint64 p<hidden=true>;

    uint Flags;
    SRS_VECTOR2 Size;
    SRS_VECTOR2 PivotPoint;
    SRS_COLOR VertexColorTopLeft;
    SRS_COLOR VertexColorBottomLeft;
    SRS_COLOR VertexColorTopRight;
    SRS_COLOR VertexColorBottomRight;
    short CropIndex0;
    short CropIndex1;
    short CropRef0Count;
    short CropRef1Count;
    size_t CropRef0Offset;
    size_t CropRef1Offset;
    size_t FontInfoOffset;
    size_t field_38;
    size_t EffectOffset; p = FTell();
    if (CropRef0Count && CropRef0Offset.offset)
    {
        FSeek(CropRef0Offset.offset); SRS_CROPREF CropRef0s[CropRef0Count];
    }
    if (CropRef1Count && CropRef1Offset.offset)
    {
        FSeek(CropRef1Offset.offset); SRS_CROPREF CropRef1s[CropRef1Count];
    }
    if (FontInfoOffset.offset)
    {
        FSeek(FontInfoOffset.offset); SRS_TEXTDATA TextData;
    } FSeek(p);
} SRS_IMAGECAST<optimize=false>;