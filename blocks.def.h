//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" 🔋", "acpi | awk '{ print $4 }' | sed 's/,//'", 30, 0},
	{"", "~/.Scripts/volume-dwmblocks", 30, 12},
	{"☀️ ", "~/.Scripts/brightness-dwmblocks", 0, 11},
	{"", "~/.Scripts/harddrivespace", 30 , 0  },
	{"🌡️ ", "sensors | grep temp1: -m1 | awk '{print $2}' | sed 's/\+//'", 20, 0},
	{"💻 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"", "~/.Scripts/clock-dwmblocks",	5,	0},
};


//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
