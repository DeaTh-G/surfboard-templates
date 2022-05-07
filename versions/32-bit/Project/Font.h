typedef struct {
    ushort Character;
    short TextureListIndex;
    short TextureIndex;
    short SpriteIndex;
} SRS_CHARACTER_MAPPING<optimize=false, read=Str("%c", Character)>;

typedef struct {
    local uint64 p<hidden=true>;

    uint NameOffset;
    StringPtr Name(NameOffset);
    int ID;
    uint field_08;
    ushort CharacterCount;
    ushort field_0E;
    uint CharacterOffset;
    uint field_14;
    uint field_18; p = FTell();
    if (CharacterOffset && CharacterCount)
    {
        FSeek(CharacterOffset); SRS_CHARACTER_MAPPING CharacterMappings[CharacterCount];
    } FSeek(p);
} SRS_FONT<optimize=false, read=Name.Name>;