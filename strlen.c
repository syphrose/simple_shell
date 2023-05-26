#include "shell.h"

/**
 * str_len - calculates len of str
 * @s:string
 *
 * Return:value
 */

int str_len(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}
	while (*s++)
	{
		i++;
	}
	return (i);
}
