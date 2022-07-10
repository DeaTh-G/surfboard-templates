typedef struct {
    SRS_CHUNKHEADER Header;
    uint ChunkCount;
    uint NextChunkOffset;
    uint ChunkListSize;
    uint OffsetChunkOffset;
    uint RevisionDate;
    uint padding<hidden=true>;
} SRS_INFO_CHUNK<bgcolor=0x0000FF>;