#include "shell.h"

/**
 * find_cmd - finds cmd in pth
 * @data:struct
 *
 */

void find_cmd(data_t *data)
{
	char *track = NULL;
	int i, k;

	data->track = data->av[0];
	if (data->fg_countsLine == 1)
	{
		data->countsLine++;
		data->fg_countsline = 0;
	}
	for (i = 0, k = 0; data->ag[i]; i++)
		if (!check_delim(data->ag[i], " \t\n"))
			k++;
	if (!k)
		return;
	track = finds_track(data, get_env(data, "PATH="), data->av[0]);
	if (track)
	{
		data->track = track;
		fork_cmd(data);
	}
	else
	{
		if ((interactive_mode(data) || get_env(data, "PATH=")
					|| data->av[0][0] == '/') && prints_cmd(data, data->av[0]))
			fork_cmd(data);
		else if (*(data->ag) != '\n')
		{
			data->st = 127;
			prints_err(data, "not found\n");
		}
	}
}
