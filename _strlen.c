#include "shell.h"

/**
 * _strlen - measures the length of a string
 * @str:string
 *
 * Return:length
 */

size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
