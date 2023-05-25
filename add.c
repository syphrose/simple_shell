#include "shell.h"

/**
 * add - adds char
 * @string:characters
 *
 */

void add(char *string)
{
	while (*string != '\0')
	{
		putchar_(*string);
		string++;
	}
}
