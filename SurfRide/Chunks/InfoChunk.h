typedef struct {
    SRS_CHUNK_HEADER Header;
    uint ChunkCount;
    uint NextChunkOffset;
    uint ChunkListSize;
    uint OffsetChunkOffset;
    uint UnknownDate;
    uint field_1C;
} SRS_INFO_CHUNK<bgcolor=0x0000FF>;