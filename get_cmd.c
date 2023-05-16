#include "shell.h"
/**
 * gets_cmd - reads commands
 * @cmd: command
 * @len: length of command
 *
 * Return: number of bytes
 *
 */
ssize_t gets_cmd(char *cmd, size_t len)
{
	ssize_t bytes;

	write(STDOUT_FILENO, PROMPT, _strlen(PROMPT));
	bytes = read(STDIN_FILENO, cmd, len);

	if (bytes < 0)
	{
		perror("Error reading input");
		exit(EXIT_FAILURE);
	}
	return (bytes);
}
