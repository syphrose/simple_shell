#include "shell.h"
/**
 * strn_cat - concatenates two strings
 * @src: source
 * @dest: destination
 * @n: bytes used
 * Return: str
 *
 */
char *strn_cat(char *dest, char *src, int n)
{
	int i, k;
	char *str = dest;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0' && k < n)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	if (k < n)
		dest[i] = '\0';
	return (str);
}
