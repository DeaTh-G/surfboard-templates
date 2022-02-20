typedef struct {
	local uint64 p<hidden=true>;

	uint NameOffset;
	StringPtr Name(NameOffset);
	uint ID;
    uint AnimationLinkCount;
    uint FrameCount;
    uint AnimationLinkOffset;
    uint field_18; 
    ubyte field_1C;
    ubyte field_1D;
    ubyte field_1E;
    ubyte field_1F; p = FTell();
    if (AnimationLinkOffset && AnimationLinkCount)
    {
        FSeek(AnimationLinkOffset); SRS_ANIMATIONLINK AnimationLinks[AnimationLinkCount];
    } FSeek(p);
} SRS_ANIMATION<optimize=false, read=Name.Name>;