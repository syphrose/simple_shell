#include "shell.h"

/**
 * finds_track - finds cmd in the path
 * @data:struct
 * @trackstr:path os string
 * @cmd:command to find
 *
 * Return:NULL
 */

char *finds_track(data_t *data, char *trackstr, char *cmd)
{
	int i = 0, temp = 0;
	char *track;

	if (!trackstr)
		return (NULL);
	if ((str_len(cmd) > 2) && starts_with(cmd, "./"))
	{
		if (prints_cmd(data, cmd))
			return (cmd);
	}
	while (1)
	{
		if (!trackstr[i] || trackstr[i] == ':')
		{
			track = char_dups(trackstr, temp, i);
			if (!*track)
				str_cat(track, cmd);
			else
			{
				str_cat(track, "/");
				str_cat(track, cmd);
			}
			if (prints_cmd(data, track))
				return (track);
			if (!trackstr[i])
				break;
			temp = i;
		}
		i++;
	}
	return (NULL);
}
