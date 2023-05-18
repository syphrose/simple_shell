#include "shell.h"
/**
 * exec_cmd - commands to be executed
 * @cmd: command to be called
 * @args: arguments
 *
 * Return: void
 *
 */
void exec_cmd(const char *cmd, char *const args[])
{
	pid_t pid;
	int st;

	if (_strcmp(cmd, "exit") == 0)
	{
		handles_exit(args);
	}
	else if (_strcmp(cmd, "env") == 0)
	{
		handles_environ(args);
	}

	pid = fork();

	if (pid < 0)
	{
		perror("Fork failed");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		execvp(cmd, args);
		perror("Command execution failed");
		exit(EXIT_FAILURE);
	}
	else
	{
		waitpid(pid, &st, 0);
	}


}
