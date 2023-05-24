#include "shell.h"
/**
 * exit_line - exitting line
 * @str: string
 *
 */
void exit_line(char *str)
{
	str[_strcspn(str, "\n")] = '\0';
}
