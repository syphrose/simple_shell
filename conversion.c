#include "shell.h"
/**
 * converts_num - converter function
 * @num: number
 * @bs: base
 * @fg: flags
 * Return: str
 *
 */
char *converts_num(long int num, int bs, int fg)
{
	static char *x;
	static char buffer[50];
	char sig = 0;
	char *p;
	unsigned long n = num;

	if (!(fg & CONVERTS_UNSIGNED) && num < 0)
	{
		n = -num;
		sig = '-';
	}

	p = &buffer[49];
	*p = '\0';

	do      {
		*--p = x[n % bs];
		n /= bs;
	} while (n != 0);
		if (sig)
			*--p = sig;
	return (p);

}
