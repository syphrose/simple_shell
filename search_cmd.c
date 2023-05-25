#include "shell.h"
/**
 * search_cmd - looks for first commands exected in path
 *
 * @cmmd: command
 *
 * Return: error message
 *
 */
char *search_cmd(char *cmmd)
{
	DIR *fd;
	int c;
	struct dirent *start;
	char *cmd, comp, **str = malloc(sizeof(char) * 1024);
	char **separate = malloc(sizeof(char) * 1024);

	while (*environ != NULL)
	{
		if (!(str_cmp(*environ, "PATH")))
		{
			*str = *environ;

			for (c = 0; c < 9; c++, separate++, str++)
			{
				*separate = strtok(*str, ":='PATH'");
				fd = opendir(*separate);

				if (fd == NULL)
				{
					perror("No such file or directory");
				}
				while ((start = readdir(fd)))
				{
					cmd = start->d_name;
					comp = str_cmp(cmd, cmmd);

					if (comp == 0)
					{
						return (*separate);
					}
					if (cmd == NULL)
					{
						perror("Error");
					}
				}
			}
		}
		environ++;
	}
	return ("Error: Not Found");
}
