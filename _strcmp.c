#include "shell.h"

/**
 * _strcmp - compares two strings
 * @string1:first string
 * @string2:second string
 *
 * Return: value
 */

int _strcmp(const char *string1, const char *string2)
{
	while (*string1 && (*string1 == *string2))
	{
		string1++;
		string2++;
	}
	return (*(unsigned char *)string1 - *(unsigned char *)string2);
}
