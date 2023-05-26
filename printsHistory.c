#include "shell.h"

/**
 * prints_hist - creates a folder
 * @data:struct
 *
 * Return:value
 */

int prints_hist(data_t *data)
{
	ssize_t fd;
	char *fn = gets_hist(data);
	list_t *nd = NULL;

	if (!fn)
		return (-1);
	fd = open(fn, O_CREAT | O_TRUNC | O_RDWR, 0644);
	free(fn);
	if (fd < 0)
	{
		return (-1);
	}
	for (nd = data->hist; nd; nd = nd->nxt)
	{
		gets_fd(nd->str, fd);
		get_fd('\n', fd);
	}
	get_fd(BUFFER_FLUSH, fd);
	close(fd);
	return (1);
}
