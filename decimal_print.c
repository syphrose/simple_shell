#include "shell.h"
/**
 * prints_d - prints a decimal
 * @load: input
 * @fd: file descriptor
 * Return: num
 *
 */
int prints_d(int load, int fd)
{
	int (*_put_char)(char) = put_char;
	int i, num = 0;
	unsigned int abs, temp;

	if (fd == STDERR_FILENO)
		_put_char = eput_char;
	if (load < 0)
	{
		abs = -load;
		_put_char('-');
		num++;
	}
	else
		abs = load;
	temp = abs;
	for (i = 1000000000; i > 1; i /= 10)
	{
		if (abs / i)
		{
			_put_char('0' + temp / i);
			num++;
		}
		temp %= i;
	}
	_put_char('0' + temp);
	num++;

	return (num);
}
