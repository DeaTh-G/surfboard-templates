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
    ushort field_2A;
    uint PatternInfoOffset;
    uint field_30;
    uint FontInfoOffset;
    uint field_38;
    uint field_3C; p = FTell();
    if (PatternInfoCount && PatternInfoOffset)
    {
        FSeek(PatternInfoOffset); SRS_PATTERN_INFO PatternInfo[PatternInfoCount];
    }
    if (FontInfoOffset)
    {
        FSeek(FontInfoOffset); SRS_FONT_INFO FontInfo;
    } FSeek(p);
} SRS_IMAGE_CAST<optimize=false>;