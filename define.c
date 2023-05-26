#include "shell.h"
/**
 * check_delim - confirms if the char is a delimeter
 * @c: checked char
 * @delim: delimeter str
 * Return: 0 if false otherwise 1
 *
 */
int check_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);

}
