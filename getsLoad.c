#include "shell.h"

/**
 * gets_load - gets input
 * @data:struct
 *
 * Return:bytes
 */

ssize_t gets_load(data_t *data)
{
	static char *buffer;
	static size_t i, k, len;
	ssize_t n = 0;
	char **buffs = &(data->ag), *ptr;

	put_char(BUFFER_FLUSH);
	n = load_buffer(data, &buffer, &len);
	if (n < 0)
		return (-1);
	if (len)
	{
		k = i;
		ptr = buffer + i;

		confirm_chain(data, buffer, &k, i, len);
		while (k < len)
		{
			if (prints_chain(data, buffer, &k))
				break;
			k++;
		}
		i = k + 1;
		if (i >= len)
		{
			i = len = 0;
			data->cmd_type = CMD_NORM;
		}
		*buffs = ptr;
		return (str_len(ptr));
	}
	*buffs = buffer;
	return (n);
}
