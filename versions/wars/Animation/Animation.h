typedef struct {
	local uint64 p<hidden=true>;

	uint64 NameOffset;
	StringPtr Name(NameOffset);
	uint ID;
    uint AnimationLinkCount;
    uint64 FrameCount;
    uint64 AnimationLinkOffset;
    uint64 field_20;
    uint64 field_28; p = FTell();
    if (AnimationLinkOffset && AnimationLinkCount)
    {
        FSeek(AnimationLinkOffset); SRS_ANIMATIONLINK AnimationLinks[AnimationLinkCount];
    } FSeek(p);
} SRS_ANIMATION<optimize=false, read=Name.Name>;