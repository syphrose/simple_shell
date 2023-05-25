#include "shell.h"

/**
 * exec_cmd - executes command
 * @cmd:command to be executed
 *
 */

void exec_cmd(char **cmd)
{
	char *param = (*(cmd + 1));
	char *s, *sl = "/";
	char *x;
	char *vart = *cmd;
	char *argv[4];

	if ((access(cmd[0], F_OK) == 0))
	{
		argv[0] = cmd[0];
		argv[1] = param;
		argv[2] = ".";
		argv[3] = NULL;

		if (execve(argv[0], argv, NULL) < 0)
		{
			perror("Error");
		}
	}
	else
	{
		x = search_cmd(vart);
		sl = strconcat(x, sl);
		s = strconcat(sl, *cmd);
		argv[0] = s;
		argv[1] = param;
		argv[2] = ".";
		argv[3] = NULL;

		if (execve(argv[0], argv, NULL) < 0)
		{
			perror("Error");
		}
	}
}
