#include "shell.h"
/**
 * exit_ - a func to exit shell
 * @data: struct with args to maintain func prototype
 * Return: 0 if info.av[] != "exit"
 *
 */
int exit_(data_t *data)
{
	int confirm;

	if (data->av[1])
	{
		confirm = error_atoi(data->av[1]);

		if (confirm < 0)
		{
			data->st = 2;
			prints_err(data, "Illegal num" : );
			eputs_(data->av[1]);
			eput_char('\n');
			return (1);
		}
		data->num_error = error_atoi(data->av[1]);
		return (-2);
	}
	data->num_error = -1;
	return (-2);
}
