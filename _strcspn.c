#include "shell.h"

/**
 * _strcspn - calculates the length
 * @str1:first param
 * @str2:second param
 *
 * Return:length
 */

size_t _strcspn(const char *str1, const char *str2)
{
	size_t len = 0;
	const char *x;

	while (*str1)
	{
		x = str2;
		while (*x)
		{
			if (*str1 == *x)
			{
				return (len);
			}
			x++;
		}
		len++;
		str1++;
	}
	return (len);
}
