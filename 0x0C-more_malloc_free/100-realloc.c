#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc
 * @old_size: the new memory block
 * @ptr: pointer
 * @new_size: the allocated space for ptr
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i, min;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	min = old_size < new_size ? old_size : new_size;
	for (i = 0; i < min; i++)
		new_ptr[i] = ((char *)ptr)[i];
	free(ptr);
	return (new_ptr);
}

