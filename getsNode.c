#include "shell.h"

/**
 * gets_nd_ind - gives the index of nd
 * @hd:address
 * @nd:address
 *
 * Return:value
 */

ssize_t gets_nd_ind(list_t *hd, list_t *nd)
{
	size_t i = 0;

	while (hd)
	{
		if (hd == nd)
			return (i);
		hd = hd->nxt;
		i++;
	}
	return (-1);
}
