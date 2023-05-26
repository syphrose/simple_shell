#include "shell.h"

/**
 * puts_ - prints str
 * @str:string
 *
 */

void puts_(char *str)
{
	int i = 0;

	if (!str)
	{
		return;
	}
	while (str[i] != '\0')
	{
		put_char(str[i]);
		i++;
	}
}
