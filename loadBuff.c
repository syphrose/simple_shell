#include "shell.h"

/**
 * load_buffer - chained cmd
 * @data:struct
 * @buffer:buff
 * @len:address
 *
 * Return:value
 */

ssize_t load_buffer(data_t *data, char **buffer, size_t *len)
{
	ssize_t n = 0;
	size_t len1 = 0;

	if (!*len)
	{
		free(*buffer);
		*buffer = NULL;
		signal(SIGINT, handle_sig);
#if USER_GETLINE
		n = getline(buffer, &len1, stdin);
#else
		n = get_line(data, buffer, &len1);
#endif
		if (n > 0)
		{
			if ((*buffer)[n - 1] == '\n')
			{
				(*buffer)[n - 1] = '\0';
				n--;
			}
			data->fg_countsLine = 1;
			deletes_comment(*buffer);
			const_hist(data, *buffer, data->histNum++);
			{
				*len = n;
				data->cmd_buffer = buffer;
			}
		}
	}
	return (n);
}
