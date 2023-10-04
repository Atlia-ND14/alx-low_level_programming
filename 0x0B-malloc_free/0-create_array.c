#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * @size: size of memory to be printed
 * @c:char
 * Return: pointer or null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	char *array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
