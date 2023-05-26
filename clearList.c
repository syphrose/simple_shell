#include "shell.h"

/**
 * clear_ls - clears all nodes
 * @hdptr:address
 *
 */

void clear_ls(list_t **hdptr)
{
	list_t *nd, *nxt_nd, *hd;

	if (!hdptr || !*hdptr)
		return;
	hd = *hdptr;
	nd = hd;
	while (nd)
	{
		nxt_nd = nd->nxt;
		free(nd->str);
		free(nd);
		nd = nxt_nd;
	}
	*hdptr = NULL;
}
