#include "shell.h"
/**
 * gets_cmd - reads the command
 * @cmd: the pointer command
 *
 * Return: command
 *
 */
ssize_t gets_cmd(char *cmd)
{
	write(STDOUT_FILENO, PROMPT, _strlen(PROMPT));
	return (STDIN_FILENO, cmd, CMD_LEN);
}
