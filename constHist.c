#include "shell.h"

/**
 * const_hist - constracts entry
 * @data:struct
 * @buffer:buff
 * @lineNum:keeps count of line
 *
 * Return:value
 */

int const_hist(data_t *data, char *buffer, int lineNum)
{
	list_t *nd = NULL;

	if (data->hist)
		nd = data->hist;
	adds_nd(&nd, buffer, lineNum);
	if (!data->hist)
	{
		data->hist = nd;
	}
	return (0);
}
