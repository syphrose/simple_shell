#include "shell.h"

/**
 * handle_path - handles the path
 * @cmd:command executed
 *
 * Return:returns NULL
 */

char *handle_path(char *cmd)
{
	char *track;
	char *dir;
	int cmdLen;
	int dirLen;
	char *cmdTrack;

	track = getenv("PATH");
	dir = strtok(track, ":");

	while (dir != NULL)
	{
		cmdLen = _strlen(cmd);
		dirLen = _strlen(dir);
		cmdTrack = (char *)malloc(dirLen + 1 + cmdLen + 1);

		sprintf(cmdTrack, "%s/%s", dir, cmd);
		if (access(cmdTrack, X_OK) == 0)
		{
			return (cmdTrack);
		}
		free(cmdTrack);
		dir = strtok(NULL, ":");
	}
	return (NULL);
}
