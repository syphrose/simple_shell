#include "shell.h"

/**
 * main - entry point
 * @argc:argument count
 * @argv:vectors
 *
 * Return:0(succcess)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	char cmdline[CMD_LEN];
	ssize_t bytes;
	int ind;

	while (1)
	{
		write(STDOUT_FILENO, PROMPT, _strlen(PROMPT));
		bytes = read(STDIN_FILENO, cmdline, sizeof(cmdline));

		if (bytes < 0)
		{
			perror("Error reading input");
			exit(EXIT_FAILURE);
		}
		else if (bytes == 0)
		{
			break;
		}
		cmdline[_strcspn(cmdline, "\n")] = '\0';

		char *cmd = strtok(cmdline, " ");
		char *args[CMD_LEN];

		ind = 0;
		while (cmd != NULL)
		{
			args[ind++] = cmd;
			cmd = strtok(NULL, " ");
		}
		args[ind] = NULL;
		if (ind > 0)
		{
			exec_cmd(args[0], args);
		}
	}
	return (0);
}
