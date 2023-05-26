#include "shell.h"

/**
 * char_dups - duplicates char
 * @trackstr:path o str
 * @strt:begin
 * @stp:end
 *
 * Return:ptr
 */

char *char_dups(char *trackstr, int strt, int stp)
{
	static char buffer[1024];
	int i = 0, k = 0;

	for (k = 0, i = strt; i < stp; i++)
		if (trackstr[i] != ':')
			buffer[k++] = trackstr[i];
	buffer[k] = 0;
	return (buffer);
}
