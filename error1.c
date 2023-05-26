#include "shell.h"
/**
 * prints_err - prints error message
 * @data: storage struct
 * @str: string with error
 *
 */
void prints_err(data_t *data, char *str)
{
	eputs_(data->fn);
	eputs_(": ");
	prints_d(data->countsLine, STDERR_FILENO);
	eputs_(": ");
	eputs_(data->av[0]);
	eputs_(": ");
	eputs_(str);
}
