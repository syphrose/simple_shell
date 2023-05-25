#include "shell.h"
/**
 * ctrl - a command to avoid closing the shell
 *
 * @sig: makes the shell respond
 *
 */
void ctrl(int sig)
{
	(void) sig;
	write(1, "\n$ ", 3);
}
