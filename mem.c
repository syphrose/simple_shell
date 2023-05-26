#include "shell.h"

/**
 * bfree - free the mem of address
 * @ptr:pointer
 *
 * Return:value
 *
 */

int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
