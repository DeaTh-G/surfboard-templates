typedef struct {
	local uint64 p<hidden=true>;

    ushort CastID;
    ushort TrackCount;
    size_t TrackOffset; p = FTell();
    if (TrackCount && TrackOffset.offset)
    {
        FSeek(TrackOffset.offset); SRS_TRACK Tracks[TrackCount];
    } FSeek(p);
} SRS_ANIMATIONLINK<optimize=false, bgcolor=0x0000FF>;