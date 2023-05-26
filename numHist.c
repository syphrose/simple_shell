#include "shell.h"

/**
 * renum_hist - renumbers the hist
 * @data:struct
 *
 * Return:value
 */

int renum_hist(data_t *data)
{
	list_t *nd = data->hist;
	int i = 0;

	while (nd)
	{
		nd->num = i++;
		nd = nd->nxt;
	}
	return (data->histNum = i);
}
