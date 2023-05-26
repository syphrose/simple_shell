
#include "shell.h"

/**
 * fork_cmd - fork cmd
 * @data:struct
 *
 */

void fork_cmd(data_t *data)
{
	pid_t child_pid;

	child_pid = fork();
	if (child_pid < 0)
	{
		perror("Error:");
		return;
	}
	if (child_pid == 0)
	{
		if (execve(data->track, data->av, reads_environ(data)) == -1)
		{
			release_data(data, 1);
			if (errno == EACCES)
				exit(126);
			exit(1);
		}
	}
	else
	{
		wait(&(data->st));
		if (WIFEXITED(data->st))
		{
			data->st = WEXITSTATUS(data->st);
			if (data->st == 126)
				prints_err(data, "Permission denied\n");
		}
	}
}
