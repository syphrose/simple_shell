#include "shell.h"
/**
 * search_cmd - searches for a command
 *
 * @track: path of a file
 * @cmd: command
 *
 * Return: NULL
 *
 */
char *search_cmd(const char *cmd, const char *track)
{
	char *fTrack;
	char *dir;

	dir = strtok((char *)track, ":");

	while (dir != NULL)
	{
		if (cmd_exists(cmd, dir))
		{
			fTrack = malloc(_strlen(dir) + _strlen(cmd) + 2);
			print_concat(dir, cmd);
			return (fTrack);
		}
		dir = strtok(NULL, ":");
	}
	return (NULL);
}
