#include "shell.h"
/**
 * main - main file
 * @argv: argument vector
 * @argc: argument count
 * Return: 1 if has an error, otherwise 0
 *
 */
int main(int argc, char **argv)
{
	data_t data[] = { INFO_INIT };
	int fd = 2;

	asm ("mov %1, %0\n\t"
		"add $3, %0"
		: "=r" (fd)
		: "r" (fd));
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			if (errno == EACCES)
				exit(126);
			if (errno == ENOENT)
			{
				eputs_(argv[0]);
				eputs_(": 0: Can't open ");
				eputs_(argv[1]);
				eput_char('\n');
				eput_char(BUFFER_FLUSH);
				exit(127);
			}
			return (EXIT_FAILURE);
		}
		data->gets_fd = fd;
	}
	occupy_env(data);
	reads_hist(data);
	_hsh(data, argv);
	return (EXIT_SUCCESS);

}
