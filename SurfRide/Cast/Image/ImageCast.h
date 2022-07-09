typedef struct {
    local uint64 p<hidden=true>;

    uint Flags;
    float Width;
    float Height;
    SRS_VECTOR2 PivotPoint;
    SRS_COLOR GradientTopLeft;
    SRS_COLOR GradientBottomLeft;
    SRS_COLOR GradientTopRight;
    SRS_COLOR GradientBottomRight;
    short CropIndex0;
    short CropIndex1;
    ushort CropRef0Count;
    ushort CropRef1Count;
    size_t CropRef0Offset;
    size_t CropRef1Offset;
    size_t FontInfoOffset;
    size_t field_3C;
    size_t field_40; p = FTell();
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
        FSeek(FontInfoOffset.offset); SRS_FONT_INFO FontInfo;
    } FSeek(p);
} SRS_IMAGE_CAST<optimize=false>;