#include "shell.h"

/**
 * main - entry point
 *
 * Return:0(success)
 */

int main(void)
{
	int i;
	int digit = 7;
	int result;

	for (i = 0; i < 10; i++)
	{
		result = i * digit;
		printf("%d * %d = %d\n", i, digit, result);
	}
	return (0);
}
