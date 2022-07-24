typedef struct {
    local uint64 p<hidden=true>;
    
    uint Flags;
    SRS_VECTOR2 Size;
    SRS_VECTOR2 PivotPoint;
    SRS_COLOR VertexColorTopLeft;
    SRS_COLOR VertexColorBottomLeft;
    SRS_COLOR VertexColorTopRight;
    SRS_COLOR VertexColorBottomRight;
    float HorizontalFixedSize;
    float VerticalFixedSize;
    short SliceHorizontalCount;
    short SliceVerticalCount;
    short HorizontalFixedCount;
    short VerticalFixedCount;
    short CropRef0Count;
    short CropRef1Count;
    size_t CropRef0Offset;
    size_t CropRef1Offset;
    size_t EffectOffset;
    SRS_SLICE Slices[SliceHorizontalCount * SliceVerticalCount];
    
    p = FTell();
    if (CropRef0Offset.offset && CropRef0Count)
    {
        FSeek(CropRef0Offset.offset); SRS_CROPREF CropRef0s[CropRef0Count];
    } 
    if (CropRef1Offset.offset && CropRef1Count)
    {
        FSeek(CropRef1Offset.offset); SRS_CROPREF CropRef1s[CropRef1Count];
    } FSeek(p);
} SRS_SLICECAST<optimize=false>;