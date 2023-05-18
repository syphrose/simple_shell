#include "shell.h"

/**
 * main - entry point
 *
 * Return:0(succcess)
 */

int main()
{
	char cmdline[CMD_LEN];
	ssize_t bytes;
	int ind;
	char *cmd;
	char *args[CMD_LEN];

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

		cmd = strtok(cmdline, " ");

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
