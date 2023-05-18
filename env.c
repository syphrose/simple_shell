#include "shell.h"

/**
 * handles_environ - checks for environ args
 * @args:arguments
 *
 */

void handles_environ(char *const args[])
{
	char **en;

	for (en = environ; *en != NULL; en++)
	{
		printf("%s\n", *en);
	}
}
