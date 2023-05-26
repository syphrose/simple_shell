#include "shell.h"

/**
 * rm_nd_ind - removes node
 * @hd:address
 * @ind:index
 *
 * Return:value
 */

int rm_nd_ind(list_t **hd, unsigned int ind)
{
	list_t *nd, *prev_nd;
	unsigned int i = 0;

	if (!hd || !*hd)
		return (0);
	if (!ind)
	{
		nd = *hd;
		*hd = (*hd)->nxt;
		free(nd->str);
		free(nd);
		return (1);
	}
	nd = *hd;
	while (nd)
	{
		if (i == ind)
		{
			prev_nd->nxt = nd->nxt;
			free(nd->str);
			free(nd);
			return (1);
		}
		i++;
		prev_nd = nd;
		nd = nd->nxt;
	}
	return (0);
}
