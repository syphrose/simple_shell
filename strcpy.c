#include "shell.h"

/**
 * str_cpy - copies str
 * @dest:destination
 * @src:source
 *
 * Return:value
 */

char *str_cpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
	{
		return (dest);
	}
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
