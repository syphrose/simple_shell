#include "shell.h"
/**
 * str_chr - finds char in a string
 * @c: character
 * @str: string
 * Return: ptr to mem area
 *
 */
char *str_chr(char *str, char c)
{
	do {
		if (*str == c)
			return (str);
	} while (*str++ != '\0');
	return (NULL);
}
