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
	char *cmdTrack;

	while (1)
	{
		bytes = gets_cmd(cmd, sizeof(cmd));
		if (bytes == 0)
		{
			break;
		}
		exit_line(cmd);
		cmdTrack = handle_path(cmd);

		if (cmdTrack == NULL)
		{
			fprintf(stderr, "%s: Command not found\n", cmd);
			continue;
		}
		exec_token(cmdTrack, "tk");
		free(cmdTrack);
	}
	return (0);
}
