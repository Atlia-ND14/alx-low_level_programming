#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: memory area
 * @b: constant
 * @n: no of bytrs to be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}

	return (s);
}

