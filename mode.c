#include "shell.h"
/**
 * interactive_mode - returns true if the shell is in interactive mode
 * @data: the sructure address
 * Return: 1 if interactive , else 0
 *
 */
int interactive_mode(data_t *data)
{
	return (isatty(STDIN_FILENO) && data->gets_fd <= 2);
}

