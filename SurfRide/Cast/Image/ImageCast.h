typedef struct {
    local uint64 p<hidden=true>;

    uint Flags;
    float Width;
    float Height;
    SRS_VECTOR2 AnchorPoint;
    SRS_COLOR GradientTopLeft;
    SRS_COLOR GradientBottomLeft;
    SRS_COLOR GradientTopRight;
    SRS_COLOR GradientBottomRight;
    short field_24;
    short field_26;
    ushort PatternInfoCount;
    ushort count_2A;
    size_t PatternInfoOffset;
    size_t field_30;
    size_t FontInfoOffset;
    size_t field_38;
    size_t field_3C; p = FTell();
    if (PatternInfoCount && PatternInfoOffset.offset)
    {
        FSeek(PatternInfoOffset.offset); SRS_PATTERN_INFO PatternInfo[PatternInfoCount];
    }
    if (FontInfoOffset.offset)
    {
        FSeek(FontInfoOffset.offset); SRS_FONT_INFO FontInfo;
    } FSeek(p);
} SRS_IMAGE_CAST<optimize=false>;