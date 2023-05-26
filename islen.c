#include "shell.h"

/**
 * ls_len - lists len of list
 * @h:address of firts nd
 *
 * Return:value
 */

size_t ls_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->nxt;
		i++;
	}
	return (i);
}
