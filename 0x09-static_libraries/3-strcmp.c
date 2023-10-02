#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a])
	{
		if (s1[a] == '\0')
			return (0);
		a++;
	}
	return (s1[a] - s2[a]);
}
