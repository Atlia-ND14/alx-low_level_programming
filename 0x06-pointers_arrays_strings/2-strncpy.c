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
	int a;

	for (a = 0; a <= n && src[a] != '\0'; a++)
		dest[a] = src[a];

	for (; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
