#include "shell.h"

/**
 * put_char - prints characters
 * @c:character
 *
 * Return:value
 */

int put_char(char c)
{
	static int i;
	static char buffer[GET_BUFFER_SIZE];

	if (c == BUFFER_FLUSH || i >= GET_BUFFER_SIZE)
	{
		write(1, buffer, i);
		i = 0;
	}
	if (c != BUFFER_FLUSH)
	{
		buffer[i++] = c;
	}
	return (1);
}
