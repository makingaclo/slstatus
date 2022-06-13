//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	// Spacer
	{ "", "echo \"\"", 1000000, 0 },


	// Memory
	//
	{ "", "echo \"[  $(free -h | awk '(NR==2){ print $3 }')B ]\" | sed -r 's/([0-9]+.?[0-9]+)/& /'", 2, 0 },

	// Volume
	{ "", "echo \"[  $(pactl get-sink-volume $(pactl get-default-sink) | awk '(NR==1){ print $5 }') ]\"", 2, 0 },

	// Date
	{ "", "echo \"[  $(date \"+%b%e\") ]\"", 2, 0 },

	// Time
	{ "", "echo \"[  $(date \"+%R\") ]\"", 2, 0 },

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 1;

