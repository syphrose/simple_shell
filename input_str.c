#include "shell.h"
/**
 * eputs_ - prints an input str
 * @str: string
 *
 */
void eputs_(char *str)
{
	int i = 0;

	if (!str)
		return;

	while (str[1] != '\0')
	{
		eput_char(str[i]);
		i++;
	}
}
