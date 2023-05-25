#include "shell.h"

/**
 * putchar_ - prints characters
 * @c:character
 *
 * Return:1 on success -1 on error
 */

int putchar_(char c)
{
	return (write(1, &c, 1));
}
