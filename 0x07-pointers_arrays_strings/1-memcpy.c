#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of byte to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (dest == NULL || src == NULL)
	{
		return (0);
	}
	char *p = dest;

	while n > 0)
	{
		*p = *src;
		src++;
		p++;
		n--
	}

	return (dest);
}
