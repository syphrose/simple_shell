#include "shell.h"
/**
 * clear_data - data struct
 * @data: storage struct
 *
 */
void clear_data(data_t *data)
{
	data->ag = NULL;
	data->av = NULL;
	data->track = NULL;
	data->ac = 0;
}
