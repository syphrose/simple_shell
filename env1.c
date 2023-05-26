#include "shell.h"
/**
 * _env - current envt
 * @data: storage struct
 * Return: 0
 *
 */
int _env(data_t *data)
{
	prints_str(data->env);
	return (0);
}
