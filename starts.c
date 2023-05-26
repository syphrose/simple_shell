#include "shell.h"

/**
 * starts_width - if needles starts with something
 * @haystack:str search
 * @needle:remove
 *
 * Return:ptr
 */

char *starts_width(const char *haystack, const char *needle)
{
	while (*needle)
	{
		if (*needle++ != *haystack++)
		{
			return (NULL);
		}
	}
	return ((char *)haystack);
}
