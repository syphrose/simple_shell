#include "shell.h"

/**
 * return_vars - checks vars in tok str
 * @data:struct
 *
 * Return:value
 */

int return_vars(data_t *data)
{
	int i = 0;
	list_t *nd;

	for (i = 0; data->av[i]; i++)
	{
		if (data->av[i][0] != '$' || !data->av[i][1])
		{
			continue;
		}
		if (!str_cmp(data->av[i], "$?"))
		{
			new_str(&(data->av[i]),
					str_dup(converts_num(data->st, 10, 0)));
			continue;
		}
		if (!str_cmp(data->av[i], "$$"))
		{
			new_str(&(data->av[i]),
					str_dup(converts_num(getpid(), 10, 0)));
			continue;
		}
		nd = nd_start(data->env, &data->av[i][1], '=');
		if (nd)
		{
			new_str(&(data->av[i]),
					str_dup(str_chr(nd->str, '=') + 1));
			continue;
		}
		new_str(&data->av[i], str_dup(""));
	}
	return (0);
}
