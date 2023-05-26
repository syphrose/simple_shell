#include "shell.h"
/**
 * strn_cpy - copies a string
 * @dest: destination
 * @src: source
 * @n: num of strings
 * Return: str
 *
 */
char *strn_cpy(char *dest, char *src, int n)
{
	int i, k;
	char *str = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		k = i;
		while (k < n)
		{
			dest[k] = '\0';
				k++;
		}
	}
	return (str);
}
