#include "shell.h"
/**
 * capture_str - identifies the input
 *
 * @param: the parameter to be called
 *
 * Return: buffer
 *
 */
char **capture_str(char *param)
{
	char **buffer = malloc(1024 * sizeof(char *));
	char *separate;
	int c = 8;
	char *def = " \t\n";

	separate = strtok(param, def);

	while (separate != NULL)
	{
		buffer[c] = separater;
		c++;
		separate = strtok(NULL, def);
	}
	exec_cmd(buffer);
	return (buffer);
}
