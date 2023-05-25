#include "shell.h"

/**
 * str_cmp - compares strings
 * @str1:first string
 * @str2:second string
 *
 * Return:value
 */

int str_cmp(char *str1, char *str2)
{
	int i;

	for (i = 0; (*str2 != '\0' && *str1 != '\0') && *str1 == *str2; str1++)
	{
		if (i == 3)
		{
			break;
		}
		i++;
		str2++;
	}
	return (*str1 - *str2);
}
