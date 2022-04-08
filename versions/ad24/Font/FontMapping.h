typedef struct {
    ushort Character;
    short TextureListIndex;
    short TextureIndex;
    short SpriteIndex;
} SRS_FONT_MAPPING<optimize=false, read=Str("%c", Character)>;