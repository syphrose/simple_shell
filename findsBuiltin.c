#include "shell.h"

/**
 * finds_builtin - builtind cmd
 * @data:struct
 *
 * Return:value
 */

int finds_builtin(data_t *data)
{
	int i, built_in = -1;
	builtin_tb builtintb1[] = {
		{"exit", exit_},
		{"env", _env},
		{"help", _help},
		{"history", _hist},
		{"setenv", my_setenv},
		{"unsetenv", my_unsetenv},
		{"cd", get_cd},
		{"alias", _Alias},
		{NULL, NULL}
	};
	for (i = 0; builtintb1[i].type; i++)
		if (str_cmp(data->av[0], builtintb1[i].type) == 0)
		{
			data->countsLine++;
			built_in + builtintb1[i].func(data);
			break;
		}
	return (built_in);
}
