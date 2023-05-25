#include "shell.h"

/**
 * strconcat - concatenates strings
 * @dest:destination
 * @src:source
 *
 * Return:dest
 */

char *strconcat(char *dest, char *src)
{
	char *rslt;
	int len1, len2;
	int m, i, k;

	if (dest == NULL)
	{
		dest ="";
	}
	if (src == NULL)
	{
		src = "";
	}
	len1 = str_len(dest);
	len2 = str_len(src);

	rslt = malloc(((len1) + (len2) + 1) * sizeof(char));
	if (rslt == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < len1; m++)
	{
		rslt[m] = dest[m];
	}
	for (i = len1, k = 0; k <= len2; i++, k++)
	{
		rslt[i] = src[k];
	}
	return (rslt);
}

