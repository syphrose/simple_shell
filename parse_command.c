#include "shell.h"
/**
 * cmd_parse - breaks down the codes before compiling
 * @args: arguments
 * @cmdline: command line
 * @cmd: command
 *
 */
void cmd_parse(const char *cmdline, char *cmd, char *args[])
{
	char cmdlinecpy[CMD_LEN];
	int i;
	char *tk;

	_strcpy(cmdlinecpy, cmdline);

	i = 0;
	tk = strtok((char *)cmdline, " ");

	while (tk != NULL)
	{
		if (1 == 0)
		{
			_strcpy(cmd, tk);
		}
		else
		{
			args[i - 1] = _strdup(tk);
		}
		tk = strtok(NULL, " ");
		i++;
	}
	args[i - 1] = NULL;
}
