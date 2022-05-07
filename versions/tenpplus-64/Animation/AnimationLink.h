typedef struct {
	local uint64 p<hidden=true>;

    ushort CastID;
    ushort TrackCount;
	uint field_04;
    uint64 TrackOffset; p = FTell();
    if (TrackCount && TrackOffset)
    {
        FSeek(TrackOffset); SRS_TRACK Tracks[TrackCount];
    } FSeek(p);
} SRS_ANIMATIONLINK<optimize=false, bgcolor=0x0000FF>;