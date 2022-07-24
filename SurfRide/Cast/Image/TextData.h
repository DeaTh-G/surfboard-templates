typedef struct{
    local uint64 p<hidden=true>;

    uint field_00;
    uint FontIndex;
    size_t TextOffset;
    SRS_VECTOR2 Scale;
    short field_14;
    short field_16;
    short field_18;
    short field_1A;
    short SpaceCorrection;
    short field_1E;
    size_t FontOffset; p = FTell();
    if (TextOffset.offset)
    {
        FSeek(TextOffset.offset); string Text;
    } 
    if (FontOffset.offset)
    { 
        FSeek(FontOffset.offset); SRS_FONT Font;
    } FSeek(p);
} SRS_TEXTDATA<optimize=false, read=Font.Name.Name>;