#include "shell.h"

/**
 * _hist - shows history
 * @data:struct
 *
 * Return:value
 */

int _hist(data_t *data)
{
	prints_ls(data->hist);
	return (0);
}
