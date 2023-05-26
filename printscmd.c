#include "shell.h"

/**
 * prints_cmd - checks if file is executable
 * @data:struct
 * @track:path os file
 *
 * Return:value
 */

int prints_cmd(data_t *data, char *track)
{
	struct stat st;

	(void)data;
	if (!track || stat(track, &st))
		return (0);
	if (st.st_mode & S_IFREG)
	{
		return (1);
	}
	return (0);
}
