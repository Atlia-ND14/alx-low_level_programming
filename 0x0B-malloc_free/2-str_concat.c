#include "main.h"
/**
 * str_concat - concatenate string
 * @s1: contentes ofs1
 * @s2: new string
 * Return: string or null
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *new_str = malloc(len1 + len2 + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	memcpy(new_str, s1, len1);
	memcpy(new_str + len1, s2, len2 + 1);
	return (new_str);
}
