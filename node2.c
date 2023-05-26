#include "shell.h"

/**
 * adds_nd - adds node at the end
 * @hd:address
 * @str:string
 * @num:number of nodes
 *
 * Return:value:
 */

list_t *adds_nd(list_t **hd, const char *str, int num)
{
	list_t *new_hd, *nd;

	if (!hd)
		return (NULL);
	nd = *hd;
	new_nd = malloc(sizeof(list_t));
	if (!new_hd)
		return (NULL);
	mem_set((void *)new_nd, 0, sizeof(list_t));
	new_nd->num = num;
	if (str)
	{
		new_hd->str = str_dup(str);
		if (!new_nd->str)
		{
			free(new_nd);
			return (NULL);
		}
	}
	if (nd)
	{
		while (nd->nxt)
			nd = nd->nxt;
		nd->nxt = new_nd;
	}
	else
		*hd = new_nd;
	return (new_nd);
}
