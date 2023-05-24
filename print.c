#include "shell.h"

/**
 * print_concat - it prints string
 * @dir:directory
 * @cmd:command
 *
 */

void print_concat(const char *dir, const char *cmd)
{
	char fTrack[CMD_LEN];
	int len;

	len = 0;
	while (*dir != '\0')
	{
		fTrack[len++] = *dir++;
	}
	fTrack[len++] = '/';
	while (*cmd != '\0')
	{
		fTrack[len++] = *cmd++;
	}
	write(STDOUT_FILENO, fTrack, len);
}
