#include "shell.h"

/**
 * prints_str - prints string
 * @h:address
 *
 * Return:value
 */

size_t prints_str(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		puts_(h->str ? h->str : "(nil)");
		puts_("\n");
		h = h->nxt;
		i++;
	}
	return (i);
}
