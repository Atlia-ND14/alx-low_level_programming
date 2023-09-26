#include "main.h"
/**
 * _strpbrk - function searches a string for any of a set of bytes
 * @s: string
 * @accept: parameter
 * Return: pointer or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	for (int i = 0; s[i] != '\0'; i++)
	{
		for (int j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}

