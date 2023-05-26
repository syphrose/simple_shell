#include "shell.h"

/**
 * ffree - free str
 * @pp:str
 *
 */

void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}
