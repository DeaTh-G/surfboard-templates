typedef struct {
    local uint64 o<hidden=true> = FTell();
    if (o % 16 != 0)
    {
        FSkip(16 - (o % 16)); o = FTell();
    }

    SRS_CHUNK_HEADER Header;
    uint field_08;
    uint field_0C;
} SRS_END_CHUNK<bgcolor=0xFF0000>;