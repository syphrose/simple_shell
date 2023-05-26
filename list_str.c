#include "shell.h"

/**
 * lists_str - list all strings
 * @hd:address of first nd
 *
 * Return:string
 */

char **lists_str(list_t *hd)
{
	list_t *nd = hd;
	size_t i = ls_len(hd), k;
	char **string;
	char *str;

	if (!hd || !i)
		return (NULL);
	string = malloc(sizeof(char *) * (i + 1));
	if (!string)
		return (NULL);
	for (i = 0; nd; nd = nd->nxt, i++)
	{
		str = malloc(str_len(nd->str) + 1);
		if (!str)
		{
			for (k = 0; k < i; k++)
				free(string[k]);
			free(string);
			return (NULL);
		}
		str = str_cpy(str, nd->str);
		string[i] = str;
	}
	string[i] = NULL;
	return (string);
}
