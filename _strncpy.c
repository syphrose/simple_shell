#include "shell.h"

/**
 * _strncpy - copies string
 * @dest:destination
 * @src:source
 * @sz:size of string
 *
 * Return:start
 */

char *_strncpy(char *dest, const char *src, int sz)
{
	char *start;

	start = dest;

	while (*src != '\0' && sz > 0)
	{
		*dest = *src;
		dest++;
		src++;
		sz--;
	}
	while (sz > 0)
	{
		*dest = '\0';
		dest++;
		sz--;
	}
	return (start);
}
