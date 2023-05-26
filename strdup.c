#include "shell.h"

/**
 * str_dup - duplicates string
 * @str:string
 *
 * Return:ptr
 */

char *str_dup(const char *str)
{
	int len = 0;
	char *ret;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str++)
	{
		len++;
	}
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
	{
		return (NULL);
	}
	for (len++; len--;)
	{
		ret[len] = *--str;
	}
	return (ret);
}
