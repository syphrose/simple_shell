#include "shell.h"
/**
 * main - starting point
 * @argv: vectors
 * @argc: arguments count
 *
 * Return: 0
 *
 */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	char cmd[CMD_LEN];
	ssize_t bytes;

	while (1)
	{
		bytes = gets_cmd(cmd, sizeof(cmd));
		if (bytes == 0)
		{
			break;
		}
		exit_line(cmd);
<<<<<<< HEAD
		exec_cmd(cmd, argv[0]);
=======
		cmdTrack = handle_path(cmd);

		if (cmdTrack== NULL)
		{
			fprintf(stderr, "%s: Command not found\n", cmd);
			continue;
		}
		exec_token(args[0], "tk");
		free(cmdTrack);
>>>>>>> c804fa121ffd623aba6c27aeffc9cd2be4eb1ae0
	}
	return (0);
}
