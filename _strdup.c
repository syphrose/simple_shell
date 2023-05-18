#include "shell.h"

/**
 * _strdup - duplicates strings
 * @str:string
 *
 * Return:new string
 */

char *_strdup(const char *str)
{
	int len;
	char *new;

	len = _strlen(str) + 1;
	new = malloc(len);
	if (new != NULL)
	{
		memcpy(new, str, len);
	}
	return (new);
}
