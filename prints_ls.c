#include "shell.h"

/**
 * prints_ls - prints list
 * @h:address of first nd
 *
 * Return:value
 */

size_t prints_ls(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		puts_(converts_num(h->num, 10, 0));
		put_char(':');
		put_char(' ');
		puts_(h->str ? h->str : "(nil)");
		puts_("\n");
		h = h->nxt;
		i++;
	}
	return (i);
}
