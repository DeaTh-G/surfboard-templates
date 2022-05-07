typedef struct {
    ubyte R;
    ubyte G;
    ubyte B;
    ubyte A;
} SRS_COLOR<optimize=false,
	read=Str("[%d, %d, %d, %d]", R, G, B, A)>;
