#include "shell.h"

/**
 * handle_sig - handles signal
 * @sigNal:num
 *
 */

void handle_sig(__attribute__((unused))int sigNal)
{
	puts_("\n");
	puts_("$ ");
	put_char(BUFFER_FLUSH);
}
