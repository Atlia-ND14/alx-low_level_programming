#include "main.h"
/**
 * main - function that checks for uppercase character
 * @c to be checked
 * Return : 1 or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
