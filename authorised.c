#include "shell.h"

/**
 * authorised_cmd - checks if command is allowed to run
 * @cmd:command
 *
 * Return:value
 */

int authorised_cmd(const char *cmd)
{
	return (_strcmp(cmd, "/bin/ls") == 0);
}
