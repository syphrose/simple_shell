#include "shell.h"

/**
 * confirm_chain - confirms if we should still chain
 * @data:struct
 * @buffer:buff
 * @ptr:pointer
 * @i:starting point
 * @len:length
 *
 */

void confirm_chain(data_t *data, char *buffer, size_t *ptr, size_t i,
		size_t len)
{
	size_t j = *ptr;

	if (data->cmd_type == CMD_AND)
	{
		if (data->st)
		{
			buffer[i] = 0;
			j = len;
		}
	}
	if (data->cmd_type == CMD_OR)
	{
		if (!data->st)
		{
			buffer[i] = 0;
			j = len;
		}
	}
	*ptr = j;
}
