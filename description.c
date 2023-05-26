#include "shell.h"
/**
 * get_fd - prints char c to given fd
 * @c: char
 * @fd: file descriptor
 * Return: 1 on success otherwise -1
 *
 */
int get_fd(char c, int fd)
{
	static int i;
	static char buffer[GET_BUFFER_SIZE];

	if (c == BUFFER_FLUSH || i >= GET_BUFFER_SIZE)
	{
		write(fd, buffer, i);
		i = 0;
	}
	if (c != BUFFER_FLUSH)
		buffer[i++] = c;
	return (1);
}
