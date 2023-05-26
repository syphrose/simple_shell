#include "shell.h"
/**
 * get_line - gets line in a func
 * @data: storage struct
 * @lenn: ptr length
 * @p: pointer
 * Return: str
 *
 */
int get_line(data_t *data, char **p, size_t *lenn)
{
	static char buffer[READ_BUFFER_SIZE];
	static size_t i, len;
	size_t k;
	ssize_t n = 0, str = 0;
	char *ptr = NULL, *np = NULL, *c;

	ptr = *p;
	if (ptr && lenn)
		str = *lenn;
	if (i == len)
		i = len = 0;
	n = gets_buffer(data, buffer, &len);
	if (n < 0 || (n == 0 && len == 0))
		return (-1);

	c = str_chr(buffer + i, '\n');
	k = c ? 1 + (unsigned int)(c - buffer) : len;
	np = realloc_(ptr, str, str ? str + k : k + 1);

	if (!np)
		return (ptr ? free(ptr), -1 : -1);
	if (str)
		strn_cat(np, buffer + i, k - i);
	else
		strn_cpy(np, buffer + i, k - i + 1);
	str += k - i;
	i = k;
	ptr = np;

	if (lenn)
		*lenn = str;
	*p = ptr;
	return (str);
}
