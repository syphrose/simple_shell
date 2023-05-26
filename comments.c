#include "shell.h"
/**
 * deletes_comment - replaces '#' with '\0'
 * @buffer: takes care of str to modify
 *
 */
void deletes_comment(char *buffer)
{
	int i;

	for (i = 0; buffer[i] != '\0'; i++)
		if (buffer[i] == '#' && (!i || buffer[i - 1] == ' '))
		{
			buffer[i] = '\0';
			break;
		}
}
