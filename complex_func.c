#include "shell.h"
/**
 * find_slash - checks if the 1st char is a slash
 *
 * @cmd: 1st string
 *
 * Return: 1 if true otherwise 0
 *
 */
int find_slash(char *cmd)
{
	int num = 0;

	while (cmd[num])
	{
		if (cmd[0] == '/')
		{
			write(1, &cmd[0], 1);
			return (1);
		}
		num++;
	}
	return (0);
}
