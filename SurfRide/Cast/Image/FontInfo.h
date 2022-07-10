typedef struct{
    local uint64 p<hidden=true>;

    uint field_00;
    uint FontListIndex;
    size_t CharacterListOffset;
    SRS_VECTOR2 Scale;
    uint field_14;
    uint field_18;
    short FontSpacing;
    ushort field_1E;
    size_t FontOffset; p = FTell();
    if (CharacterListOffset.offset)
    {
        FSeek(CharacterListOffset.offset); string Characters;
    } 
    if (FontOffset.offset)
    { 
        FSeek(FontOffset.offset); SRS_FONT FontList;
    } FSeek(p);
} SRS_FONTINFO<optimize=false>;