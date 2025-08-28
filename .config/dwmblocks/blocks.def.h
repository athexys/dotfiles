static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.local/bin/dwmblocks/spotify", 1, 18},
	{"", "~/.local/bin/dwmblocks/cpu", 5, 12},
	{"", "~/.local/bin/dwmblocks/ram", 5, 13},
	{"", "~/.local/bin/dwmblocks/hdd", 1200, 4},
	{"", "~/.local/bin/dwmblocks/vol", 0, 7},
	{"", "~/.local/bin/dwmblocks/date", 60, 10},
};

// Define the delimiter between status blocks
static char delim[] = " | ";
static unsigned int delimLen = 3;
