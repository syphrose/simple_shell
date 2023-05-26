#include "shell.h"

/**
 * prints_chain - checks if buffer is delim
 * @data:struct
 * @buffer:buf
 * @ptr:pointer
 *
 * Return:valu
 */

int prints_chain(data_t *data, char *buffer, size_t *ptr)
{
	size_t j = *ptr;

	if (buffer[j] == '|' && buffer[j + 1] == '|')
	{
		buffer[j] = 0;
		j++;
		data->cmd_type = CMD_OR;
	}
	else if (buffer[j] == '&' && buffer[j + 1] == '&')
	{
		buffer[j] = 0;
		j++;
		data->cmd_type = CMD_AND;
	}
	else if (buffer[j] == ';')
	{
		buffer[j] = 0;
		data->cmd_type = CMD_CHAIN;
	}
	else
	{
		return (0);
	}
	*ptr = j;
	return (1);
}
