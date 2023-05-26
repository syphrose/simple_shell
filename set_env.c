#include "shell.h"
/**
 * my_setenv - init new envt var or modify the existing one
 * @data: storage struct
 * Return: 0
 *
 */
int my_setenv(data_t *data)
{
	if (data->ac != 3)
	{
		eputs_("Incorrect nums of args\n");
		return (1);
	}
	if (set_env(data, data->av[1], data->av[2]))
		return (0);
	return (1);
}
