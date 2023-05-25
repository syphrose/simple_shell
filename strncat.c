#include "shell.h"

/**
 * strconcat - concatenates strings
 * @dest:destination
 * @src:source
 *
 * Return:result
 */

char *strconcat(char *dest, char *src)
{
	int n, i = 0;
	char *rslt = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (rslt);
