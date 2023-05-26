#include "shell.h"

/**
 * gets_hist - gets the hsitory
 * @data:struct
 *
 * Return:ptr
 */

char *gets_hist(data_t *data)
{
	char *buffer, *dir;

	dir = get_env(data, "HOME=");
	if (!dir)
		return (NULL);
	buffer = malloc(sizeof(char) * (str_len(dir) + str_len(HISTORY_FILE) + 2));
	if (!buffer)
		return (NULL);
	buffer[0] = 0;
	str_cpy(buffer, dir);
	str_cat(buffer, "/");
	str_cat(buffer, HISTORY_FILE);
	return (buffer);
}
