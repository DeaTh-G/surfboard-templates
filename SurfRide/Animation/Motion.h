typedef struct {
	local uint64 p<hidden=true>;

    ushort CastIndex;
    ushort TrackCount;
    size_t TrackOffset; p = FTell();
    if (TrackCount && TrackOffset.offset)
    {
        FSeek(TrackOffset.offset); SRS_TRACK Tracks[TrackCount];
    } FSeek(p);
} SRS_MOTION<optimize=false, bgcolor=0x0000FF>;