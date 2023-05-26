#include "shell.h"
/**
 * prints_atoi - converts a str to integer
 * @str: converted str
 * Return: 0 if there's no numin str, otherwise ot
 *
 */
int prints_atoi(char *str)
{
	int i, sig = 1, fg = 0, ot;
	unsigned int rslt = 0;

	for (i = 0; str[i] != '\0' && fg != 2; i++)
	{
		if (str[i] == '-')
			sig *= -1;

		if (str[i] >= '0' && str[i] <= '9')
		{
			fg = 1;
			rslt *= 10;
			rslt += (str[i] - '0');
		}
		else if (fg == 1)
			fg = 2;
	}
	if (sig < 0)
		ot = -rslt;
	else
		ot = rslt;

	return (ot);
}
