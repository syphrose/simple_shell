#include "shell.h"

/**
 * exec_token - executes tokens
 * @cmd:command
 * @fn:file name
 *
 */

void exec_token(char *cmd, char *fn)
{
	char *args[ARGS];
	int num = 0;
	char *tk;
	pid_t pid;
	int st;
	
	args[num++] = strtok(cmd, " ");
	while (num < ARGS && (args[num] = strtok(NULL, " ")) != NULL)
	{
		num++;
	}
	if (num == 0)
	{
		return;
	}
	args[num] = NULL;
	pid = fork();
	if (pid < 0)
	{
		perror("Fork failed");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		execvp(args[0], args);
		perror("Command execution failed");
		exit(EXIT_FAILURE);
	}
	else
	{
		waitpid(pid, &st, 0);
	}
}
