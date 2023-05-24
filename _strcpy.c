#include "shell.h"

/**
 * _strcpy - copies string
 * @end:end of string
 * @src:source
 *
 */

void _strcpy(char *end, const char *src)
{
	while (*src != '\0')
	{
		*end = *src;
		end++;
		src++;
	}
	*end = '\0';
}
