#include "shell.h"
/**
 * get_env - reads value of envt variable
 * @data: storage struct
 * @nm: name
 * Return: Null
 *
 */
char *get_env(data_t *data, const char *nm)
{
	list_t *nd = data->env;
	char *ptr;

	while (nd)
	{
		ptr = starts_with(nd->str, nm);
		if (ptr && *ptr)
			return (ptr);
		nd = nd->nxt;
	}
	return (NULL);
}
