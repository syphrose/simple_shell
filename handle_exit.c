#include "shell.h"
/**
 * handles_exit - incase of extra char on exit cmd, it doesn't exit
 * successfully
 *
 * @args: arguments to be passed
 */
void handles_exit(char *const args[])
{
	exit(EXIT_SUCCESS);
}
