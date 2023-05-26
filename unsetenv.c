#include "shell.h"
/**
 * unset_env - unsets the env the chars
 * @vr: variable property
 * @data: storage struct
 * Return: str
 *
 */
int unset_env(data_t *data, char *vr)
{
	list_t *nd = data->env;
	size_t i = 0;
	char *ptr;

	if (!nd || !vr)
		return (0);

	while (nd)
	{
		ptr = starts_with(nd->str, vr);
		if (ptr && *ptr == '=')
		{
			data->new_env = rm_nd_ind(&(data->env), i);
			i = 0;
			nd = data->env;
			continue
		}
		nd = nd->nxt;
		i++;
	}
	return (data->new_env);
}
