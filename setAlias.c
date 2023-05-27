#include "shell.h"

/**
 * setAlias - sets alias
 * @data:struct
 * @str:string
 *
 * Return:value
 */

int setAlias(data_t *data, char *str)
{
	char *ptr;

	ptr = str_chr(str, '=');
	if (!ptr)
		return (1);
	if (!*++ptr)
		return (unsetAlias(data, str));
	unsetAlias(data, str);
	return (adds_nd(&(data->alias), str, 0) == NULL);
}
