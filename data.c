#include "shell.h"
/**
 * set_data - initialize data struct
 * @av: - vector argument
 * @data: storage struct
 *
 */
void set_data(data_t *data, char **av)
{
	int i = 0;

	data->fn = av[0];
	if (data->ag)
	{
		data->av = str_tow(data->ag, " \t");
		if (!data->av)
		{
			data->av = malloc(sizeof(char *) * 2);
			if (data->av)
			{
				data->av[0] = str_dup(data->ag);
				data->av[1] = NULL;
			}
		}
		for (i = 0; data->av && data->av[i]; i++)
			data->ac = i;
		return_alias(data);
		return_vars(data);
	}
}
