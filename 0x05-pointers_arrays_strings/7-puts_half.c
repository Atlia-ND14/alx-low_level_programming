#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: iputs
 * Return: half of inputs
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int start = len / 2;

	if (len % 2 != 0)
	{
		start++;
	}
	for (int i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
