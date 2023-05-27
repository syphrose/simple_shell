#include "shell.h"

/**
 * printAlias - prints alias
 * @nd:node
 *
 * Return:value
 */

int printAlias(list_t *nd)
{
	char *ptr = NULL, *m = NULL;

	if (nd)
	{
		ptr = str_chr(nd->str, '=');
		for (m = nd->str; m <= ptr; m++)
			put_char(*m);
		put_char('\'');
		puts_(ptr + 1);
		puts_("'\n");
		return (0);
	}
	return (1);
}
