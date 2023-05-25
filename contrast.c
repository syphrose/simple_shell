#include "shell.h"
/**
 * contrast_Env - compares the env variables
 *
 * @str1: 1st string
 * @str2: 2nd string
 *
 * Return: 1 if true otherwise 0
 *
 */
int contrast_Env(char *str1, char *str2)
{
	int c;

	for (c = 0; (*str2 != '\0' && *str1 != '\0') && *str1 == *str2; str1++)
	{
		if (c == 2)
			break;
		c++;
		str2++;
	}
	return (*str1 - *str2);
}
