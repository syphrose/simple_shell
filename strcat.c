#include "shell.h"

/**
 * str_cat - concats two strs
 * @dest:destination
 * @src:source
 *
 * Return:ptr
 */

char *str_cat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = *src;
	return (ret);
}
