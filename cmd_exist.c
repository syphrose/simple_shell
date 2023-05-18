#include "shell.h"

/**
 * cmd_exists - checks if the commands exists in the path
 * @cmd:command entered
 * @dir:directory
 *
 * Return:path
 */

int cmd_exists(const char *cmd, const char *dir)
{
	char track[CMD_LEN];

	snprintf(track, sizeof(track), "%s/%s", dir, cmd);
	return (access(track, X_OK) != -1);
}
