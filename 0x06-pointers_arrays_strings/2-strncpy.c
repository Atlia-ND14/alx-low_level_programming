#include "main.h"
/**
 * _strncpy - copies at most n bytes of src to dest
 * @dest: destination
 * @src: source
 * @n: n bytes to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *cons = dest;
	int count = 0;

	while (*src != '\0' && count < n)
	{
	*dest = *src;
dest++;
src++;
count++
	}
	while (count < n)
	{
		*dest = \'0';
		dest++;
		src++;
	}

	return (cons);
}
