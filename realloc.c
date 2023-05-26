#include "shell.h"

/**
 * realloc_ - realloacates memmory
 * @pt:pointer
 * @old:before byte
 * @nnew:after byte
 *
 * Return:void
 */

void *realloc_(void *pt, unsigned int old, unsigned int nnew)
{
	char *p;

	if (!pt)
		return (malloc(nnew));
	if (!nnew)
		return (free(pt), NULL);
	if (nnew == old)
		return (pt);
	p = malloc(nnew);
	if (!p)
		return (NULL);
	old = old < nnew ? old : nnew;
	while (old--)
		p[old] = ((char *)pt)[old];
	free(pt);
	return (p);
}
