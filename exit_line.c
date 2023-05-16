#include "shell.h"
/**
 * exit_line - removes new line char
 * @str: string
 *
 */
void exit_line(char *str)
{
	str[strcspn(str, "\n")] = '\0';
}
