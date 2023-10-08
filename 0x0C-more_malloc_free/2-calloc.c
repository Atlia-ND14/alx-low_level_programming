#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of elements in the array
 * @size: the size of each element in bytes
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i, result;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = nmemb * size;
	p = malloc(result);
	if (p == NULL)
		return (NULL);
	ptr = (char *)p;
	for (i = 0; i < result; i++)
		ptr[i] = 0;
	return (p);
}
