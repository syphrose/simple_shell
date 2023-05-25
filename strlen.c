#include "shell.h"

/**
 * str_len - checks the length of a string
 * @string:string
 *
 * Return:returns len
 */

size_t str_len(const char *string)
{
	size_t len;

	len = 0;
	while (*string != '\0')
	{
		len++;
		string++;
	}
	return (len);
}
