#include "shell.h"
/**
 * occupy_env - gathers envt linked list
 * @data: storage struct
 * Return: 0
 *
 */
int occupy_env(data_t *data)
{
	list_t *nd = NULL;
	size_t i;

	for (i = 0; environ[i]; i++)
		adds_nd(&nd, environ[i], 0);
	data->env = nd;
	return (0);
}
