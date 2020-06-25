static const Block blocks[] = {
	/*Command*/	/*Update Interval (seconds)*/	/*Update Signal*/
	{"cat /tmp/recordingicon 2>/dev/null",	0,	9},
        /* {"music",	0,	11}, */
	{"pacpackages",	0,	8},
	/* {"crypto",	0,	13}, */
	/* {"torrent",	20,	7}, */
	/* {"news",	0,	6}, */
	/* {"memory",	10,	14}, */
	/* {"cpu",		10,	13}, */
	/* {"moonphase",	18000,	5}, */
	/* {"weather",	18000,	5}, */
	/* {"mailbox",	180,	12}, */
	{"volume",	0,	10},
	{"battery",	5,	3},
	/* {"clock",	60,	1}, */
	{"internet",	5,	4},
	/* {"help-icon",	0,	15}, */
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
