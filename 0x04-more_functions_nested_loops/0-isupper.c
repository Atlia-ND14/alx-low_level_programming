#include "main.h"
/**
 * main - function that checks for uppercase character
 * @c to be checked
 * Return : 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
