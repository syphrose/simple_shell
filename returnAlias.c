#include "shell.h"

/**
 * return_alias - returns alias in a tok string
 * @data:struct
 *
 * Return:value
 */

int return_alias(data_t *data)
{
	int i;
	list_t *nd;
	char *ptr;

	for (i = 0; i < 10; i++)
	{
		nd = nd_start(data->alias, data->av[0], '=');
		if (!nd)
		{
			return (0);
		}
		free(data->av[0]);
		ptr = str_chr(nd->str, '=');
		if (!ptr)
		{
			return (0);
		}
		ptr = str_dup(ptr + 1);
		if (!ptr)
		{
			return (0);
		}
		data->av[0] = ptr;
	}
	return (1);
}
