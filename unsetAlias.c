#include "shell.h"

/**
 * unsetAlias -unsets alias str
 * @data:struct
 * @str:string
 *
 * Return:value
 */

int unsetAlias(data_t *data, char *str)
{
	char *ptr, l;
	int rt;

	ptr = str_chr(str, '=');
	if (!ptr)
		return (1);
	l = *ptr;
	*ptr = 0;
	rt = rm_nd_ind(&(data->alias),
			gets_nd_ind(data->alias, nd_start(data->alias, str, -1)));
	*ptr = l;
	return (rt);
}
