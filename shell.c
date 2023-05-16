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
		exec_token(cmd, "tk");
	}
	return (0);
}
