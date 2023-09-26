#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @c: character
 * @s: string
 * Return: a pointer or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '/0' && *s != c)
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
