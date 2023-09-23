#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: iputs
 * Return: half of inputs
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int i = len / 2;
	int a;

	if (len % 2 != 0)
	{
		i++;
	}
	for (a  = i; a < len; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
