//Modify this file to change what commands output to your statusbar, and recompile using the make command.
#define CLICKABLE_BLOCKS 1
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"", "~/suckless/dwmblocks/scripts/cpu",     5,         3},
	{"", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	5,		3},
  /* {" ", "~/suckless/dwmblocks/scripts/pacupd",  5,         0}, */
  {"", "python -u ~/.config/i3/polybar/scripts/weather.py", 5,        3},
  {"", "~/suckless/dwmblocks/scripts/wifi",        5,    3},
  {"",   "~/suckless/dwmblocks/scripts/volume",      1,    3},
	{"", "date '+%I:%M%p'  ",					5,		3},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
