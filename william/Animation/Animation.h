typedef struct {
	local uint64 p<hidden=true>;

	uint NameOffset;
	StringPtr Name(NameOffset);
	uint ID;
    uint AnimationLinkCount;
    uint FrameCount;
    uint AnimationLinkOffset;
    uint field_18; p = FTell();
    if (AnimationLinkOffset && AnimationLinkCount)
    {
        FSeek(AnimationLinkOffset); SRS_ANIMATIONLINK AnimationLinks[AnimationLinkCount];
    } FSeek(p);
} SRS_ANIMATION<optimize=false, read=Name.Name>;