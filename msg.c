#include "shell.h"

/**
 * errorMsg - prints error message
 * @msg:error
 *
 */

void errorMsg(const char *msg)
{
	write(STDERR_FILENO, msg, _strlen(msg));
}
