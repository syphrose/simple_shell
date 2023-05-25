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
	while (*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*(const unsigned char *)str1 - *(const unsigned char *)str2);
}
