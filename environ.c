#include "shell.h"
/**
 * reads_environ - reads str array in the env
 * @data: storage struct
 * Return: 0
 *
 */
char **reads_environ(data_t *data)
{
	if (!data->environ || data->new_env)
	{
		data->environ = lists_str(data->env);
		data->new_env = 0;
	}
	return (data->environ);
}
