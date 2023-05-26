#include "shell.h"
/**
 * set_env - sets the env for execution
 * @value: variable value
 * @vr: variable
 * @data: storage struct
 * Return: 0
 *
 */
int set_env(data_t *data, char *vr, char *value)
{
	char *buffer = NULL;
	list_t *nd;
	char *ptr;

	if (!vr || !value)
		return (0);
	buffer = malloc(str_len(vr) + str_len(value) + 2);
	if (!buffer)
		return (1);
	str_cpy(buffer, vr);
	str_cat(buffer, "=");
	str_cat(buffer, value);
	nd = data->env;

	while (nd)
	{
		ptr = starts_with(nd->str, vr);
		if (ptr && *ptr == '=')
		{
			free(nd->str);
			nd->str = buffer;
			data->new_env = 1;
			return (0);
		}
		nd = nd->nxt
	}
	add_nd(&(data->env), buffer, 0);
	free(buffer);
	data->new_env = 1;
	return (0);
}
