#include "shell.h"
/**
 * release_data - releases info
 * @a: true if it releases all fields
 * @data: storage struct
 *
 */
void release_data(data_t *data, int a)
{
	ffree(data->av);
	data->av = NULL;
	data->track = NULL;

	if (a)
	{
		if (!data->cmd_buffer)
			free(data->ag);
		if (data->env)
			clear_ls(&(data->env));
		if (data->hist)
			clear_ls(&(data->hist));
		if (data->alias)
			clear_ls(&(data->alias));
		ffree(data->environ);
		data->environ = NULL;
		bfree((void **)data->cmd_buffer);
		if (data->gets_fd > 2)
			close(data->gets_fd);
		put_char(BUFFER_FLUSH)
	}
}
