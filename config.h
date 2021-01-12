static const Block blocks[] = {
	/*Command*/	/*Update Interval (seconds)*/	/*Update Signal*/
	/* {"cat /tmp/recordingicon 2>/dev/null",	0,	9}, */
	{"pacpackages",	0,	8},
	{"volume",	0,	10},
	{"battery",	5,	3},
	{"internet",	5,	4},
	{"clock",	60,	1},
        /* {"music",	0,	10}, */
	/* {"torrent",	20,	7}, */
	/* {"memory",	10,	14}, */
	/* {"cpu",		10,	13}, */
	/* {"weather",	18000,	5}, */
	/* {"mailbox",	180,	12}, */
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

