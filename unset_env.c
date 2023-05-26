#include "shell.h"
/**
 * my_unsetenv - removes env variable
 * @data: storage struct
 * Return: 0
 *
 */
int my_unsetenv(data_t *data)
{
	int i;

	if (data->ac == 1)
	{
		eputs_("Less args");
		return (1);
	}
	for (i = 1; i <= data->ac; i++)
		unset_env(data, data->av[i]);
	return (0);
}
