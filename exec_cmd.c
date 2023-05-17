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
	char msg;

	if (_strcmp(cmd, "ls") != 0)
	{
		msg[CMD_LEN + 32];
		sprintf(msg, "%s: No such file or directory\n", fn);
		writeerrMsg(msg);
		return;
	}
<<<<<<< HEAD
=======
	char *args[4] = {"ls", "-l", "/tmp", NULL};
<<<<<<< HEAD
=======

>>>>>>> 397f290e8d789c01aa0b6d3f36485b091a58e568
>>>>>>> c804fa121ffd623aba6c27aeffc9cd2be4eb1ae0
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
		waitpid(pid, &st, 0)
	}

}
