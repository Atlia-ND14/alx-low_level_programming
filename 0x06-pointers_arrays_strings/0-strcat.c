#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp)
	{
		temp++;
	}
	while (*src)
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';

	return (dest);
}
