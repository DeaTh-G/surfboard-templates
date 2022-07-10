typedef struct {
    SRS_CHUNKHEADER Header;
    uint OffsetCount;
    uint field_0C<hidden=true>;
    uint Offsets[OffsetCount]<optimize=false>;
} SRS_OFFSET_CHUNK<bgcolor=0xFF00B2>;