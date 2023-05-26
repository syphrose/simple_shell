#include "shell.h"

/**
 * reads_hist - gets history from folder
 * @data:struct
 *
 * Return:value
 */

int reads_hist(data_t *data)
{
	int i, lt = 0, lineNum = 0;
	ssize_t fd, rd_len, fsze = 0;
	struct stat st;
	char *buffer = NULL, *fn = gets_hist(data);

	if (!fn)
		return (0);
	fd = open(fn, O_RDONLY);
	free(fn);
	if (fd < 0)
		return (0);
	if (!fstat(fd, &st))
		fsze = st.st_size;
	if (fsze < 2)
		return (0);
	buffer = malloc(sizeof(char) * (fsze + 1));
	if (!buffer)
		return (0);
	rd_len = read(fd, buffer, fsze);
	buffer[fsze] = 0;
	if (rd_len <= 0)
		return (free(buffer), 0);
	close(fd);
	for (i = 0; i < fsze; i++)
		if (buffer[i] == '\n')
		{
			buffer[i] = 0;
			const_hist(data, buffer + lt, lineNum++);
			lt = i + 1;
		}
	if (lt != i)
		const_hist(data, buffer + lt, lineNum++);
	free(buffer);
	data->histNum = lineNUM;
	while (data->histNum-- >= HIST_MAX)
		rm_nd_ind(&(data->hist), 0);
	renum_hist(data);
	return (data->histNum);
}
