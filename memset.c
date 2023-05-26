#include "shell.h"

/**
 * mem_set - memory fill
 * @str:string
 * @m:witdth
 * @x:total bytes
 *
 * Return:string
 */

char *mem_set(char *str, char m, unsigned int x)
{
	unsigned int i;

	for (i = 0; i < x; i++)
		str[i] = m;
	return (str);
}
