#include "shell.h"
/**
 * gets_path - displays the path of a file
 *
 * @cmd: the command to declare
 * @track: shows path
 *
 * Return: fTrack
 *
 */
char *gets_path(const char *cmd, const char *track)
{
	char *fTrack = NULL;
	char *dir;

	dir = strtok((char *)track, ":");

	while (dir != NULL)
	{
		char tmpTrack[CMD_LEN];

		print_concat(dir, cmd);
		if (access(tmpTrack, X_OK) == 0)
		{
			fTrack = _strdup(tmpTrack);
			break;
		}
		dir = strtok(NULL, ":");
	}
	return (fTrack);
}
