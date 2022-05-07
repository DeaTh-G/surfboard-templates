typedef struct {
    ushort Character;
    short TextureListIndex;
    short TextureIndex;
    short SpriteIndex;
} SRS_CHARACTER_MAPPING<optimize=false, read=Str("%c", Character)>;

typedef struct {
    local uint64 p<hidden=true>;

    uint64 NameOffset;
    StringPtr Name(NameOffset);
    int ID;
    uint field_0C;
    ushort CharacterCount;
    ushort field_12;
    uint field_14;
    uint64 CharacterOffset;
    uint64 field_20;
    uint64 field_28; p = FTell();
    if (CharacterOffset && CharacterCount)
    {
        FSeek(CharacterOffset); SRS_CHARACTER_MAPPING CharacterMappings[CharacterCount];
    } FSeek(p);
} SRS_FONT<optimize=false, read=Name.Name>;