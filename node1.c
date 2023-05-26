#include "shell.h"

/**
 * add_nd - adds nd at the beginning
 * @hd:address
 * @str:string
 * @num:number of nodes
 *
 * Return:value
 */

list_t *add_nd(list_t **hd, const char *str, int num)
{
	list_t *new_hd;

	if (!hd)
		return (NULL);
	new_hd = malloc(sizeof(list_t));
	if (!new_hd)
		return (NULL);
	mem_set((void *)new_hd, 0, sizeof(list_t));
	new_hd->num = num;
	if (str)
	{
		new_hd->str = str_dup(str);
		if (!new_hd->str)
		{
			free(new_hd);
			return (NULL);
		}
	}
	new_hd->nxt = *hd;
	*hd = new_hd;
	return (new_hd);
}
