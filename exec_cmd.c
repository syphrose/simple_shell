#include "shell.h"
/**
 * exec_cmd - executes command
 * @cmd: command
 * @fn: file name
 *
 */
void exec_cmd(char *cmd, char *fn)
{
	pid_t pid;
	int st;

	if (_strcmp(cmd, "/bin/ls") != 0)
	{
		fprintf(stderr, "%s: No such file or directory\n", fn);
		return;
	}
	pid = fork();
	if (pid < 0)
	{
		perror("Fork failed");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		execl("/bin/ls", "ls", NULL);
		perror("Command execution failed");
		exit(EXIT_FAILURE);
	}
	else
	{
		waitpid(pid, &st, 0);
	}

}
