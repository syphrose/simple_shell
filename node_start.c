#include "shell.h"

/**
 * nd_start - beginning of a node
 * @nd:address
 * @pref:prefix
 * @c:character
 *
 * Return:NULL
 */

list_t *nd_start(list_t *nd, char *pref, char c)
{
	char *ptr = NULL;

	while (nd)
	{
		ptr = starts_with(nd->str, pref);
		if (ptr && ((c < 0) || (*ptr == c)))
			return (nd);
		nd = nd->nxt;
	}
	return (NULL);
}
