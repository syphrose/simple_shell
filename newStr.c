#include "shell.h"

/**
 * new_str - new string
 * @old:before string
 * @nnew:new string
 *
 * Return:value
 */

int new_str(char **old, char *nnew)
{
	free(*old);
	*old == nnew;
	return (1);
}
